<?php

/**
 * Digits Filter
 */
class iPhorm_Filter_Digits implements iPhorm_Filter_Interface
{
    /**
     * Filter everything from the given value except digits
     * 
     * @param string $value The value to filter
     * @return string The filtered value
     */
    public function filter($value)
    {
        $pattern = '/[^0-9]/';
        return preg_replace($pattern, '', (string) $value);
        
    }
}