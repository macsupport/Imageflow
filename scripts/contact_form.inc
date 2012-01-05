<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<title>iPhorm - Ajax Contact Form</title>

<link rel="stylesheet" type="text/css" href="${resPath}/contact-form/css/pagestyles.css" /><!--Page styles-->
<link rel="stylesheet" type="text/css" href="${resPath}/contact-form/css/standard.css" /><!--Contact form styles-->

<script type="text/javascript" src="${resPath}/contact-form/js/jquery-1.4.4.min.js"></script>
<script type="text/javascript" src="${resPath}/contact-form/js/jquery.form.js"></script>
<script type="text/javascript" src="${resPath}/contact-form/js/jquery.iphorm.js"></script>
<script type="text/javascript" src="${resPath}/contact-form/js/qtip/jquery.qtip-1.0.0-rc3.min.js"></script>
<script type="text/javascript" src="${resPath}/contact-form/js/scripts.js"></script>

<link href='http://fonts.googleapis.com/css?family=Droid+Sans&amp;subset=latin' rel='stylesheet' type='text/css' /> <!--(Optional) Google Web Font -->
</head>
<body>
<div class="outside">
    <!-- To copy the form HTML, start here -->
    <div class="iphorm-outer">
		<form class="iphorm" action="${resPath}/contact-form/process.php" method="post">
		    <div class="iphorm-wrapper">
	        <h1>iPhorm - Ajax contact form</h1>
	        <h2>Easy to install into any PHP / HTML web page</h2>
	        <div class="iphorm-inner">
	            <div class="form-title">Please get in touch</div>
                   <div class="iphorm-message"></div>
	               <div class="iphorm-container clearfix">
	                    <!-- Begin Name element --> 
                        <div class="element-wrapper name-element-wrapper clearfix">
                            <label for="name">Name <span class="red">*</span></label>
                            <div class="input-wrapper name-input-wrapper">
                                <input class="name-element iphorm-tooltip" id="name" type="text" name="name" title="Please enter your full name" />
                            </div>
                        </div>
                        <!-- End Name element --> 
                        <!-- Begin Email element --> 
                        <div class="element-wrapper email-element-wrapper clearfix">
                            <label for="email">Email <span class="red">*</span></label>
                            <div class="input-wrapper email-input-wrapper">
                                <input class="email-element iphorm-tooltip" id="email" type="text" name="email" title="We will never send you spam, we value your privacy as much as our own" />
                            </div>
                        </div>
                        <!-- End Email element --> 
                        <!-- Begin Phone element --> 
                   
                        <!-- End Phone element --> 
                        <!-- Begin Subject element -->
                        
                        <!-- End Subject element -->
                        <!-- Begin Message element -->
                        <div class="element-wrapper message-element-wrapper clearfix">
                            <label for="message">Message <span class="red">*</span></label>
                            <div class="input-wrapper message-input-wrapper clearfix">
                                <textarea class="message-element" id="message" name="message"></textarea>
                            </div>                            
                        </div>
                        <!-- End Message element -->
                        <!-- Begin Captcha element -->
                        <div class="element-wrapper captcha-element-wrapper clearfix">
                            <label for="type_the_word">Type the word <span class="red">*</span></label>
                            <div class="input-wrapper captcha-input-wrapper clearfix">
                                <div class="captcha-img"><img src="${resPath}/contact-form/images/captcha.php" alt="" /></div>
                                <input id="type_the_word" class="captcha-element" type="text" name="type_the_word" />
                            </div>
                        </div>
                        <!-- End Captcha element -->
                        <!-- Begin Submit button -->
                        <div class="button-wrapper submit-button-wrapper clearfix">
                            <div class="button-input-wrapper submit-button-input-wrapper">
                                <input class="submit-element" type="submit" name="contact" value="Send" />
                            </div>
                        </div>
                        <!-- End Submit button -->
	               </div>
	           </div>
		   </div>
		</form>
	</div>
	<!-- To copy the form HTML, end here -->
</div>
</body>
</html>