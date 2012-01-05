 

body {
<ja:if test="${enableBackgroundImage}" value="true">background-color: transparent;</ja:if><ja:else>
background-color: ${BodyColor};</ja:else>
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
	width: 600px;
	margin-right: auto;
	margin-left: auto;
	margin-top: 40px;
	margin-bottom: 25px;
	
}
h1 {
	font-size: 120%;
	text-align: center;
	color: ${titleColor};
}

#help2		{ 
position:absolute;
 top:10px;
 right:20px; }


a,
a:link{
color: ${LinkHoverColor};
}
a:visited,
a:active,
a:hover {
	-moz-outline-style: none;
    text-decoration: none;
    color: ${LinkHoverColor};
    font-weight: bold;
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
	margin-top: 5px;
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
	color: ${captionFontColor};
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
	padding-left:100px;
	margin-right:10px;
	
}
.simpleCart_checkout{
	display:-moz-inline-box;
    display:inline-block;
   
	
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
	margin: 0 0 0 -300px;
	width: 600px;
	text-align: center;
	z-index:2;
	background: transparent;
}
#top_nav{
width: 600px;
margin-left:auto;
margin-right:auto;
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

.container_16 .grid_4 {
	width:23.0%
}

.container_16 .grid_8 {
	width:48.0%
}

.container_16 .grid_16 {
	width:98.0%
}

.grid_4 .grid_4 {
	width:97.0%;
	margin-left:3.0%;
	margin-right:3.0%
}


.grid_8 .grid_4 {
	width:47.0%;
	margin-left:1.5%;
	margin-right:1.5%
}



.grid_16 .grid_4 {
	width:22.0%;
	margin-left:.75%;
	margin-right:.75%
}

.grid_16 .grid_8 {
	width:47.0%;
	margin-left:.75%;
	margin-right:.75%
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
.round_all {
	-webkit-border-radius:3px;
	-moz-border-radius:3px;
	border-radius:3px
}
.round_top {
	-webkit-border-top-left-radius:3px;
	-webkit-border-top-right-radius:3px;
	-moz-border-radius-topleft:3px;
	-moz-border-radius-topright:3px;
	border-radius:3px 3px 0 0
}
.round_bottom {
	-webkit-border-bottom-right-radius:3px;
	-webkit-border-bottom-left-radius:3px;
	-moz-border-radius-bottomright:3px;
	-moz-border-radius-bottomleft:3px;
	border-radius:0 0 3px 3px
}
.round_left {
	-webkit-border-top-left-radius:3px;
	-webkit-border-bottom-left-radius:3px;
	-moz-border-radius-topleft:3px;
	-moz-border-radius-bottomleft:3px;
	border-radius:3px 0 0 3px
}
.round_right {
	-webkit-border-top-right-radius:3px;
	-webkit-border-bottom-right-radius:3px;
	-moz-border-radius-topright:3px;
	-moz-border-radius-bottomright:3px;
	border-radius:0 3px 3px 0
}
.round_yyny {
	-webkit-border-radius:0;
	-moz-border-radius:0;
	border-radius:0;
	-webkit-border-radius:3px;
	-webkit-border-bottom-right-radius:0;
	-moz-border-radius:3px;
	-moz-border-radius-bottomright:0
}
.round_nnny {
	-webkit-border-radius:0;
	-moz-border-radius:0;
	border-radius:0;
	-webkit-border-bottom-left-radius:3px;
	-moz-border-radius-bottomleft:3px;
	border-bottom-left-radius:3px
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
.bar_nav>ul>li>ul>li:first-child>a  {
	-webkit-border-top-left-radius:3px;
	-webkit-border-top-right-radius:3px;
	-moz-border-radius-topleft:3px;
	-moz-border-radius-topright:3px;
	border-top-left-radius:3px;
	border-top-right-radius:3px
}
.bar_nav>ul>li>ul>li:last-child>a {
	-webkit-border-bottom-right-radius:3px;
	-webkit-border-bottom-left-radius:3px;
	-moz-border-radius-bottomright:3px;
	-moz-border-radius-bottomleft:3px;
	border-bottom-right-radius:3px;
	border-bottom-left-radius:3px
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
.round_all {
	-webkit-border-radius:3px;
	-moz-border-radius:3px;
	border-radius:3px
}
.round_top {
	-webkit-border-top-left-radius:3px;
	-webkit-border-top-right-radius:3px;
	-moz-border-radius-topleft:3px;
	-moz-border-radius-topright:3px;
	border-radius:3px 3px 0 0
}
.round_bottom {
	-webkit-border-bottom-right-radius:3px;
	-webkit-border-bottom-left-radius:3px;
	-moz-border-radius-bottomright:3px;
	-moz-border-radius-bottomleft:3px;
	border-radius:0 0 3px 3px
}
.round_left {
	-webkit-border-top-left-radius:3px;
	-webkit-border-bottom-left-radius:3px;
	-moz-border-radius-topleft:3px;
	-moz-border-radius-bottomleft:3px;
	border-radius:3px 0 0 3px
}
.round_right {
	-webkit-border-top-right-radius:3px;
	-webkit-border-bottom-right-radius:3px;
	-moz-border-radius-topright:3px;
	-moz-border-radius-bottomright:3px;
	border-radius:0 3px 3px 0
}
.round_yyny {
	-webkit-border-radius:0;
	-moz-border-radius:0;
	border-radius:0;
	-webkit-border-radius:3px;
	-webkit-border-bottom-right-radius:0;
	-moz-border-radius:3px;
	-moz-border-radius-bottomright:0
}
.round_nnny {
	-webkit-border-radius:0;
	-moz-border-radius:0;
	border-radius:0;
	-webkit-border-bottom-left-radius:3px;
	-moz-border-radius-bottomleft:3px;
	border-bottom-left-radius:3px
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
	margin: 0 0 0 -260px;
	width: 520px;
	z-index:2;
}
#footer {
	width: 520px;
	margin-left:auto;
	margin-right:auto;
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

ul.icon .ui-icon
{
display: inline-block !important;
*display: inline;
*float:left;
}

ul.icon li {
		cursor: pointer;
		margin-bottom:2px;
		height:16px;
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


.fg-menu-container{position:absolute;top:0;left:-999px;padding:.4em;overflow:hidden;}.fg-menu-container.fg-menu-flyout{overflow:visible;}.fg-menu,.fg-menu ul{list-style-type:none;padding:0;margin:0;}.fg-menu{position:relative;}.fg-menu-flyout .fg-menu{position:static;}.fg-menu ul{position:absolute;top:0;}.fg-menu ul ul{top:-1px;}.fg-menu-container.fg-menu-ipod .fg-menu-content,.fg-menu-container.fg-menu-ipod .fg-menu-content ul{background:none !important;}.fg-menu.fg-menu-scroll,.fg-menu ul.fg-menu-scroll{overflow:scroll;overflow-x:hidden;}.fg-menu li{clear:both;float:left;width:100%;margin:0;padding:0;border:0;}.fg-menu li li{font-size:1em;}.fg-menu-flyout ul ul{padding:.4em;}.fg-menu-flyout li{position:relative;}.fg-menu-scroll{overflow:scroll;overflow-x:hidden;}.fg-menu-breadcrumb{margin:0;padding:0;}.fg-menu-footer{margin-top:.4em;padding:.4em;}.fg-menu-header{margin-bottom:.4em;padding:.4em;}.fg-menu-breadcrumb li{float:left;list-style:none;margin:0;padding:0 .2em;font-size:.9em;opacity:.7;}.fg-menu-breadcrumb li.fg-menu-prev-list,.fg-menu-breadcrumb li.fg-menu-current-crumb{clear:left;float:none;opacity:1;}.fg-menu-breadcrumb li.fg-menu-current-crumb{padding-top:.2em;}.fg-menu-breadcrumb a,.fg-menu-breadcrumb span{float:left;}.fg-menu-footer a:link,.fg-menu-footer a:visited{float:left;width:100%;text-decoration:none;}.fg-menu-footer a:hover,.fg-menu-footer a:active{}.fg-menu-footer a span{float:left;cursor:pointer;}.fg-menu-breadcrumb .fg-menu-prev-list a:link,.fg-menu-breadcrumb .fg-menu-prev-list a:visited,.fg-menu-breadcrumb .fg-menu-prev-list a:hover,.fg-menu-breadcrumb .fg-menu-prev-list a:active{background-image:none;text-decoration:none;}.fg-menu-breadcrumb .fg-menu-prev-list a{float:left;padding-right:.4em;}.fg-menu-breadcrumb .fg-menu-prev-list a .ui-icon{float:left;}.fg-menu-breadcrumb .fg-menu-current-crumb a:link,.fg-menu-breadcrumb .fg-menu-current-crumb a:visited,.fg-menu-breadcrumb .fg-menu-current-crumb a:hover,.fg-menu-breadcrumb .fg-menu-current-crumb a:active{display:block;background-image:none;font-size:1.3em;text-decoration:none;}.fg-menu a:link,.fg-menu a:visited,.fg-menu a:hover,.fg-menu a:active{float:left;width:92%;padding:.3em 3%;text-decoration:none;outline:0 !important;}.fg-menu a{border:1px dashed transparent;}.fg-menu a.ui-state-default:link,.fg-menu a.ui-state-default:visited,.fg-menu a.ui-state-default:hover,.fg-menu a.ui-state-default:active,.fg-menu a.ui-state-hover:link,.fg-menu a.ui-state-hover:visited,.fg-menu a.ui-state-hover:hover,.fg-menu a.ui-state-hover:active,.fg-menu a.ui-state-active:link,.fg-menu a.ui-state-active:visited,.fg-menu a.ui-state-active:hover,.fg-menu a.ui-state-active:active{border-style:solid;font-weight:normal;}.fg-menu a span{display:block;cursor:pointer;}.fg-menu-indicator span{float:left;}.fg-menu-indicator span.ui-icon{float:right;}.fg-menu-content.ui-widget-content,.fg-menu-content ul.ui-widget-content{border:0;}.fg-menu.fg-menu-has-icons a:link,.fg-menu.fg-menu-has-icons a:visited,.fg-menu.fg-menu-has-icons a:hover,.fg-menu.fg-menu-has-icons a:active{padding-left:20px;}.fg-menu .horizontal-divider hr,.fg-menu .horizontal-divider span{padding:0;margin:5px .6em;}.fg-menu .horizontal-divider hr{border:0;height:1px;}.fg-menu .horizontal-divider span{font-size:.9em;text-transform:uppercase;padding-left:.2em;}
	
.ui-widget-content{
border: 0px;
}

.upper_right{
padding:3px;
font-size:11px;
	position: absolute;
	top: 10px;
	width: 195px;
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
		margin-bottom: .4em;
	}
	#project-icon {
	padding:2px;
		float: left;
		height: 32px;
		width: 32px;
		margin-bottom: .4em;
		margin-right: .4em;
	}
	#project-description {
		margin: 0;
		padding: 3;
	}
	.ui-autocomplete {
		font-size:11px;
		max-height: 150px;
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
	width:190px;
	padding:5px;
	margin-right: auto;
	margin-left: auto;
	margin-top: 20px;

}
.ui-button .ui-button-text { display: block; line-height: 1.0; font-size: 11px; font-weight: normal; text-shadow: 0 1px 0 rgba(255, 255, 255, 0.6); margin-left:7px; }

/*
 * jQuery UI Menu @VERSION
 *
 * Copyright 2011, AUTHORS.txt (http://jqueryui.com/about)
 * Dual licensed under the MIT or GPL Version 2 licenses.
 * http://jquery.org/license
 *
 * http://docs.jquery.com/UI/Menu#theming
 */
.ui-menu { list-style:none; padding: 2px; margin: 0; display:block; outline: none; }
.ui-menu .ui-menu { margin-top: -3px; position: absolute; }
.ui-menu .ui-menu-item { margin: 0; padding: 0; zoom: 1; width: 100%; }
.ui-menu .ui-menu-item a { text-decoration: none; display: block; padding: 2px .4em; line-height: 1.5; zoom: 1; font-weight: normal; }
.ui-menu .ui-menu-item a.ui-state-focus,
.ui-menu .ui-menu-item a.ui-state-active { font-weight: normal; margin: -1px; }

.ui-menu .ui-state-disabled { font-weight: normal; padding: .0em .4em; margin: .4em 0 .2em; line-height: 1.5; }

/* icon support */
.ui-menu-icons { position: relative; }
.ui-menu-icons .ui-menu-item a { position: relative; padding-left: 2em; }

/* left-aligned */
.ui-menu .ui-icon { position: absolute; top: .2em; left: .2em; }

/* right-aligned */
.ui-menu .ui-menu-icon { position: static; float: right; }
/*
 * jQuery UI Menubar @VERSION
 *
 * Copyright 2011, AUTHORS.txt (http://jqueryui.com/about)
 * Dual licensed under the MIT or GPL Version 2 licenses.
 * http://jquery.org/license
 */
.ui-menubar { list-style: none; margin: 0; padding-left: 0; }

.ui-menubar-item { float: left; }

.ui-menubar .ui-button { float: left; font-weight: normal; border-top-width: 0 !important; border-bottom-width: 0 !important; margin: 0; outline: none; }
.ui-menubar .ui-menubar-link { border-right: 1px dashed transparent; border-left: 1px dashed transparent; }

.ui-menubar .ui-menu { width: 200px; position: absolute; z-index: 9999; font-weight: normal; }
