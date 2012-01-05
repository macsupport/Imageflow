<?php

/**
 * Alpha Numeric Filter
 */
class iPhorm_Filter_AlphaNumeric implements iPhorm_Filter_Interface
{
    /**
     * Whether to allow white space characters; off by default
     * 
     * @var boolean
     */
    protected $_allowWhiteSpace = false;
    
    public function __construct($options = array())
    {
        if (is_array($options)) {
            if (array_key_exists('allowWhiteSpace', $options)) {
                $this->setAllowWhiteSpace($options['allowWhiteSpace']);
            }
        }
    }
    
    /**
     * Filter everything from the given value except alpha-numeric
     * characters
     * 
     * @param string $value The value to filter
     * @return string The filtered value
     */
    public function filter($value)
    {
        $whiteSpace = $this->getAllowWhiteSpace() ? '\s' : '';
        
        $pattern = '/[^a-zA-Z0-9' . $whiteSpace . ']/';
        
        return preg_replace($pattern, '', (string) $value);
    }
    
    public function setAllowWhiteSpace($flag)
    {
        $this->_allowWhiteSpace = (bool) $flag;
    }
    
    public function getAllowWhiteSpace()
    {
        return $this->_allowWhiteSpace;
    }
}