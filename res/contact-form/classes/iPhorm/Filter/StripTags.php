<?php

/**
 * Strip Tags Filter
 */
class iPhorm_Filter_StripTags implements iPhorm_Filter_Interface
{
    /**
     * HTML tags that will not be stripped
     * 
     * @var array
     */
    protected $_allowableTags = array();
    
    public function __construct($options = array())
    {
        if (is_array($options)) {
            if (array_key_exists('allowableTags', $options)) {
                $this->setAllowableTags($options['allowableTags']);
            }
        }
    }
    
    /**
     * Strips all HTML tags from the given value.
     * 
     * @param string $value The value to filter
     * @return string The filtered value
     */
    public function filter($value)
    {
        return strip_tags($value, join('', $this->getAllowableTags()));
    }
    
    /**
     * Set the allowable tags
     * 
     * @param array $allowableTags
     */
    public function setAllowableTags($allowableTags)
    {
        $this->_allowableTags = $allowableTags;
    }
    
    /**
     * Get the allowable tags
     * 
     * @return array
     */
    public function getAllowableTags()
    {
        return $this->_allowableTags;
    }
}