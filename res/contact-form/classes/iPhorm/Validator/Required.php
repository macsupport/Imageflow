<?php

/**
 * Required Validator
 */
class iPhorm_Validator_Required extends iPhorm_Validator_Abstract
{
    /**
     * Checks whether the given value is not empty. Also sets
     * the error message if value is empty.
     * 
     * @param $value The value to check
     * @return boolean True if valid false otherwise
     */
    public function isValid($value)
    {
        $valid = true;
        
        if ($value === null || $value === '') {
            $this->addMessage('This field is required');
            $valid = false;
        }
        
        return $valid;
    }
}