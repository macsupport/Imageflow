<?php

/**
 * Digits Validator
 */
class iPhorm_Validator_Digits extends iPhorm_Validator_Abstract
{
    /**
     * Returns true if the given value contains only digits.
     * Return false otherwise.
     * 
     * @param string $value
     * @return boolean
     */
    public function isValid($value)
    {
        $value = (string) $value;
        
        $digitsFilter = new iPhorm_Filter_Digits();
        
        if ($value !== $digitsFilter->filter($value)) {
            $this->addMessage('Only digits are allowed');
            return false;
        }
        
        return true;
    }
}