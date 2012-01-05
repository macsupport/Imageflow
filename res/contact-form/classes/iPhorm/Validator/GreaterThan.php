<?php

/**
 * GreaterThan Validator
 */
class iPhorm_Validator_GreaterThan extends iPhorm_Validator_Abstract
{    
    /**
     * Minimum value
     * 
     * @var mixed
     */
    protected $_min;
    
    public function __construct($options = array())
    {
        if (is_array($options)) {
            if (array_key_exists('min', $options)) {
                $this->setMin($options['min']);
            } else {
                throw new Exception("Missing option 'min'");
            }
        }
    }
    
    /**
     * Returns true if and only if $value is greater than min option
     * 
     * @param string $value
     * @return boolean
     */
    public function isValid($value)
    {
        if ($this->_min >= $value) {
            $this->addMessage("'$value' is not greater than $this->_min");
            return false;
        }
        
        return true;
    }
    
    /**
     * Sets the minimum value
     * 
     * @param mixed $min
     */
    public function setMin($min)
    {
        $this->_min = $min;
    }
    
    /**
     * Get the minimum value
     * 
     * @return mixed
     */
    public function getMin()
    {
        return $this->_min;
    }
}