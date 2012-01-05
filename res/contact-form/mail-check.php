<?php
/**
 * This script will try to send an email using PHP's mail() function and hopefully
 * help you diagnose any problems you might have sending emails with your web server.
 * 
 * Change the email address below and set it to your email address.
 * 
 * If the script says the email was successfully accepted for delivery it does 
 * not guarantee that the message will arrive.  You will need to check your inbox.
 * If the mail does not arrive then there is a problem with your mail delivery system,
 * you should ask your hosting company if they allow you to use PHP's mail() function and
 * how to get it working, it is not a problem with the iPhorm.
 * 
 * If the script says the email was not accepted for delivery you should check for
 * any other errors on the page that may indicate the reason for this.  You will need
 * to ask your hosting company if they allow you to use PHP's mail() function and
 * how to set that up.
 * 
 * If your hosting company does not allow you to use the mail() function, you should read
 * the iPhorm documentation which explains how you can set up the iPhorm to use an SMTP server
 * instead to send the email.  Alternatively you could find another host that does allow you to
 * use the function.
 */

// Replace the email address below with your email address
$email = 'spam@freerangewebdesign.com';

// Turn on all error reporting
error_reporting(E_ALL);
ini_set('display_errors', 'On');

$result = mail($email, 'Test message', 'Message content', "From: $email");

if ($result) {
    echo 'Mail was succesfully accepted for delivery - check your inbox';
} else {
   echo 'Mail was NOT accepted for delivery - check for errors';
}