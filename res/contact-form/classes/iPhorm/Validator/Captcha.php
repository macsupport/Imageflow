<?php

/**
 * Captcha Validator
 */
class iPhorm_Validator_Captcha extends iPhorm_Validator_Abstract
{
    /**
     * Compares the given value with the captcha value
     * saved in session. Also sets the error message.
     * 
     * @param $value The value to check
     * @param $context The other submitted form values
     * @return boolean True if valid false otherwise
     */
    public function isValid($value, $context = null)
    {
        $namespace = 'default';
        if (is_array($context) && array_key_exists('type_the_word_namespace', $context)) {
            $namespace = $context['type_the_word_namespace'];
        }
        
        if ($value == $_SESSION['iphorm_captcha'][$namespace]) {
            return true;
        }
        
        $this->addMessage('The characters do not match');
        return false;
    }
}