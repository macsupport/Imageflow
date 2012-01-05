<?php

/**
 * The success message displayed when the form is successfully submitted
 */
$successMessage = '<div class="success-message">Your message has been sent, thank you.</div>';

/**
 * Configure the recipients of the message.  You can add multiple email
 * addresses by adding one on each line inside the array enclosed in quotes,
 * separated by commas. E.g.
 * $recipients = array(
 *     'recipient1@example.com',
 *     'recipient2@example.com'
 * );
 */
$recipients = array(
    '${contactEmail}'
);

/**
 * Do not change these 5 lines
 */
session_start();
define('IPHORM_ROOT', realpath(dirname(__FILE__)));
require_once IPHORM_ROOT . '/classes/iPhorm.php';
$form = new iPhorm();
iPhorm::registerAutoload();

/**
 * Configure the name element
 * Filters: Trim
 * Validators: Required
 * 
 * This example uses the addFilter and addValidator methods which are 
 * used to add single filters or validators at a time.
 * 
 * See documentation for more help with element configuration
 */ 
$name = new iPhorm_Element('name');             // Create the name element - name must be the same as the name attribute of your form element in the HTML
$name->addFilter('trim');                       // Add the Trim filter to the element
$name->addValidator('required');                // Add the Required validator to the element (makes the field required)
$form->addElement($name);                       // Add the element to the form

/**
 * Configure the email element.
 * Filters: Trim
 * Validators: Required, Email
 * 
 * See documentation for more help with element configuration
 */
$email = new iPhorm_Element('email');               // Create the email element - email must be the same as the name attribute of your form element in the HTML 
$email->addFilter('trim');                          // Add the Trim filter to the element
$email->addValidators(array('required', 'email'));  // Add the Required and Email validators to the element
$form->addElement($email);                          // Add the element to the form

/**
 * Configure the phone element
 * Filters: Trim
 * Validators: (None)
 
$phone = new iPhorm_Element('phone');               // Create the phone element - phone must be the same as the name attribute of your form element in the HTML
$phone->addFilter('trim');                          // Add the Trim filter to the element
$form->addElement($phone);                          // Add the element to the form
*/
/**
 * Configure the subject element
 * Filters: Trim
 * Validators: (None)
 */
$subject = new iPhorm_Element('subject');             // Create the subject element - subject must be the same as the name attribute of your form element in the HTML
$subject->addFilter('trim');                          // Add the Trim filter to the element
$form->addElement($subject);                          // Add the element to the form

/**
 * Configure the message element
 * Filters: Trim
 * Validators: Required
 */
$message = new iPhorm_Element('message');             // Create the message element - message must be the same as the name attribute of your form element in the HTML
$message->addFilter('trim');                          // Add the Trim filter to the element
$message->addValidator('required');                   // Add the Required validator to the element
$form->addElement($message);                          // Add the element to the form

/**
 * Configure the CAPTCHA element
 * Filters: Trim
 * Validators: Required, Captcha
 */
$captcha = new iPhorm_Element('type_the_word');       // Create the type_the_word (captcha) element - type_the_word must be the same as the name attribute of your form element in the HTML
$captcha->addFilter('trim');                          // Add the Trim filter to the element
$captcha->addValidators(array('required', 'captcha'));// Add the Required and Captcha validators to the element
$captcha->setSkipRender(true);                        // Do not show the value in the email
$form->addElement($captcha);                          // Add the element to the form

/**
 * Create the email success handler, this will email the
 * contents of the form to the set recipients when the form
 * is successfully submitted.
 */
$emailSuccessHandler = new iPhorm_SuccessHandler_Email();
$emailSuccessHandler->setRecipients($recipients);
$form->addSuccessHandler($emailSuccessHandler);

// Set the success message
$form->setSuccessMessage($successMessage);

// Process the form and echo the response
echo $form->process();