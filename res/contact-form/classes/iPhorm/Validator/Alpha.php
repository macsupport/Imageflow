<?php

/**
 * Alpha Validator
 */
class iPhorm_Validator_Alpha extends iPhorm_Validator_Abstract
{
    /**
     * Returns true if the given value contains only alphabet characters.
     * Return false otherwise.
     * 
     * @param string $value
     * @return boolean
     */
    public function isValid($value)
    {
        $value = (string) $value;
        
        $alphaFilter = new iPhorm_Filter_Alpha();
        
        if ($value !== $alphaFilter->filter($value)) {
            $this->addMessage('Only alphabet characters are allowed');
            return false;
        }
        
        return true;
    }
}