<?php

/**
 * Validator Abstract Class
 */
abstract class iPhorm_Validator_Abstract implements iPhorm_Validator_Interface
{
    protected $_messages = array();
    
    public function getMessages()
    {
        return $this->_messages;
    }
    
    public function addMessage($message)
    {
        $this->_messages[] = $message;
    }
}