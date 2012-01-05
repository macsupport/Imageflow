<?php

class iPhorm_SuccessHandler_Email implements iPhorm_SuccessHandler_Interface
{    
    /**
     * The recipients of the email
     * 
     * @var array
     */
    protected $_recipients = array();
    
    /**
     * Set the recipients of the enquiry
     * 
     * @param array|string $recipients The array of recipients or a single email address string
     */
    public function setRecipients($recipients)
    {
        $this->clearRecipients();
        $this->addRecipients($recipients);
    }
    
    /**
     * Add a single recipient
     * 
     * @param string $recipient An email address of the recipient
     */
    public function addRecipient($recipient)
    {
        $this->_recipients[] = $recipient;
    }
    
    /**
     * Add multiple recipients
     * 
     * @param array $recipients The array of recipients or a single email address string
     */
    public function addRecipients($recipients)
    {
        if (!is_array($recipients)) {
            $recipients = (array) $recipients;
        }
        
        foreach ($recipients as $recipient) {
            $this->addRecipient($recipient);
        }
    }
    
    /**
     * Removes all recipients
     */
    public function clearRecipients()
    {
        $this->_recipients = array();
    }
    
    /**
     * Get the recipients
     * 
     * @return array The array of recipient email addresses
     */
    public function getRecipients()
    {
        return $this->_recipients;
    }
    
    /**
     * Get the email body in HTML.  A list
     * of the elements in the form along with their
     * filtered values.
     * 
     * @return string The email body in HTML
     */
    protected function _getEmailBodyHtml(iPhorm $form)
    {
        $content = '';
        
        foreach ($form->getElements() as $element) {
            if (!$element->getSkipRender()) {
                $content .= $element->renderValueHtml();
            }
        }
        
        ob_start();
        require_once IPHORM_ROOT . '/email.php';
        $xhtml = ob_get_clean();
        
        return $xhtml;
    }
    
    /**
     * Get the email body in plain text.  A list
     * of the elements in the form along with their
     * filtered values.
     * 
     * @return string The email body in plain text
     */
    protected function _getEmailBodyPlain(iPhorm $form)
    {
        $plain = 'Contact enquiry from your website' . PHP_EOL . PHP_EOL;
        
        foreach ($form->getElements() as $element) {
            if (!$element->getSkipRender()) {
                $plain .= $element->renderValuePlain();
                $plain .= PHP_EOL . PHP_EOL;
            }
        }
        
        return $plain;
    }
    
    /**
     * Sends the email to the set recipients
     */
    public function run(iPhorm $form)
    {
        // Include the Swift Mailer library
        require_once IPHORM_ROOT . '/classes/Swift-4.0.6/lib/swift_required.php';
        
        // Create new transport to use PHP's mail() function
        $transport = Swift_MailTransport::newInstance();
                
        // You could use an SMTP server here instead
        //$transport = Swift_SmtpTransport::newInstance('yoursmtpserver.com', 25)->setUsername('smtpusername')->setPassword('smtppassword');
        
        // Create the mailer instance
        $mailer = Swift_Mailer::newInstance($transport);
        
        // Create a new mail message
        $message = Swift_Message::newInstance();        
        
        // Set the from address
        if ($form->getValue('email') == null) {
            $message->setFrom('noreply@example.com');
        } else {
            $message->setFrom($form->getValue('email'));
        }
        
        // Set the subject
        $subject = 'Contact enquiry from ';
        if ($form->getValue('name') == null) {
            $subject .= 'your website';
        } else {
            $subject .= $form->getValue('name');
        }
        $message->setSubject($subject);
        
        // Set the to addresses
        $message->setTo($this->getRecipients());
        
        // Set the message content
        $message->setBody($this->_getEmailBodyHtml($form), 'text/html');
        $message->addPart($this->_getEmailBodyPlain($form), 'text/plain');
        
        // Send the message
        $mailer->send($message);
    }
}