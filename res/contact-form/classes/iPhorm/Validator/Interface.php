<?php

/**
 * Validator Interface
 */
interface iPhorm_Validator_Interface
{
    public function isValid($value);
    public function getMessages();
}