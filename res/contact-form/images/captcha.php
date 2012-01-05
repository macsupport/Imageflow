<?php
/**
 * This code will read the images/captcha directory for the
 * captcha images and pick a random one.  The random image
 * will be displayed for the user to copy.
 */
session_start();

$files = array();
$fileDir = realpath(dirname(__FILE__));
$imageDir = $fileDir . '/captcha';

if ($handle = opendir($imageDir)) {
    while (false !== ($file = readdir($handle))) {
        if (strtolower(substr($file, -3)) == 'png') {
            $files[] = $file;
        }
    }
    closedir($handle);
}

if (count($files) > 0) {
    $image = $files[array_rand($files)];
    $code = str_replace('.png', '', $image);
    
    $namespace = trim(strip_tags($_GET['namespace']));
    $namespace = empty($namespace) ? 'default' : $namespace;
    $_SESSION['iphorm_captcha'][$namespace] = $code;
    
    header('Content-Type: image/png');
    echo file_get_contents($imageDir . '/' . $image);
}