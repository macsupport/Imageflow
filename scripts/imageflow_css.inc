 
<% containerHeight = rows * (maxThumbHeight + 40) %>
/* http://meyerweb.com/eric/tools/css/reset/ 
   v2.0 | 20110126
   License: none (public domain)
*/

html, body, div, span, applet, object, iframe,
h1, h2, h3, h4, h5, h6, p, blockquote, pre,
a, abbr, acronym, address, big, cite, code,
del, dfn, em, img, ins, kbd, q, s, samp,
small, strike, strong, sub, sup, tt, var,
b, u, i, center,
dl, dt, dd, ol, ul, li,
fieldset, form, label, legend,
table, caption, tbody, tfoot, thead, tr, th, td,
article, aside, canvas, details, embed, 
figure, figcaption, footer, header, hgroup, 
menu, nav, output, ruby, section, summary,
time, mark, audio, video {
	margin: 0;
	padding: 0;
	border: 0;
	font-size: 100%;
	font: inherit;
	vertical-align: baseline;
}
/* HTML5 display-role reset for older browsers */
article, aside, details, figcaption, figure, 
footer, header, hgroup, menu, nav, section {
	display: block;
}
body {
	line-height: 1;
}
ol, ul {
	list-style: none;
}
blockquote, q {
	quotes: none;
}
blockquote:before, blockquote:after,
q:before, q:after {
	content: '';
	content: none;
}
table {
	border-collapse: collapse;
	border-spacing: 0;
}



body {
<ja:if test="${enableBackgroundImage}" value="true">background-color: transparent;</ja:if>
<ja:if test="${jqueryUINone}" value="true">background-color: ${BodyColor};</ja:if>
	font-size: 10pt;
	font-family: Arial, Helvetica, sans-serif;
	margin: 0;
	padding: 0;
}
#content {
	width: 900px;
	margin-top: 25px;
	margin-right: auto;
	margin-bottom: 0px;
	margin-left: auto;
}
.rounded {
	<ja:if test="${roundBorders}" value="true">
-moz-border-radius: ${radiusBorder}px;
-webkit-border-radius: ${radiusBorder}px;
-khtml-border-radius: ${radiusBorder}px;
border-radius: ${radiusBorder}px;</ja:if>
}

 .ContentFlowAddOn_slideshow #controlls {
	<ja:if test="${addOns}" value="carousel">margin: 70px auto 0;</ja:if>
	<ja:else>margin: 30px auto 0;</ja:else>
	<ja:if test="${slideshowFirstLast}" value="false"><ja:if test="${slideshowNextPrev}" value="false">width:50px;</ja:if></ja:if>
	<ja:if test="${slideshowFirstLast}" value="true"><ja:if test="${slideshowNextPrev}" value="false">width:140px;</ja:if></ja:if>
	<ja:if test="${slideshowFirstLast}" value="false"><ja:if test="${slideshowNextPrev}" value="true">width:140px;</ja:if></ja:if>
	<ja:else>width: 205px;</ja:else>
	text-align: center;
	bottom: 0px;
	
	height:22px;
	position: relative;
    }
	
	#circleButton{
	text-align: center;
	width:100px;
	margin-left: auto;
	margin-right: auto;
	margin-bottom:8px;
	}
	
#controlls button.play, #controlls button.nextButton, #controlls button.preButton, #controlls button.ff, #controlls button.slow{
height:20px;
width: 30px;
margin:2px;	
}	

<ja:if test="${addOns}" value="carousel">
.ContentFlow .caption {
	
	margin:8em auto 1.5em
}
</ja:if>
	
	
.info{
width:700px;
margin-right: auto;
	margin-bottom: 0px;
	margin-left: auto;
	display:inline;

}
#information{
display:none;
width: 600px;
height:800px;
}
#title{
 position:relative;
	width: 500px;
	margin-right: auto;
	margin-left: auto;
	margin-top: 40px;
	margin-bottom: 25px;
	text-align: center;
	padding:5px;
	min-height:25px;
}
#title p{
text-align: center
margin:0;
}
#title h1 {
	font-size: 120%;
	text-align: center
	<ja:if test="${jqueryUINone}" value="true">color: ${titleColor};</ja:if>
}

#help_show		{ 
position:absolute;
 top:10px;
 right:20px; }
 
#cart_show		{ 
position:absolute;
 top:10px;
 left:80px; }
 
#search_show		{ 
position:absolute;
 top:10px;
 left:60px; }
 
 #about_show		{ 
position:absolute;
 top:10px;
 left:20px; }
 
 #contact_show		{ 
position:absolute;
 top:10px;
 left:40px; }
 
a,
a:link{
<ja:if test="${jqueryUINone}" value="true">color: ${LinkColor};</ja:if>
}
a:visited,
a:active,
a:hover {
	-moz-outline-style: none;
    text-decoration: none;
    <ja:if test="${jqueryUINone}" value="true">color: ${LinkHoverColor};</ja:if>
    
}

a:focus {
	-moz-outline-style: none;
	text-decoration: none;
}
.clear { clear: both; }

img { border: none; }


p {
	text-align: left;
}
/* ------------------------------------------------------------------------- */


<ja:if test="${menuControl}" value="Side Menu">

/*
 * Sticklr v1.1
 * Sticky Side Panel CSS + jQuery Plugin
 *
 * Copyright 2011 amatyr4n
 * http://codecanyon.net/user/amatyr4n
 *
 * licensed under Envato licenses
 * http://wiki.envato.com/support/legal-terms/licensing-terms/
 */
 
.sticklr, 
.sticklr * {
    margin: 0;
    padding: 0;
    border: 0;
    outline: 0;
    font-family: <ja:if test="${useGoogleFont}" value="true">'${GoogleFont}',</ja:if>${pageFont}, Arial, sans-serif;
    font-size: 11px;
    line-height: 16px;
    vertical-align: baseline;
}

.sticklr, 
.sticklr > li > ul {
    list-style-type: none;
}

.sticklr {
    position: fixed;
    top: 40%;
    left: 0;
    box-shadow: 0 0 3px #ccc;
    -moz-box-shadow: 0 0 3px #ccc;
    -webkit-box-shadow: 0 0 3px #ccc;
    box-shadow: 0 0 3px rgba(24, 24, 24, 0.25);
    -moz-box-shadow: 0 0 3px rgba(24, 24, 24, 0.25);
    -webkit-box-shadow: 0 0 3px rgba(24, 24, 24, 0.25);
    width: 25px;
    overflow: visible;
    z-index: 90;
	
	/* all ie css fallback */
	top: 0\9;
	/* <ie7 css fallback */
	background-color: #f7f7f7 !ie;
}

.sticklr-right {
    left: auto;
    right: 0;
    
  
}

.sticklr > li {
    position: relative;
}

.sticklr > li > a {
    display: block;
    width: 16px;
    height: 16px;
    padding: 3px;
}

.sticklr > li {
   
	height: 25px;
}

.sticklr > li:first-child {
   
}

.sticklr > li:last-child {
    
}

.sticklr > li > a:hover {
 
}

.sticklr > li > ul {
    display: none;
    position: absolute;
    left: 25px;
    top: -2px;
    width: 145px;
    overflow: hidden;
    z-index: 95;

    /* ie css fallback */
	position: static\9;
	margin-top: -25px\9;
	margin-bottom: 25px\9;
	margin-left: 25px\9;
	float: left\9;
	/* <ie7 css fallback */
	background-color: #f7f7f7 !ie;
}
.sticklr > li > ul.gallery {
    display: none;
    position: absolute;
    left: 25px;
    top: -2px;
    width: 225px;
    overflow: hidden;
    z-index: 95;
text-align: center;
    /* ie css fallback */
	position: static\9;
	margin-top: -25px\9;
	margin-bottom: 25px\9;
	margin-left: 25px\9;
	float: left\9;
	/* <ie7 css fallback */
	background-color: #f7f7f7 !ie;
}

.sticklr > li > ul.theme {
    display: none;
    position: absolute;
    left: 25px;
    top: -2px;
    width: 225px;
    overflow: hidden;
    z-index: 95;
text-align: center;
    /* ie css fallback */
	position: static\9;
	margin-top: -25px\9;
	margin-bottom: 25px\9;
	margin-left: 25px\9;
	float: left\9;
	/* <ie7 css fallback */
	background-color: #f7f7f7 !ie;
}
.sticklr-right > li > ul {
    left: auto;
    right: 25px;
}
.sticklr-right > li > ul.gallery {
    left: auto;
    right: 25px;
	width: 225px;
}
.sticklr > li > ul:nth-child(3) {
    left: 151px; /* (180px * 1) + 26px */
}

.sticklr > li > ul:nth-child(4) {
    left: 277px; /* (180px * 2) + 27px */
}

.sticklr > li > ul:nth-child(5) {
    left: 403px; /* (180px * 3) + 28px */
}

.sticklr > li > ul:nth-child(6) {
    left: 529px; /* (180px * 4) + 29px */
}

.sticklr > li > ul:nth-child(7) {
    left: 655px; /* (180px * 5) + 30px */
}

.sticklr-right > li > ul:nth-child(3) {
    left: auto;
    right: 151px;
}

.sticklr-right > li > ul:nth-child(4) {
    left: auto;
    right: 277px;
}

.sticklr-right > li > ul:nth-child(5) {
    left: auto;
    right: 403px;
}

.sticklr-right > li > ul:nth-child(6) {
    left: auto;
    right: 529px;
}

.sticklr-right > li > ul:nth-child(7) {
    left: auto;
    right: 655px;
}

.sticklr > li:hover > ul {
    display: block;
}

.sticklr.sticklr-js > li:hover > ul {
    display: none;
}

.sticklr > li > ul > li {
   
    min-width: 125px;

    /* <ie7 css fallback */
	border: none !ie;
}

.sticklr > li > ul > li:first-child {
   
}

.sticklr > li > ul > li:last-child {
   
}

.sticklr > li > ul > li:hover {
    
}

.sticklr > li > ul > li > a {
    display: block;
    padding: 8px 10px 8px 20px;
    min-height: 18px;
    text-decoration: none;
    white-space: nowrap;
}

.sticklr > li > ul > li > a:hover {
   
}

.sticklr > li > ul > li.sticklr-title {
   
   
}

.sticklr > li > ul > li.sticklr-title > a {
    padding-left: 10px;
    cursor: default;
    font-weight: bold;
}

.sticklr > li > ul > li.sticklr-title > a:hover {
 
}




.sticklr-arrow {
    position: absolute;
    left: 20px;
    top: 8px;
    width: 0;
    height: 0;
   
}

.sticklr-right .sticklr-arrow {
    left: auto;
    right: 20px;
   
}
</ja:if>


#menu{
	margin-top: 35px;	
	}
#menu ul
{
margin: 0;
padding: 0;
list-style-type: none;
text-align: center;
}

#menu ul li { display: inline; }

#menu ul li a
{
	-moz-outline-style: none;
text-decoration: none;
padding: .2em 1em;
 opacity: 0.8;
 filter:progid:DXImageTransform.Microsoft.Alpha( opacity=70 );
}

#menu ul li a:hover

{
	-moz-outline-style: none;text-decoration: none;
opacity: 1;
filter:progid:DXImageTransform.Microsoft.Alpha( opacity=100 );

}
#menu ul li a:focus

{
	-moz-outline-style: none;text-decoration: none;
opacity: 1;
filter:progid:DXImageTransform.Microsoft.Alpha( opacity=100 );

}
.block {
    display: none;
}

.addon {
    
    padding: 30px;
    margin-bottom: 30px;
    background: transparent;
}
    .addon .flowBox {
        width: 500px;
        margin-right: 40px;
        float: left;
    }
    .addon .discription {
        margin-left: 540px;
    }
        .addon .title {
                line-height: 1.3em;
        }
            .addon .title h3 {
                margin: 0;
                display: inline;
            }
            .addon .title .by {
                margin-left: 2em;
                font-size: 0.8em;
                text-decoration: none;
            }
        .addon p {
            font-size: 0.9em;
        }
        .addon .comment {
            margin-top: 2em;
            font-style: italic;
        }
        .addon .download {
            font-size: 0.8em;
            float: right;
            margin: 0 0 2em 4em;
            line-height: 1.5em;
        }
            .addon .download a {
                font-weight: normal;
            }



#maincontent {
	max-width:800px;
	<ja:if test="${showAlbumTitleBar}" value="false">margin-top: 40px;</ja:if><ja:else>margin-top: 5px;</ja:else>
	margin-right: auto;
	margin-bottom: 20px;
	margin-left: auto;
	min-height: 500px;
}
.exif_popup li{
font-size: 11px;
}
#yoxview_infoText h3{
font-size: 12px;
}

.caption{
	font-size: 12px;
	font-weight: bold;
	<ja:if test="${jqueryUINone}" value="true">color: ${captionFontColor};</ja:if>
}

#cart{
	<ja:if test="${showFooterBar}" value="false">display:none;</ja:if>
	background-color: transparent;
	width: 550px;
	margin-right: auto;
	margin-left: auto;
	color: #999;
}

#cart a{
color:#ffffff;
}
.shopping_button{
	background-color: transparent;
	border-top-style: none;
	border-right-style: none;
	border-bottom-style: none;
	border-left-style: none;
}
.hidden {
    display: none;
}

div#social {

	width: 225px;
	margin-right: auto;
	margin-left: auto;
	padding-top: 40px;
	padding-right: 5px;
	padding-bottom: 25px;
	padding-left: 5px;
	text-align: center;
}
.social {

	width: 225px;
	margin-right: auto;
	margin-left: auto;
	padding-top: 40px;
	padding-right: 5px;
	padding-bottom: 25px;
	padding-left: 5px;
	text-align: center;
}
div#jalbum {

	width: 200px;
	margin-right: auto;
	margin-left: auto;
	padding-top: 40px;
	padding-right: 5px;
	padding-bottom: 25px;
	padding-left: 5px;
	text-align: center;
}

button hover{
	background-color: #9F6;
	
}
span.print {
	display:inline-block;
	line-height:20px;
	padding-left:23px;
	background-image: url(js/yoxview/images/printer.png);
	background-repeat: no-repeat;
}
.clear {
	 clear: both; 
}


.simpleCart_shelfItem .exif_holder .description_holder{
display:none;
}
#cart{	
}

.shopping_button{
	background-color: transparent;
	border-top-style: none;
	border-right-style: none;
	border-bottom-style: none;
	border-left-style: none;
}
.cart_button{
	
	
} 
.itemContainer{
	width:100%;
	float:left;
	
	}
.item_add{  
}
	.itemContainer div{
		float:left;
		margin: 5px 10px 5px 10px ;
	}
	
	.itemContainer a{
		text-decoration:none;
	}
	
	.cartHeaders{
		width:100%;
		float:left;
	}
	
	.cartHeaders div{
	float:left;
	margin-top: 5px;
	margin-right: 10px;
	margin-bottom: 5px;
	margin-left: 10px;
	padding-right: 5px;
	padding-left: 75px;
	}
	.simpleCart_empty{
	clear:both;
	display:-moz-inline-box;
	display:inline-block;
	font-size:11px;
	text-decoration:none;
width:90px;
	height:20px;
	
}
.simpleCart_checkout{
	display:-moz-inline-box;
    display:inline-block;
	width:90px;
	height:20px;
   
	
}
.itemdecrement .itemincrement .itemquantitly{
margin-right:3px;
margin-left:3px;
}
.itemThumb img{
width:25px;
height:25px;
}
.itemTotal{
	
	font:bold 12px Arial, sans-serif;
	margin:8px 0 0 0;
	padding:0;
	clear:both;
}
#cartTotal{
	clear:both;
	text-align:right;
	font:11px Arial, sans-serif;
	text-shadow:none;
	margin-top:0px;
	float:left;
	width:350px;
	margin-left:0px;
	margin-right: auto;
	margin-bottom: auto;
	padding-top: 10px;
	padding-right: 0px;
	padding-bottom: 0px;
	padding-left: 0px;
}
	
	.itemQuantity input{
    background:none;
    border:none;
    width:20px;
    height:15px;
 
    text-align:center;
  
    font:bold 11px Arial, sans-serif;
    padding:0 5px;
    margin:0 5px 0 0;
    vertical-align:top;
    padding-top:3px;
}
.itemQuantity input:focus{
    outline:none;
}
.itemincrement a{
	font-size: 14px;
	font-weight: bold;
	
	
}
.itemdecrement a{
font-size: 14px;
	font-weight: bold;
	
}

#bananasbubble	{ top:20px; left:110px; width:200px; padding:7px 10px; }
#bananas		{ position:absolute; top:5px; left:10px; width:100px; height:50px; }
#followmebubble	{ bottom:40px; right:60px; }
.bubble			{ display:none; position:absolute; padding:3px 10px; color:#D1D8DF; background:#1F1F1F; background:rgba(0,0,0,0.5); text-align:center; -moz-border-radius:5px; -webkit-border-radius:5px; behavior: url(PIE.htc); font:bold 10px/12px Tahoma, Helvetica, Arial, Sans-Serif; }
#followme		{ position:absolute; bottom:10px; right:10px; width:50px; height:50px; }
#followme img,
#bananas img	{ border:0; }
#retweet		{ position:absolute; bottom:10px; right:80px; height:15px; padding:2px 12px; color:#fff; background:#95cd3c; text-decoration:none; border:2px solid #80b62a; font:bold 15px/13px Tahoma, Helvetica, Arial, Sans-Serif; text-align:center; -moz-border-radius:5px; -webkit-border-radius:5px; box-shadow: 2px 2px 5px #000; -moz-box-shadow: 2px 2px 5px #000; -webkit-box-shadow: 2px 2px 5px #000;behavior: url(PIE.htc); }
#retweet:hover	{ color:#80b62a; background:#fff; border:1px solid black; }
.bananas		{ color:#F90; }
<ja:if test="${yoxSkin}" value="Top Menu">
.yoxview_top_menu{ font-family: Arial, Sans-Serif; font-size: 10pt;}
/*
.yoxview_top_menu img.yoxview_fadeImg{ cursor: -moz-zoom-in }
.yoxview_top_menu img.yoxview_zoom{ cursor: -moz-zoom-out }
*/
.yoxview_top_menu #yoxview_infoPanel
{
	top: 0;
	bottom: auto;
}
.yoxview_top_menu #yoxview_infoPanel a.yoxviewInfoLink
{
	padding: 6px 10px;
	margin: 0;
	opacity: 1;
	outline: none;
}
.yoxview_top_menu #yoxview_infoPanel a.yoxviewInfoLink:hover
{
	background: #999;
	-moz-box-shadow: 0 15px 20px 0 rgba(0,0,0,0.6) inset;
	-webkit-box-shadow: 0 15px 20px 0 rgba(0,0,0,0.6) inset;
	box-shadow: 0 15px 20px 0 rgba(0,0,0,0.6) inset;
}
.yoxview_top_menu a.yoxview_ctlButton
{
	display: block;
	width: 58px;
	height: 42px;
	position: fixed;
	opacity: 0.5;
	background-image: url(js/yoxview/skins/top_menu/sprites.png);
	background-repeat: no-repeat;
	top: 50%;
	margin-top: -22px;
	outline: none;
	z-index: 3;
}
.yoxview_top_menu a.yoxview_ctlButton:hover{ opacity: 0.8; }
.yoxview_top_menu a.yoxview_nextBtn
{
	background-position: right top;
	right : 0;
}
.yoxview_top_menu a.yoxview_prevBtn
{
	background-position: left top;
	left : 0;
}
</ja:if>
<ja:if test="${yoxSkin}" value="Default">


.yoxview_default a.yoxview_ctlButton:hover{ opacity: 0.8; }
.yoxview_default a.yoxview_nextBtn
{
	background-image: url(js/yoxview/images/right.png);
	background-repeat: no-repeat;
	background-position: right center;
}
.yoxview_default a.yoxview_prevBtn
{
	background-image: url(js/yoxview/images/left.png);
	background-repeat: no-repeat;
	background-position: left center;	
}


</ja:if>


<ja:if test="${menuControl}" value="Top Menu">
#styleSwitcher {
	position: fixed;
	left: 50%;
	top: 0px;
	<ja:if test="${enableAbout}" value="false">
	margin: 0 0 0 -235px;
	width: 470px;</ja:if>
	<ja:else>margin: 0 0 0 -275px;
	width: 550px;</ja:else>
	text-align: center;
	z-index:2;
	background: transparent;
}
#top_nav{
<ja:if test="${enableAbout}" value="false">	
	width: 470px;</ja:if>
	<ja:else>
	width: 550px;</ja:else>
	
margin-left:auto;
margin-right:auto;
}

<ja:if test="${enableContact}" value="false">
#styleSwitcher {
	margin: 0 0 0 -235px;
	width: 470px;
}</ja:if>
<ja:if test="${enableContact}" value="false">#top_nav {		
	width: 470px;	
}</ja:if>

<ja:if test="${socialSeparate}" value="true">
#styleSwitcher {
	margin: 0 0 0 -225px;
	width: 450px;	
}</ja:if>

<ja:if test="${socialSeparate}" value="true">
#top_nav {	
	width: 450px;	
}</ja:if>

<ja:if test="${enableContact}" value="false">
<ja:if test="${enableAbout}" value="false">
#styleSwitcher {
	margin: 0 0 0 -200px;
	width: 400px;	
}</ja:if></ja:if>

<ja:if test="${enableContact}" value="false">
<ja:if test="${enableAbout}" value="false">
#top_nav {	
	width: 400px;	
}</ja:if></ja:if>

<ja:if test="${socialSeparate}" value="true">
<ja:if test="${enableContact}" value="false">
<ja:if test="${enableAbout}" value="false">
#styleSwitcher {
	margin: 0 0 0 -125px;
	width: 250px;	
}</ja:if></ja:if></ja:if>

<ja:if test="${socialSeparate}" value="true">
<ja:if test="${enableContact}" value="false">
<ja:if test="${enableAbout}" value="false">
#top_nav {	
	width: 250px;	
}</ja:if></ja:if></ja:if>

#styleSwitcher a{

}
#styleSwitcher span.list {
	font-size: 13px;
	text-shadow: 1px 1px 2px #aaa;
	margin-bottom:5px;
}

#switcher_btn {
	width: 20px;
	height: 20px;
	position: absolute;
	right: 0px;
	bottom: -20px;
	z-index:10100;
	border-width: 0px;
	background-color: transparent;
	border-left: 1px solid #ced2d8;
}</ja:if>

<ja:if test="${menuControl}" value="Bottom Menu">
#styleSwitcher {
	position: fixed;
	left: 50%;
	top: 25px;
	margin: 0 0 0 -300px;
	width: 600px;
	text-align: center;
	z-index:2;
}
#styleSwitcher a{

}
#styleSwitcher span.list {
	font-size: 13px;
	text-shadow: 1px 1px 2px #aaa;
	margin-bottom:5px;
}

#switcher_btn {
	width: 20px;
	height: 20px;
	position: absolute;
	right:9px;
	top:-9px;
	z-index:10100;
	border-width: 0px;
	background-color: transparent;
	border-left: 1px solid #ced2d8;
}</ja:if>

<ja:if test="${menuControl}" value="Top Menu">

.grid_4,.grid_8,.grid_16 {
	display:inline;
	float:left;
	position:relative;
	margin-left:1.0%;
	margin-right:1.0%
}


.grid_16 .grid_16 {
	width:97.0%;
	margin-left:.75%;
	margin-right:.75%
}

.clear {
	clear:both;
	display:block;
	overflow:hidden;
	visibility:hidden;
	width:0;
	height:0
}
.clearfix:after {
	clear:both;
	content:' ';
	display:block;
	font-size:0;
	line-height:0;
	visibility:hidden;
	width:0;
	height:0
}
.clearfix {
	display:inline-block
}
* html .clearfix {
	height:1%
}
.clearfix {
	display:block
}
.send_right {
	float:right!important;
	margin-right:30px;
	margin-top:5px;
}
.send_left {
	float:left!important
}
.display_none {
	display:none
}
.float_left {
	float:left
}
.float_right {
	float:right
}
img.float_left {
	margin-right:10px
}
img.float_right {
	margin-left:10px
}

li a span.icon {
	right:5px;
	margin-top:-1px
}
li span.icon, li a span.icon {
	position:absolute;
	right:-5px;
	display:block;
	cursor:pointer
}

.text_highlight {
	text-shadow:0 1px 0 #fff
}
.text_shadow {
	text-shadow:0 1px 0 #000
}
#footer_wrapper.closed {
	bottom:-34px
}
#footer a.minimize {
	position:absolute;
	left:7px;
	top:-18px
}
#footer a.minimize:hover {
	background-position:left
}
#footer a.minimize_closed:hover {
	background-position:right
}
.bar_nav {
	position:relative;
	margin-top:10px;
	margin-bottom:10px
}
.bar_nav>ul {
	color:#fff;
	z-index:10000
}
.bar_nav ul {
	margin:0;
	padding:0;
	list-style:none;
	position:relative
}
.bar_nav ul ul {
	width:160px;
	margin:0;
	list-style:none;
	display:none;
	position:absolute;
	top:100%;
	left:0;
	padding-top:0;
	margin-top:0;
	z-index:10000
}
.bar_nav>ul>li>ul {
	padding-top:0;
	margin-top:0
}
.nav_up ul ul {
	bottom:100%;
	top:auto;
	margin-bottom:0
}
.nav_up>ul>li>ul {
	padding-bottom:0
}
.nav_up ul li ul li:last-child>ul {
	margin-bottom:-1px
}

.bar_nav ul li {
	float:left;
	display:inline;
	position:relative
}
.bar_nav ul ul li {
	width:100%;
	display:block
}
.bar_nav ul a {
	display:block;
	font:11px sans-serif;
	text-decoration:none;
	white-space:nowrap;
	line-height:30px;
	padding-top:0;
	padding-right:15px;
	padding-bottom:0;
	padding-left:15px
}
.bar_nav ul a img {
	float:left;
	margin:5px 5px 0 -10px;
	position:relative;
	top:-2px
}
.bar_nav ul li:hover li a, .bar_nav ul li.iehover li a {
	float:none
}
.bar_nav ul ul {
	z-index:3
}
.bar_nav ul ul ul {
	z-index:4
}
.bar_nav ul ul ul ul {
	z-index:5
}
.bar_nav ul ul ul ul ul {
	z-index:6
}
.bar_nav ul ul ul ul ul ul {
	z-index:7
}
.bar_nav ul ul ul ul ul ul ul {
	z-index:7
}
.bar_nav ul li:hover ul ul, .bar_nav ul li:hover ul ul ul, .bar_nav ul li:hover ul ul ul ul, .bar_nav ul li.iehover ul ul, .bar_nav ul li.iehover ul ul ul, .bar_nav ul li.iehover ul ul ul ul {
	display:none
}
.bar_nav ul li:hover ul, .bar_nav ul ul li:hover ul, .bar_nav ul ul ul li:hover ul, .bar_nav ul ul ul ul li:hover ul, .bar_nav ul li.iehover ul, .bar_nav ul ul li.iehover ul, .bar_nav ul ul ul li.iehover ul, .bar_nav ul ul ul ul li.iehover ul {
	display:block
}
span.ui-icon {
	float:left;
	position:relative;
	top:-2px;
	margin-top:7px;
	margin-right:5px;
	margin-bottom:0;
	margin-left:2px
}

.nav_down {
	z-index:5
}

</ja:if>

<ja:if test="${menuControl}" value="Bottom Menu">

.clear {
	clear:both;
	display:block;
	overflow:hidden;
	visibility:hidden;
	width:0;
	height:0
}
.clearfix:after {
	clear:both;
	content:' ';
	display:block;
	font-size:0;
	line-height:0;
	visibility:hidden;
	width:0;
	height:0
}
.clearfix {
	display:inline-block
}
* html .clearfix {
	height:1%
}
.clearfix {
	display:block
}
.send_right {
	float:right!important;
	margin-right:40px;
	margin-top:5px;
}
.send_left {
	float:left!important
}
.display_none {
	display:none
}
.float_left {
	float:left
}
.float_right {
	float:right
}
img.float_left {
	margin-right:10px
}
img.float_right {
	margin-left:10px
}
.drop_box {
	padding:10px;
	margin:0;
	list-style:none;
	display:none;
	position:absolute;
	top:100%;
	left:0;
	margin-top:0;
	z-index:1000000;
	border:1px solid #666
}
.nav_up .drop_box {
	top:auto;
	bottom:100%
}
.side_nav .drop_box {
	top:0;
	bottom:auto;
	left:100%
}
.drop_box.right {
	left:auto;
	right:0
}
li:hover .drop_box {
	display:block
}
.drop_box form input {
	border:1px solid #ccc;
	padding:4px;
	margin-bottom:10px
}
.drop_box li {
	z-index:1000
}


li a span.icon {
	right:5px;
	margin-top:-1px
}
li span.icon, li a span.icon {
	position:absolute;
	right:-5px;
	display:block;
	cursor:pointer
}
.text_highlight {
	text-shadow:0 1px 0 #fff
}
.text_shadow {
	text-shadow:0 1px 0 #000
}
#footer_wrapper.closed {
	bottom:-34px
}
#footer a.minimize {
	position:absolute;
	left:7px;
	top:-18px
}
#footer a.minimize:hover {
	background-position:left
}
#footer a.minimize_closed:hover {
	background-position:right
}
.bar_nav {
	position:relative;
	margin-top:10px;
	margin-bottom:10px
}
.bar_nav>ul {
	color:#fff;
	z-index:10000
}
.bar_nav ul {
	margin:0;
	padding:0;
	list-style:none;
	position:relative
}
.bar_nav ul ul {
	width:160px;
	margin:0;
	list-style:none;
	display:none;
	position:absolute;
	top:100%;
	left:0;
	padding-top:0;
	margin-top:0;
	z-index:10000
}
.bar_nav>ul>li>ul {
	padding-top:0;
	margin-top:0
}
.nav_up ul ul {
	bottom:100%;
	top:auto;
	margin-bottom:0
}
.nav_up>ul>li>ul {
	padding-bottom:0
}
.nav_up ul li ul li:last-child>ul {
	margin-bottom:-1px
}
.bar_nav ul ul ul {
	top:0;
	left:100%;
	padding-left:0
}
.nav_up ul ul ul{
	top:auto;
	bottom:0;
	left:100%
}
.bar_nav ul ul ul.slide_left{
	top:0;
	left:auto;
	right:100%;
	padding-right:0
}
.nav_up ul ul ul.slide_left {
	bottom:0;
	top:auto;
	left:auto;
	right:100%
}
.bar_nav ul li {
	float:left;
	display:inline;
	position:relative
}
.bar_nav ul ul li {
	width:100%;
	display:block
}
.bar_nav ul a {
	display:block;
	font:11px sans-serif;
	text-decoration:none;
	white-space:nowrap;
	line-height:30px;
	padding-top:0;
	padding-right:15px;
	padding-bottom:0;
	padding-left:15px
}
.bar_nav ul a img {
	float:left;
	margin:5px 5px 0 -10px;
	position:relative;
	top:-2px
}
.bar_nav ul li:hover li a, .bar_nav ul li.iehover li a {
	float:none
}
.bar_nav ul ul {
	z-index:3
}
.bar_nav ul ul ul {
	z-index:4
}

.bar_nav ul li:hover ul ul, .bar_nav ul li:hover ul ul ul {
	display:none
}
.bar_nav ul li:hover ul, .bar_nav ul ul li:hover ul {
	display:block
}
span.ui-icon {
	float:left;
	position:relative;
	top:-2px;
	margin-top:7px;
	margin-right:5px;
	margin-bottom:0;
	margin-left:2px
}

.nav_down {
	z-index:5
}

#footer_wrapper {
	position: fixed;
	left: 50%;
	bottom: 0px;
	<ja:if test="${enableAbout}" value="false">
	margin: 0 0 0 -235px;
	width: 470px;</ja:if>
	<ja:else>margin: 0 0 0 -275px;
	width: 550px;</ja:else>
	z-index:2;
}
#footer {
	<ja:if test="${enableAbout}" value="false">	
	width: 470px;</ja:if>
	<ja:else>
	width: 550px;</ja:else>
	margin-left:auto;
	margin-right:auto;
}
#footer_wrapper {
	<ja:if test="${enableContact}" value="false">
	margin: 0 0 0 -235px;
	width: 470px;</ja:if>

	
}
#footer {
	<ja:if test="${enableContact}" value="false">	
	width: 470px;</ja:if>
	
}

#footer_wrapper {
	<ja:if test="${socialSeparate}" value="true">
	margin: 0 0 0 -225px;
	width: 450px;</ja:if>

	
}
#footer {
<ja:if test="${socialSeparate}" value="true">	
	width: 450px;</ja:if>
	
}



#footer a {
	font-size: 11px;
}
</ja:if>


.hidden {
    display: none;
}

div#social {

	width: 225px;
	margin-right: auto;
	margin-left: auto;
	padding-top: 40px;
	padding-right: 5px;
	padding-bottom: 25px;
	padding-left: 5px;
	text-align: center;
}

div#jalbum {

	width: 200px;
	margin-right: auto;
	margin-left: auto;
	padding-top: 40px;
	padding-right: 5px;
	padding-bottom: 25px;
	padding-left: 5px;
	text-align: center;
}
.cart_button{
	
	
}
button hover{
	background-color: #9F6;
	
}
span.print {
	display:inline-block;
	line-height:20px;
	padding-left:23px;
	background-image: url(js/yoxview/images/printer.png);
	background-repeat: no-repeat;
}
.clear {
	 clear: both; 
}
ul.icon{
margin-top:8px;
}
ul.icon .ui-icon
{
display: inline-block !important;
*display: inline;
*float:left;
}

ul.icon li {
		cursor: pointer;
		margin-bottom:2px;
		height:20px;
		width:30px;
		list-style: none outside none;
		display: inline-block !important;
		*display: inline;
		*float:left;
		position: relative;
	}
	ul.icon2 .ui-icon
{
display: inline-block !important;
}

ul.icon2 li {
		cursor: pointer;
		margin-bottom:2px;
		height:16px;
		list-style: none outside none;
		width:16px;
		position: relative;
		display: inline-block !important;
		*display: inline;
		*float:left;
	}
	ul.icon3 li {
		cursor: pointer;
		margin-bottom:2px;
		height:16px;
		list-style: none outside none;
		width:16px;
		position: relative;
		display: inline-block !important;
		*display: inline;
		*float:left;
	}
	
	/*
* qTip2 - Pretty powerful tooltips
* http://craigsworks.com/projects/qtip2/
*
* Version: 2.0.0pre
* Copyright 2009-2010 Craig Michael Thompson - http://craigsworks.com
*
* Dual licensed under MIT or GPLv2 licenses
*   http://en.wikipedia.org/wiki/MIT_License
*   http://en.wikipedia.org/wiki/GNU_General_Public_License
*
* Date: Tue Aug 9 15:01:04 2011 +0100
*/

.ui-tooltip,.qtip{position:absolute;left:-28000px;top:-28000px;display:none;max-width:500px;min-width:350px;font-size:11px;line-height:12px;z-index:15000;}.ui-tooltip-fluid{display:block;visibility:hidden;position:static!important;float:left!important;}.ui-tooltip-content{position:relative;padding:5px 9px;overflow:hidden;border-width:1px;border-style:solid;text-align:left;word-wrap:break-word;overflow:hidden;}.ui-tooltip-titlebar{position:relative;min-height:14px;padding:5px 35px 5px 10px;overflow:hidden;border-width:1px 1px 0;border-style:solid;font-weight:bold;}.ui-tooltip-titlebar+.ui-tooltip-content{border-top-width:0!important;}/*!Default close button class */ .ui-tooltip-titlebar .ui-state-default{position:absolute;right:4px;top:50%;margin-top:-9px;cursor:pointer;outline:medium none;border-width:1px;border-style:solid;}* html .ui-tooltip-titlebar .ui-state-default{top:16px;}.ui-tooltip-titlebar .ui-icon,.ui-tooltip-icon .ui-icon{display:block;text-indent:-1000em;}.ui-tooltip-icon,.ui-tooltip-icon .ui-icon{-moz-border-radius:3px;-webkit-border-radius:3px;border-radius:3px;}.ui-tooltip-icon .ui-icon{width:18px;height:14px;text-align:center;text-indent:0;font:normal bold 10px/13px Tahoma,sans-serif;color:inherit;background:transparent none no-repeat -100em -100em;}/*!Default tooltip style */ .ui-tooltip-default .ui-tooltip-titlebar,.ui-tooltip-default .ui-tooltip-content{border-color:#F1D031;background-color:#FFFFA3;color:#555;}.ui-tooltip-default .ui-tooltip-titlebar{background-color:#FFEF93;}.ui-tooltip-default .ui-tooltip-icon{border-color:#CCC;background:#F1F1F1;color:#777;}.ui-tooltip-default .ui-tooltip-titlebar .ui-state-hover{border-color:#AAA;color:#111;}#qtip-overlay{position:fixed;left:-10000em;top:-10000em;}#qtip-overlay.blurs{cursor:pointer;}#qtip-overlay div{position:absolute;left:0;top:0;width:100%;height:100%;background-color:black;opacity:.7;filter:alpha(opacity=70);-ms-filter:"progid:DXImageTransform.Microsoft.Alpha(Opacity=70)";}.ui-tooltip .ui-tooltip-tip{margin:0 auto;overflow:hidden;background:transparent!important;border:0 dashed transparent!important;z-index:10;}.ui-tooltip .ui-tooltip-tip,.ui-tooltip .ui-tooltip-tip *{position:absolute;line-height:.1px!important;font-size:.1px!important;color:#123456;background:transparent;border:0 dashed transparent;}.ui-tooltip .ui-tooltip-tip canvas{top:0;left:0;}/*!Light tooltip style */ .ui-tooltip-light .ui-tooltip-titlebar,.ui-tooltip-light .ui-tooltip-content{border-color:#E2E2E2;color:#454545;}.ui-tooltip-light .ui-tooltip-content{background-color:white;}.ui-tooltip-light .ui-tooltip-titlebar{background-color:#f1f1f1;}/*!Dark tooltip style */ .ui-tooltip-dark .ui-tooltip-titlebar,.ui-tooltip-dark .ui-tooltip-content{border-color:#303030;color:#f3f3f3;}.ui-tooltip-dark .ui-tooltip-content{background-color:#505050;}.ui-tooltip-dark .ui-tooltip-titlebar{background-color:#404040;}.ui-tooltip-dark .ui-tooltip-icon{border-color:#444;}.ui-tooltip-dark .ui-tooltip-titlebar .ui-state-hover{border-color:#303030;}/*!Cream tooltip style */ .ui-tooltip-cream .ui-tooltip-titlebar,.ui-tooltip-cream .ui-tooltip-content{border-color:#F9E98E;color:#A27D35;}.ui-tooltip-cream .ui-tooltip-content{background-color:#FBF7AA;}.ui-tooltip-cream .ui-tooltip-titlebar{background-color:#F0DE7D;}.ui-tooltip-cream .ui-state-default .ui-tooltip-icon{background-position:-82px 0;}/*!Red tooltip style */ .ui-tooltip-red .ui-tooltip-titlebar,.ui-tooltip-red .ui-tooltip-content{border-color:#D95252;color:#912323;}.ui-tooltip-red .ui-tooltip-content{background-color:#F78B83;}.ui-tooltip-red .ui-tooltip-titlebar{background-color:#F06D65;}.ui-tooltip-red .ui-state-default .ui-tooltip-icon{background-position:-102px 0;}.ui-tooltip-red .ui-tooltip-icon{border-color:#D95252;}.ui-tooltip-red .ui-tooltip-titlebar .ui-state-hover{border-color:#D95252;}/*!Green tooltip style */ .ui-tooltip-green .ui-tooltip-titlebar,.ui-tooltip-green .ui-tooltip-content{border-color:#90D93F;color:#3F6219;}.ui-tooltip-green .ui-tooltip-content{background-color:#CAED9E;}.ui-tooltip-green .ui-tooltip-titlebar{background-color:#B0DE78;}.ui-tooltip-green .ui-state-default .ui-tooltip-icon{background-position:-42px 0;}/*!Blue tooltip style */ .ui-tooltip-blue .ui-tooltip-titlebar,.ui-tooltip-blue .ui-tooltip-content{border-color:#ADD9ED;color:#5E99BD;}.ui-tooltip-blue .ui-tooltip-content{background-color:#E5F6FE;}.ui-tooltip-blue .ui-tooltip-titlebar{background-color:#D0E9F5;}.ui-tooltip-blue .ui-state-default .ui-tooltip-icon{background-position:-2px 0;}/*!Add shadows to your tooltips in:FF3+,Chrome 2+,Opera 10.6+,IE6+,Safari 2+*/ .ui-tooltip-shadow{-webkit-box-shadow:1px 1px 3px 1px rgba(0,0,0,0.15);-moz-box-shadow:1px 1px 3px 1px rgba(0,0,0,0.15);box-shadow:1px 1px 3px 1px rgba(0,0,0,0.15);}.ui-tooltip-shadow .ui-tooltip-titlebar,.ui-tooltip-shadow .ui-tooltip-content{filter:progid:DXImageTransform.Microsoft.Shadow(Color='gray',Direction=135,Strength=3);-ms-filter:"progid:DXImageTransform.Microsoft.Shadow(Color='gray',Direction=135,Strength=3)";_margin-bottom:-3px;.margin-bottom:-3px;}/*!Add rounded corners to your tooltips in:FF3+,Chrome 2+,Opera 10.6+,IE9+,Safari 2+*/ .ui-tooltip-rounded,.ui-tooltip-rounded .ui-tooltip-content,.ui-tooltip-tipsy,.ui-tooltip-tipsy .ui-tooltip-content,.ui-tooltip-youtube,.ui-tooltip-youtube .ui-tooltip-content{-moz-border-radius:4px;-webkit-border-radius:4px;border-radius:4px;}.ui-tooltip-rounded .ui-tooltip-titlebar,.ui-tooltip-tipsy .ui-tooltip-titlebar,.ui-tooltip-youtube .ui-tooltip-titlebar{-moz-border-radius:5px 5px 0 0;-webkit-border-radius:5px 5px 0 0;border-radius:5px 5px 0 0;}.ui-tooltip-rounded .ui-tooltip-titlebar+.ui-tooltip-content,.ui-tooltip-tipsy .ui-tooltip-titlebar+.ui-tooltip-content,.ui-tooltip-youtube .ui-tooltip-titlebar+.ui-tooltip-content{-moz-border-radius:0 0 5px 5px;-webkit-border-radius:0 0 5px 5px;border-radius:0 0 5px 5px;}/*!Youtube tooltip style */ .ui-tooltip-youtube{-webkit-box-shadow:0 0 3px #333;-moz-box-shadow:0 0 3px #333;box-shadow:0 0 3px #333;}.ui-tooltip-youtube .ui-tooltip-titlebar,.ui-tooltip-youtube .ui-tooltip-content{_margin-bottom:0;.margin-bottom:0;background:transparent;background:rgba(0,0,0,0.85);filter:progid:DXImageTransform.Microsoft.gradient(startColorstr=#D9000000,endColorstr=#D9000000);-ms-filter:"progid:DXImageTransform.Microsoft.gradient(startColorstr=#D9000000,endColorstr=#D9000000)";color:white;border-color:#CCC;}.ui-tooltip-youtube .ui-tooltip-icon{border-color:#222;}.ui-tooltip-youtube .ui-tooltip-titlebar .ui-state-hover{border-color:#303030;}.ui-tooltip-jtools{background:#232323;background:rgba(0,0,0,0.7);background-image:-moz-linear-gradient(top,#717171,#232323);background-image:-webkit-gradient(linear,left top,left bottom,from(#717171),to(#232323));border:2px solid #ddd;border:2px solid rgba(241,241,241,1);-moz-border-radius:2px;-webkit-border-radius:2px;border-radius:2px;-webkit-box-shadow:0 0 12px #333;-moz-box-shadow:0 0 12px #333;box-shadow:0 0 12px #333;}.ui-tooltip-jtools .ui-tooltip-titlebar{filter:progid:DXImageTransform.Microsoft.gradient(startColorstr=#717171,endColorstr=#4A4A4A);-ms-filter:"progid:DXImageTransform.Microsoft.gradient(startColorstr=#717171,endColorstr=#4A4A4A)";}.ui-tooltip-jtools .ui-tooltip-content{filter:progid:DXImageTransform.Microsoft.gradient(startColorstr=#4A4A4A,endColorstr=#232323);-ms-filter:"progid:DXImageTransform.Microsoft.gradient(startColorstr=#4A4A4A,endColorstr=#232323)";}.ui-tooltip-jtools .ui-tooltip-titlebar,.ui-tooltip-jtools .ui-tooltip-content{background:transparent;color:white;border:0 dashed transparent;}.ui-tooltip-jtools .ui-tooltip-icon{border-color:#555;}.ui-tooltip-jtools .ui-tooltip-titlebar .ui-state-hover{border-color:#333;}.ui-tooltip-cluetip{-webkit-box-shadow:4px 4px 5px rgba(0,0,0,0.4);-moz-box-shadow:4px 4px 5px rgba(0,0,0,0.4);box-shadow:4px 4px 5px rgba(0,0,0,0.4);}.ui-tooltip-cluetip .ui-tooltip-titlebar{background-color:#87876A;color:white;border:0 dashed transparent;}.ui-tooltip-cluetip .ui-tooltip-content{background-color:#D9D9C2;color:#111;border:0 dashed transparent;}.ui-tooltip-cluetip .ui-tooltip-icon{border-color:#808064;}.ui-tooltip-cluetip .ui-tooltip-titlebar .ui-state-hover{border-color:#696952;color:#696952;}.ui-tooltip-tipsy{border:0;}.ui-tooltip-tipsy .ui-tooltip-titlebar,.ui-tooltip-tipsy .ui-tooltip-content{_margin-bottom:0;.margin-bottom:0;background:transparent;background:rgba(0,0,0,.87);filter:progid:DXImageTransform.Microsoft.gradient(startColorstr=#D9000000,endColorstr=#D9000000);-ms-filter:"progid:DXImageTransform.Microsoft.gradient(startColorstr=#D9000000,endColorstr=#D9000000)";color:white;border:0 transparent;font-size:11px;font-family:'Lucida Grande',sans-serif;font-weight:bold;line-height:16px;text-shadow:0 1px black;}.ui-tooltip-tipsy .ui-tooltip-titlebar{padding:6px 35px 0 10;}.ui-tooltip-tipsy .ui-tooltip-content{padding:6px 10;}.ui-tooltip-tipsy .ui-tooltip-icon{border-color:#222;text-shadow:none;}.ui-tooltip-tipsy .ui-tooltip-titlebar .ui-state-hover{border-color:#303030;}.ui-tooltip-tipped .ui-tooltip-titlebar,.ui-tooltip-tipped .ui-tooltip-content{border:3px solid #959FA9;filter:none;-ms-filter:none;}.ui-tooltip-tipped .ui-tooltip-titlebar{background:#3A79B8;background-image:-moz-linear-gradient(top,#3A79B8,#2E629D);background-image:-webkit-gradient(linear,left top,left bottom,from(#3A79B8),to(#2E629D));filter:progid:DXImageTransform.Microsoft.gradient(startColorstr=#3A79B8,endColorstr=#2E629D);-ms-filter:"progid:DXImageTransform.Microsoft.gradient(startColorstr=#3A79B8,endColorstr=#2E629D)";color:white;font-weight:normal;font-family:serif;border-bottom-width:0;-moz-border-radius:3px 3px 0 0;-webkit-border-radius:3px 3px 0 0;border-radius:3px 3px 0 0;}.ui-tooltip-tipped .ui-tooltip-content{background-color:#F9F9F9;color:#454545;-moz-border-radius:0 0 3px 3px;-webkit-border-radius:0 0 3px 3px;border-radius:0 0 3px 3px;}.ui-tooltip-tipped .ui-tooltip-icon{border:2px solid #285589;background:#285589;}.ui-tooltip-tipped .ui-tooltip-icon .ui-icon{background-color:#FBFBFB;color:#555;}.ui-tooltip:not(.ie9haxors) div.ui-tooltip-content,.ui-tooltip:not(.ie9haxors) div.ui-tooltip-titlebar{filter:none;-ms-filter:none;}

.ui-widget-content{
border: 0px;
}

.upper_right{
padding:3px;
font-size:11px;
	position: absolute;
	top: 10px;
	<ja:if test="${menuControl}" value="No Menu">display: inline-block !important;
*display: inline;
*float:left;width: 295px;</ja:if><ja:else>width: 195px;</ja:else>
	right:25px;
	text-align: center;
}
#project-id{
font-size:11px;	
}
#project-label {
font-size:11px;
		display: inline;
		font-weight: normal;
		margin-bottom: .1em;
		
	}
	#project-icon {
	padding:2px;
		float: left;
		height: 30px;
		width: 30px;
		margin-bottom: .3em;
		margin-right: .3em;
	}
	#project-description {
		margin: 0;
		padding: 3;
	}
	.ui-autocomplete {
		font-size:11px;
		max-height: 140px;
		overflow-y: auto;
		/* prevent horizontal scrollbar */
		overflow-x: hidden;
		/* add padding to account for vertical scrollbar */
		padding-right: 20px;
	}
	/* IE 6 doesn't support max-height
	 * we use height instead, but this forces the menu to always be this tall
	 */
	* html .ui-autocomplete {
		height: 150px;
	}

#project1 {
	width:220px;
	padding:5px;
	margin-right: auto;
	margin-left: auto;
	margin-top: 20px;
}

#basket {
	width:420px;
	padding:5px;
	margin-right: auto;
	margin-left: auto;
	margin-top: 20px;
	max-height: 300px;
		overflow-y: auto;

}
.ui-button .ui-button-text { display: block; line-height: 1.0; font-size: 11px; font-weight: normal; text-shadow: 0 1px 0 rgba(255, 255, 255, 0.6); margin-left:7px; }

.credit{position:fixed;left:11px;bottom:5px;z-index:6;font-size:11px;opacity:.0; padding:8px; }.credit a{text-decoration:none; font-weight:normal;}.credit a:hover{opacity:.8; font-weight:bold; text-decoration:underline;}


/*
 * jReject (jQuery Browser Rejection Plugin)
 * Version 1.0.0
 * URL: http://jreject.turnwheel.com/
 * Description: jReject is a easy method of rejecting specific browsers on your site
 * Author: Steven Bower (TurnWheel Designs) http://turnwheel.com/
 * Copyright: Copyright (c) 2009-2011 Steven Bower under dual MIT/GPL license.
 */
 
 .credit{position:fixed;left:11px;bottom:5px;z-index:6;font-size:11px;opacity:.0; padding:8px; }.credit a{text-decoration:none; font-weight:normal;}.credit a:hover{opacity:.8; font-weight:bold; text-decoration:underline;}

#jr_overlay {
	top: 0;
	left: 0;
	padding: 0;
	margin: 0;
	z-index: 200;
	position: absolute;
}

#jr_wrap {
	position: absolute;
	text-align: center;
	width: 100%;
	z-index: 300;
	padding: 0;
	margin: 0;
}

#jr_inner {
	font-family: "Lucida Grande","Lucida Sans Unicode",Arial,Verdana,sans-serif;
	font-size: 12px;
	background: #FFF;
	border: 1px solid #CCC;
	color: #4F4F4F;
	margin: 0 auto;
	height: auto;
	padding: 20px;
	position: relative;
}

#jr_header {
	display: block;
	color: #333;
	padding: 5px;
	padding-bottom: 0;
	margin: 0;
	font-family: Helvetica,Arial,sans-serif;
	font-weight: bold;
	text-align: left;
	font-size: 1.3em;
	margin-bottom: 0.5em;
}

#jr_inner p {
	text-align: left;
	padding: 5px;
	margin: 0;
}

#jr_inner ul {
	list-style-image: none;
	list-style-position: outside;
	list-style-type: none;
	margin: 0;
	padding: 0;
}

#jr_inner ul li {
	cursor: pointer;
	float: left;
	width: 120px;
	height: 122px;
	margin: 0 10px 10px 10px;
	padding: 0;
	text-align: center;
}

#jr_inner li a {
	color: #333;
	font-size: 0.8em;
	text-decoration: none;
	padding: 0;
	margin: 0;
}

#jr_inner li a:hover {
	text-decoration: underline;
}

#jr_inner .jr_icon {
	width: 100px;
	height: 100px;
	margin: 1px auto;
	padding: 0;
	background: transparent no-repeat scroll left top;
	cursor: pointer;
}

#jr_close {
	margin: 0 0 0 50px;
	clear: both;
	text-align: left;
	padding: 0;
	margin: 0;
}

#jr_close a {
	color: #000;
	display: block;
	width: auto;
	margin: 0;
	padding: 0;
	text-decoration: underline;
}

#jr_close p {
	padding: 10px 0 0 0;
	margin: 0;
}