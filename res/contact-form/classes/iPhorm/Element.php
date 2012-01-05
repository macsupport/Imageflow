<?php

class iPhorm_Element
{
    /**
     * Element name
     * 
     * @var string
     */
    protected $_name;
    
    /**
     * Element label
     * 
     * @var string
     */
    protected $_label;
    
    /**
     * Element value
     * 
     * @var mixed
     */
    protected $_value;
    
    /**
     * Element filters
     * 
     * @var array
     */
    protected $_filters = array();
    
    /**
     * Element validators
     * 
     * @var array
     */
    protected $_validators = array();
    
    /**
     * Error messages
     * 
     * @var array
     */
    protected $_errors = array();
    
    /**
     * Is the element multiple input e.g. multiple select
     * 
     */
    protected $_isMultiple = false;
    
    /**
     * Is the element in an array?
     * 
     * @var boolean
     */
    protected $_isArray = false;
    
    /**
     * Should the element be shown in the email?
     * 
     * @var boolean
     */
    protected $_skipRender = false;
    
    /**
     * The form this element belongs to
     * 
     * @var iPhorm
     */
    protected $_form = null;    
    
    public function __construct($name, $label = '')
    {
        if (is_string($name)) {
            if (substr($name, -2) == '[]') {
                $this->setIsMultiple(true);
                $name = substr($name, 0, -2);
            }
            
            if ($name !== '') {
                $this->setName($name);
                
                if (!is_string($label) || $label == '') {
                    $this->setLabel($this->_prettyName($this->getName()));
                } else {
                    $this->setLabel($label);
                }         
            } else {
                throw new Exception('Every form element must have a name');
            }            
        } else {
            throw new Exception('Form element name must be a string');
        }
    }    
    
    /**
     * Set the name of the element
     * 
     * @param string $name The name to set 
     */
    public function setName($name)
    {
        $this->_name = $name;
    }
    
    /**
     * Get the name of the element
     * 
     * @return string The name of the element
     */
    public function getName()
    {
        return $this->_name;
    }
    
    /**
     * Set the label of the element
     * 
     * @param string $label The label to set 
     */
    public function setLabel($label)
    {
        $this->_label = $label;
    }
    
    /**
     * Get the label of the element
     * 
     * @return string The label of the element
     */
    public function getLabel()
    {
        return $this->_label;
    }
    
    /**
     * Get the fully qualified name of the element
     * 
     * @return string
     */
    public function getFullyQualifiedName()
    {
        $name = $this->getName();
        
        if ($this->getIsMultiple()) {
            $name .= '[]';
        }
        
        return $name;
    }
    
    /**
     * Set the flag that the element can have multiple values.
     * 
     * @param boolean $flag
     */
    public function setIsMultiple($flag = true)
    {
        $this->_isMultiple = (bool) $flag;
    }
    
    /**
     * Does this element have multiple values?
     * 
     * @return boolean
     */
    public function getIsMultiple()
    {
        return $this->_isMultiple;
    }
    
    /**
     * Set the flag to indicate that the element is
     * an array.
     * 
     * @param boolean $flag
     */
    public function setIsArray($flag = true)
    {
        $this->_isArray = (bool) $flag;
    }
    
    /**
     * Is the element an array?
     * 
     * @param boolean $flag
     */
    public function getIsArray()
    {
        return $this->_isArray;
    }
    
    /**
     * Add a filter
     * 
     * @param string|iPhorm_Filter_Interface $filter The name or instance of the filter
     */
    public function addFilter($filter, $options = array())
    {
        if (is_string($filter)) {
            $filter = $this->_loadFilter($filter, $options);
        }
        
        if ($filter instanceof iPhorm_Filter_Interface) {
            $name = get_class($filter);
            $this->_filters[$name] = $filter;
        } else {
            throw new Exception('Filter passed to addFilter must be a string or instance of iPhorm_Filter_Interface');
        }
    }
    
    /**
     * Add multiple filters
     * 
     * @param array $filters The array of filter names or instances
     */
    public function addFilters(array $filters)
    {
        foreach ($filters as $filter) {
            if (is_string($filter)) {
                $this->addFilter($filter);
            } else if ($filter instanceof iPhorm_Filter_Interface) {
                $this->addFilter($filter);
            } else if (is_array($filter)) {
                if (isset($filter[0])) {
                    $options = array();
                    if (isset($filter[1]) && is_array($filter[1])) {
                        $options = $filter[1];
                    }
                    
                    $this->addFilter($filter[0], $options);
                }
            }
        }
    }
    
    /**
     * Set the filters, overrides previously added filters
     * 
     * @param array $filters The array of filter names or instances
     */
    public function setFilters(array $filters)
    {
        $this->clearFilters();
        $this->addFilters($filters);
    }
    
    /**
     * Remove all filters
     */
    public function clearFilters()
    {
        $this->_filters = array();   
    }
    
    /**
     * Does this element have filters?
     * 
     * @return boolean
     */
    public function hasFilters()
    {
        return count($this->getFilters()) > 0;
    }
    
    /**
     * Get the filters
     * 
     * @return array The array of filters
     */
    public function getFilters()
    {
        return $this->_filters;
    }
    
    /**
     * Does the element have the given filter?
     * 
     * @param string $name The name of the filter
     * @return boolean
     */
    public function hasFilter($filter)
    {
        $result = false;
                
        if ($filter instanceof iPhorm_Filter_Interface) {
            $filter = get_class($filter);
        }        
    
        if (is_string($filter)) {
            if (strpos($filter, 'iPhorm_Filter_') === false) {
                $filter = 'iPhorm_Filter_' . ucfirst($filter);
            }
            
            $result = array_key_exists($filter, $this->getFilters());
        }
        
        return $result;
    }
    
    /**
     * Add a validator
     * 
     * @param string|iPhorm_Validator_Interface $validator The validator to add
     */
    public function addValidator($validator, $options = array())
    {
        if (is_string($validator)) {
            $validator = $this->_loadValidator($validator, $options);
        }
        
        if ($validator instanceof iPhorm_Validator_Interface) {
            $name = get_class($validator);
            $this->_validators[$name] = $validator;
        } else {
            throw new Exception('Validator passed to addValidator must be a string or instance of iPhorm_Validator_Interface');
        }
    }
    
    /**
     * Add mutliple validators
     * 
     * @param array $validators The validators to add
     */
    public function addValidators(array $validators)
    {
        foreach ($validators as $validator) {
            if (is_string($validator)) {
                $this->addValidator($validator);
            } else if ($validator instanceof iPhorm_Validator_Interface) {
                $this->addValidator($validator);
            } else if (is_array($validator)) {
                if (isset($validator[0])) {
                    $options = array();
                    if (isset($validator[1]) && is_array($validator[1])) {
                        $options = $validator[1];
                    }
                    
                    $this->addValidator($validator[0], $options);
                }
            }
        }
    }
   
    /**
     * Set the validators, overrides previously added validators
     * 
     * @param array $validators The validators to add
     */
    public function setValidators(array $validators)
    {
        $this->clearValidators();
        $this->addValidators($validators);
    }
    
    /**
     * Remove all validators
     */
    public function clearValidators()
    {
        $this->_validators = array();
    }
    
    /**
     * Does the element have any validators?
     * 
     * @return boolean
     */
    public function hasValidators()
    {
        return count($this->getValidators()) > 0;
    }
    
    /**
     * Get the validators
     * 
     * @return array The validators
     */
    public function getValidators()
    {
        return $this->_validators;
    }
    
    /**
     * Does the element have the given validator?
     * 
     * @param string|iPhorm_Validator_Interface $name The name or instance of the validator
     * @return boolean
     */
    public function hasValidator($validator)
    {
        $result = false;
                
        if ($validator instanceof iPhorm_Validator_Interface) {
            $validator = get_class($validator);
        }        
    
        if (is_string($validator)) {
            if (strpos($validator, 'iPhorm_Validator_') === false) {
                $validator = 'iPhorm_Validator_' . ucfirst($validator);
            }
            
            $result = array_key_exists($validator, $this->getValidators());
        }
        
        return $result;
    }
    
    /**
     * Get the unfiltered (raw) value
     * 
     * @return string The raw value
     */
    public function getValueUnfiltered()
    {
        return $this->_value;
    }
    
    /**
     * Set the value
     * 
     * @param srting $value The value to set
     */
    public function setValue($value)
    {
        $this->_value = $value;
    }
    
    /**
     * Get the filtered value
     * 
     * @return string The filtered value
     */
    public function getValue()
    {
        $valueFiltered = $this->_value;
        
        if (is_array($valueFiltered)) {
            $this->_filterValueRecursive($valueFiltered);
        } else {
            $this->_filterValue($valueFiltered);
        }
        
        return $valueFiltered;
    }
    
    /**
     * Is the given value valid?
     * 
     * @param string $value The value to check
     * @param array $context The other submitted form values
     * @return boolean True if valid, false otherwise
     */
    public function isValid($value, $context = null)
    {
        $this->setValue($value);
        $value = $this->getValue();
        
        if (($value === '' || $value === null) && !$this->hasValidator('required')) {
            return true; // Do not test validators if the field is empty and is not required
        }
        
        $this->_errors = array();
        $valid = true;
        
        foreach ($this->getValidators() as $validator) {
            if (is_array($value)) {
                $errors = array();
                foreach ($value as $val) {
                    if (!$validator->isValid($val, $context)) {
                        $valid = false;
                        $errors = array_merge($errors, $validator->getMessages());
                    }
                }
            } elseif ($validator->isValid($value, $context)) {
                continue;
            } else {
                $errors = $validator->getMessages();
                $valid = false;
            }
            
            $this->_errors = array_merge($this->_errors, $errors);
        }
        
        return $valid;
    }
    
    /**
     * Get the error messages
     * 
     * @return array The error messages
     */
    public function getErrors()
    {
        return $this->_errors;
    }
    
    /**
     * Does the element have errors?
     * 
     * @return boolean
     */
    public function hasErrors()
    {
        return count($this->getErrors()) > 0;
    }
    
    /**
     * Set whether or not to show the element in
     * the email.
     * 
     * @param boolean $flag
     */
    public function setSkipRender($flag = true)
    {
        $this->_skipRender = (bool) $flag;
    }
    
    /**
     * Should the element be skipped during rendering
     * 
     * @return boolean
     */
    public function getSkipRender()
    {
        return $this->_skipRender;
    }
    
    /**
     * Render the name and value of the element using HTML,
     * to display in the email.
     * 
     * @return string The HTML rendering of the name and value of the element
     */
    public function renderValueHtml()
    {
        // Get the filtered value
        $value = $this->getValue();                
                
        $xhtml = '<div class="field-wrapper">';
        $xhtml .= '<h4 class="field-name">';
        $xhtml .= $this->getForm()->escape($this->getLabel());
        $xhtml .= '</h4>';
        $xhtml .= '<div class="field-content">';
        
        if (is_string($value)) {
            if ($value == '') {
                $xhtml .= '(Not specified)';
            } else {
                // Encode HTML entities according to set encoding
                $xhtml .= nl2br($this->getForm()->escape($value));
            }
        } else if (is_array($value)) {
            foreach ($value as $val) {
                $xhtml .= '<div class="multi-field-row">';
                if (is_string($val)) {
                    if ($val == '') {
                        $xhtml .= '(Not specified)';
                    } else {
                        // Encode HTML entities according to set encoding
                        $xhtml .= nl2br($this->getForm()->escape($val));
                    }
                } else {
                    $xhtml .= '(Value is not a string and cannot be displayed)';
                }
                $xhtml .= '</div>';
            }
        } else {
            $xhtml .= '(Value is not a string or array and cannot be displayed)';
        }
        
        $xhtml .= '</div>';
        $xhtml .= '</div>';
        
        return $xhtml;
    }
    
    /**
     * Render the name and value of the element using plain text,
     * to display in the email.
     * 
     * @return string The name and value of the element in plain text
     */
    
    public function renderValuePlain()
    {
        // Get the filtered value
        $value = $this->getValue();
        
        $plain = $this->getLabel() . PHP_EOL;
        $plain .= '------------------------' . PHP_EOL;
        
        if (is_string($value)) {
            if ($value == '') {
                $plain .= '(Not specified)' . PHP_EOL;
            } else {
                $plain .= $value . PHP_EOL;
            }
        } else if (is_array($value)) {
            foreach ($value as $val) {
                if (is_string($val)) {
                    if ($val == '') {
                        $plain .= '(Not specified)' . PHP_EOL;
                    } else {
                        $plain .= $val . PHP_EOL;
                    }                    
                } else {
                    $plain .= '(Value is not a string and cannot be displayed)' . PHP_EOL;
                }
                
            }
        } else {            
            $plain .= '(Value is not a string or array and cannot be displayed)' . PHP_EOL;
        }
        
        return $plain;
    }
    
    /**
     * Set the form the element belongs to
     * 
     * @param iPhorm $form
     */
    public function setForm(iPhorm $form)
    {
        $this->_form = $form;
    }
    
    /**
     * Get the form the element belongs to
     * 
     * @return iPhorm
     */
    public function getForm()
    {
        return $this->_form;
    }
    
    /**
     * Filter the given value by reference
     * 
     * @param string $value
     */
    protected function _filterValue(&$value)
    {
        foreach ($this->getFilters() as $filter) {
            $value = $filter->filter($value);
        }
    }
    
    /**
     * Recursively filter the given value by reference
     * 
     * @param array $value
     */
    protected function _filterValueRecursive(&$value)
    {
        if (is_array($value)) {
            array_walk($value, array($this, '_filterValueRecursive'));
        } else {
            $this->_filterValue($value);
        }
    }
    
    /**
     * Load the filter instance from the given name
     * 
     * @param string $filter
     * @param array $options Options to pass to the filter
     * @return null|iPhorm_Filter_Interface The filter
     */
    protected function _loadFilter($filter, $options = array())
    {
        $instance = null;
        
        if (!empty($filter)) {
            $className = 'iPhorm_Filter_' . ucfirst($filter);
            if (class_exists($className)) {
                $instance = new $className($options);
            }
        }
        
        if ($instance == null) {
            throw new Exception("Filter '$filter' does not exist");
        }
        
        return $instance;
    }

    /**
     * Load the validator instance from the given name
     * 
     * @param string $validator
     * @param array $options Options to pass to the validator
     * @return null|iPhorm_Validator_Interface The validator
     */
    protected function _loadValidator($validator, $options = array())
    {
        $instance = null;
        
        if (!empty($validator)) {
            $className = 'iPhorm_Validator_' . ucfirst($validator);
            if (class_exists($className)) {
                $instance = new $className($options);
            }
        }
        
        if ($instance == null) {
            throw new Exception("Validator '$validator' does not exist");
        }
        
        return $instance;
    }
    
    /**
     * Get the pretty version of the form element name. Translates
     * the machine name to a more human readable format.  E.g.
     * "email_address" becomes "Email address".
     * 
     * @param string $name The form element name
     * @return string The pretty version of the name
     */
    protected function _prettyName($name)
    {
        $prettyName = str_replace(array('-', '_'), ' ', $name);
        $prettyName = ucfirst($prettyName);
        return $prettyName;
    }
}