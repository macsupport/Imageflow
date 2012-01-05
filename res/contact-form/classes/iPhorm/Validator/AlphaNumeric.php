<?php

/**
 * Alpha Numeric Validator
 */
class iPhorm_Validator_AlphaNumeric extends iPhorm_Validator_Abstract
{
    /**
     * Returns true if the given value contains only alpha-numeric characters.
     * Return false otherwise.
     * 
     * @param string $value
     * @return boolean
     */
    public function isValid($value)
    {
        $value = (string) $value;
        
        $alphaNumericFilter = new iPhorm_Filter_AlphaNumeric();
        
        if ($value !== $alphaNumericFilter->filter($value)) {
            $this->addMessage('Only alphanumeric characters are allowed');
            return false;
        }
        
        return true;
    }
}