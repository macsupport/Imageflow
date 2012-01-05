<?php

/**
 * LessThan Validator
 */
class iPhorm_Validator_LessThan extends iPhorm_Validator_Abstract
{    
    /**
     * Maximum value
     * 
     * @var mixed
     */
    protected $_max;
    
    public function __construct($options = array())
    {
        if (is_array($options)) {
            if (array_key_exists('max', $options)) {
                $this->setMax($options['max']);
            } else {
                throw new Exception("Missing option 'max'");
            }
        }
    }
    
    /**
     * Returns true if and only if $value is less than max option
     * 
     * @param string $value
     * @return boolean
     */
    public function isValid($value)
    {
        if ($this->_max <= $value) {
            $this->addMessage("'$value' is not less than $this->_max");
            return false;
        }
        
        return true;
    }
    
    /**
     * Sets the maximum value
     * 
     * @param mixed $max
     */
    public function setMax($max)
    {
        $this->_max = $max;
    }
    
    /**
     * Get the maximum value
     * 
     * @return mixed
     */
    public function getMax()
    {
        return $this->_max;
    }
}