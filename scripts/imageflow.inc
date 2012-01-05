
 
 // ======================= LightBox ===============================
 $(document).ready(function(){
<ja:if test="${lightBoxSelectionCL}" value="true">
 var
// CB layout:

	<ja:if test="${CB_Config}" value="grow_transparent">
		CB_Config='grow_transparent';</ja:if><ja:else>CB_Config='default';</ja:else>
	<ja:if test="${CB_Config}" value="grow_transparent">
	CB_WindowColor='transparent',</ja:if> <ja:else>
	CB_WindowColor='#fff',				// color of the CB window (note: you have to change the rounded-corner PNGs too!)
	</ja:else>
	CB_ImgMinWidth=120,				// minimum / initial width of CB window
	CB_ImgMinHeight=120,				// minimum / initial heigth of CB window
	<ja:if test="${CB_Config}" value="grow_transparent">
	CB_WinPadd=25,					// padding of the CB window from sides of the browser 
	CB_RoundPix=0,					// change this setting only if you are generating new PNGs for rounded corners
	CB_ImgBorder=0,					// border size around the picture in CB window
	</ja:if> <ja:else>
	CB_WinPadd=15,					// Padding of the CB window from sides of the browser 
	CB_RoundPix=${CB_RoundPix},					// change this setting only if you are generating new PNGs for rounded corners
	CB_ImgBorder=${CB_ImgBorder},					// border size around the picture in CB window</ja:else>
	CB_ImgBorderColor='${CB_ImgBorderColor}',			// border color around the picture in CB window
	CB_Padd=3,					// padding around inside the CB window
	CB_TextH=${CB_TextH},					// default height of the text area under the content in CB window (adding a comment will modify this setting)
	CB_PadT=10,					// space in pixels between the content and the title / caption line

	CB_BodyMarginLeft=0,				//
	CB_BodyMarginRight=0,				// if you set margin to body,
	CB_BodyMarginTop=0,				// please change these settings!
	CB_BodyMarginBottom=0,				//

	CB_ShowThumbnails='${CB_ShowThumbnails}',			// it tells CB how to show the thumbnails (auto / always / off) thumbnails are only in picture-mode!
	CB_ThumbsBGColor='${CB_ThumbsBGColor}',			// color of the thumbnail layer
	CB_ThumbsBGOpacity=.${CB_ThumbsBGOpacity},				// opacity of the thumbnail layer

	CB_SlideShowBarColor='${CB_SlideShowBarColor}',			// color of the slideshow bar
	CB_SlideShowBarOpacity=.${CB_SlideShowBarOpacity},			// opacity of the slideshow bar
	
	<ja:if test="${CB_Config}" value="grow_transparent">
	CB_SlideShowBarPadd=0,				// padding of the slideshow bar (left and right)
	CB_SlideShowBarTop=-3,				// position of the slideshow bar from the top of the picture</ja:if><ja:else>

	CB_SlideShowBarPadd=17,				// padding of the slideshow bar (left and right)
	CB_SlideShowBarTop=2,				// position of the slideshow bar from the top of the picture in px</ja:else>

	CB_SimpleDesign='${CB_SimpleDesign}',				// If it's 'on', CB doesn't show the frame but only the image / content - really nice 
<ja:if test="${CB_Config}" value="grow_transparent">
CB_CloseBtnTop=-14,				// vertical position of the close button in picture mode
	CB_CloseBtnRight=-27,				// horizontal position of the close button in picture mode
	CB_CloseBtn2Top=-14,				// vertical position of the close button in content mode
	CB_CloseBtn2Right=-27,				// horizontal position of the close button in content mode</ja:if><ja:else>

	CB_CloseBtnTop=-10,				// vertical position of the close button in picture mode
	CB_CloseBtnRight=-14,				// horizontal position of the close button in picture mode
	CB_CloseBtn2Top=-20,				// vertical position of the close button in content mode
	CB_CloseBtn2Right=-30,				// horizontal position of the close button in content mode</ja:else>
	
	CB_OSD='false',						// turns on OSD

// CB font, text and navigation (at the bottom of CB window) settings:

	CB_FontT='${CB_FontT}',				//
	CB_FontSizeT=${CB_FontSizeT},				// These variables are referring to the title / caption line
	CB_FontColorT='${CB_FontColorT}',				// 
	CB_FontWeightT='bold',			//

	CB_FontC='${CB_FontC}',				//
	CB_FontSizeC=${CB_FontSizeC},				// These variables are referring to
	CB_FontColorC='${CB_FontColorC}',				// comment lines under the title
	CB_FontWeightC='normal',			//
	CB_TextAlignC='justify',			//
      	CB_TxtHMax=${CB_TxtHMax},					// maximum height of the comment box in pixels

	CB_FontG='${CB_FontT}',				//
	CB_FontSizeG=11,				// These variables are referring to the gallery name
	CB_FontColorG='#999',				// under the title and / or the comment
	CB_FontWeightG='normal',			//

	CB_ShowURL='${CB_ShowURL}',				// It shows url of the content
	CB_ImgNum='${CB_ImgNum}',					// It shows the ordinal number of the content in galleries
	CB_ImgNumBracket='()',				// whatever you want 

	CB_ShowGalName='${showCB_ShowGalName}',				// It shows gallery name
	CB_TextNav='${CB_TextNav}',				// It shows previous and next navigation
	CB_NavTextImgPrvNxt='${CB_NavTextImgPrvNxt}',			// It shows previous and next buttons instead of text
	CB_ShowDL='${CB_ShowDL}',					// It shows download / fullsize / open in new window navigation
	CB_NavTextImgDL='${CB_NavTextImgDL}',				// It shows download / fullsize / open in new window buttons instead of text
	
	CB_ImgRotation='${CB_ImgRotation}',				// it shows the image rotation controls
	CB_NavTextImgRot='${CB_NavTextImgRot}',				// it shows the image rotation buttons instead of text

// Document-hiding layer's settings:

	CB_HideColor='${CB_HideColor}',				// color of layer
	CB_HideOpacity=.${CB_HideOpacity},				// opacity (0 is invisible, 1 is 100% color) of layer
	CB_HideOpacitySpeed=400,			// speed of fading
	CB_CloseOnH='${CB_CloseOnH}',				// CB will close, if you click on background

// CB animation settings:

	CB_Animation='${CB_Animation}',				// double, normal, off, warp or grow (high cpu usage)
	CB_ImgOpacitySpeed=450,				// speed of picture / html page fading (in ms)
	CB_TextOpacitySpeed=350,			// speed of text fading under the picture (in ms)
	CB_AnimSpeed=${CB_AnimSpeed},				// speed of CB window's resizing animation (in ms)
	CB_ImgTextFade='on',				// turns on or off the fading of image or other contents and text
	CB_FlashHide='off',				// CB hides flash animations on the page before CB starts
	CB_SelectsHide='on',				// CB hides select boxes on the page before CB starts
	CB_SlShowTime=${CB_SlShowTime},				// default speed of the slideshow (in sec)

// CB picture settings:

	CB_PictureStart='start.png',			// filename of start image
	CB_PicturePause='pause.png',			// filename of pause image
	CB_PictureClose='close.png',			// filename of close image
	CB_PictureNext='next.png',			// filename of next image
	CB_PicturePrev='prev.png',			// filename of previous image
	CB_Preload='${CB_Preload}',				// preload neighbour pictures in galleries

// CB professional settings:

	CB_PicDir=CB_ScriptDir+'/config/'+CB_Config+'/pic/',	// CHANGE ONLY IF YOU CHANGED THE DEFAULT DIRECTORY OF CB!

	CB_AllowedToRun='on',					// if off, CB won't start (you can change this variable without reload!)
	CB_AllowExtFunctLoad='off',				// if on, CB will run a function named CB_ExternalFunctionLoad(); every time after a new content has loaded (useful for audit, etc)
	CB_AllowExtFunctPageLoad='off',				// if on, CB will run a function named CB_ExternalFunctionPageLoad(); after your html page has fully loaded
	CB_AllowExtFunctCBClose='off'				// if on, CB will run a function named CB_ExternalFunctionCBClose(); after CB window has closed

;

</ja:if>

<ja:if test="${lightBoxSelectionP}" value="true">
<ja:if test="${includesVideo}" value="true">
$(".active [rel^='prettyPhoto']").prettyPhoto();
</ja:if>
	$(document).ready(function(){
			$("a[rel^='prettyPhoto']").prettyPhoto({
				slideshow: ${slideshowInterval}, /* false OR interval time in ms */
				animationSpeed: '${animationSpeed}', /* fast/slow/normal */
				padding: ${boxPadding}, /* padding for each side of the picture */
				opacity: 0.${HideOpacity}, /* Value betwee 0 and 1 */
				showTitle: ${showTitle}, /* true/false */
				autoplay: ${galleryAutoplay}, /* Automatically start videos: True/False */
				autoplay_slideshow: ${autoplay_slideshow}, /* true/false */
				default_width: ${default_width},
				default_height: ${default_height},
				allowresize: ${allowresize}, /* true/false */
				counter_separator_label: '/', /* The separator for the gallery counter 1 "of" 2 */
				theme: '${Themes}', /* light_rounded / dark_rounded / light_square / dark_square / facebook */
				hideflash: ${hideflash}, /* Hides all the flash object on a page, set to TRUE if flash appears over prettyPhoto */
				wmode: 'opaque', /* Set the flash wmode attribute */
				keyboard_shortcuts: true, /* Set to false if you open forms inside prettyPhoto */
				modal: ${modal}, /* If set to true, only the close button will close the window */
				deeplinking: false, /* Allow prettyPhoto to update the url to enable deeplinking. */
				overlay_gallery: ${overlay_gallery}, /* If set to true, a gallery will overlay the fullscreen image on mouse over */
				changepicturecallback: function(){}, /* Called everytime an item is shown/changed */
				callback: function(){}, /* Called when prettyPhoto is closed */
				ie6_fallback: true,
				social_tools: '<div class="pp_social"><div class="twitter"><a href="http://twitter.com/share" class="twitter-share-button" data-count="none">Tweet</a><script type="text/javascript" src="http://platform.twitter.com/widgets.js"></script></div><div class="facebook"><iframe src="http://www.facebook.com/plugins/like.php?locale=en_US&href='+location.href+'&amp;layout=button_count&amp;show_faces=true&amp;width=500&amp;action=like&amp;font&amp;colorscheme=light&amp;height=23" scrolling="no" frameborder="0" style="border:none; overflow:hidden; width:500px; height:23px;" allowTransparency="true"></iframe></div></div>' /* html or false to disable */
			});
		});

</ja:if>

<ja:if test="${lightBoxSelectionC}" value="true">
	$('.colorbox_info').colorbox({iframe:true, width:"80%", height:"80%"});
	$('.colorbox_about').colorbox({iframe:true, width:"80%", height:"80%"});
	$('.colorbox_contact').colorbox({iframe:true, width:"60%", height:"80%"});
	$(".colorbox_help").colorbox({iframe:true, width:"80%", height:"80%"});
	$(".colorbox_video").colorbox({iframe:true, width:"80%", height:"80%"});
	
	$(".colorbox").colorbox({
	transition: "elastic",
		speed: 300,
		width: false,
		initialWidth: "600",
		innerWidth: false,
		maxWidth: false,
		height: false,
		initialHeight: "450",
		innerHeight: false,
		maxHeight: false,
		scalePhotos: true,
		scrolling: true,
		inline: false,
		html: false,
		iframe: false,
		photo: false,
		href: false,
		title: false,
		rel: false,
		opacity: 0.${color_opacity},
		preloading: true,
		current: "image {current} of {total}",
		previous: "previous",
		next: "next",
		close: "close",
		open: false,
		returnFocus: true,
		loop: true,
		slideshow: ${colorSlideshow},
		slideshowAuto: ${colorAutoSlideshow},
		slideshowSpeed: ${colorSlideshowSpeed},
		slideshowStart: "start slideshow",
		slideshowStop: "stop slideshow",
		onOpen: false,
		onLoad: false,
		onComplete: false,
		onCleanup: false,
		onClosed: false,
		overlayClose: true,		
		escKey: true,
		arrowKey: true
	});
	
	</ja:if>
	
	<ja:if test="${lightBoxSelectionE}" value="true">
	
	$('.active .videobox').live('click', function(ev) {
      var video = $(this).attr('href');
      $.lightbox('player.swf', {
        force: 'flash',
        flashvars: 'file='+video+'&autostart=true&stretching=fill'
      });
      
      ev.preventDefault();
    
    });
	
 $('.active .lightbox').lightbox();
 $.extend(jQuery.lightbox().options, {
 	 background: '${evolutionBackground}',
       modal: ${evolutionModal},
       overlay: {'opacity': 0.${evolutionOverlay}},
       showDuration: 400,
       closeDuration: 200,
       showTransition: 'easeOutBack',
       closeTransition:  'easeOutBack',
       moveTransition: 'easeOutBack',
       resizeTransition: 'easeOutBack',
      <ja:if test="${emergefrom}" value="none">
	  moveDuration    : 1,
      resizeDuration  : 0.5,
	  emergefrom: 'top'</ja:if>
	  <ja:if test="${emergefrom}" value="none"></ja:if><ja:else>moveDuration: 1000,
       resizeDuration: 1000,
	   emergefrom: '${emergefrom}'</ja:else>
    });

   
    $(".lightbox2").live('click', function(e) {
      var size   = { x: $(window).width(), y: $(window).height() };
      var href   = $(this).attr("href");
      var width  = size.x * 75 / 100;
      var height = size.y * 75 / 100;
      if (href.indexOf("?")>0) {
        var concat = "&";
      } else {
        var concat = "?";
      }
      href += concat + "lightbox[iframe]=true&lightbox[width]=" + width + "&lightbox[height]=" + height;
      $.lightbox(href);
      e.preventDefault();
    });
   </ja:if>
   
 	
 });
    
   

 /******************************************************
    *ImageFlow Script
******************************************************/		
	select = {
    cached : {},
    cache  : function(){
        for(selector in select){
            if (selector != 'cache' && selector != 'cached'){
                select.cached[selector] = $(select[selector]);
            }
        }
    },
    // Begin selector repository
    galleryImgs         : '#flow-container .item',
	currentLink         : '.item.active',
    currentImg          : '.item.active .content'
};
 var cf = new ContentFlow('contentFlow',{
		<ja:if test="${reflectionColor}" value="true">reflectionColor: "transparent"</ja:if><ja:else>reflectionColor: "${reflectBackgroundColor}"</ja:else>,
		visibleItems: ${visibleItems},
		<ja:if test="${endOpacity}" value="true">endOpacity: 0.${imageOpacity},</ja:if>
		circularFlow: ${circularFlow},
		startItem: <ja:if not exists="startItem">"center"</ja:if><ja:if test="${startItem}" value="center">"center"</ja:if><ja:else>${startItem}</ja:else>,
		scrollInFrom: <ja:if not exists="scrollInFrom">"none"</ja:if><ja:if test="${scrollInFrom}" value="none">"none"</ja:if><ja:else>${scrollInFrom}</ja:else>,
		space: 0.${imageSpace},
		maxItemHeight : ${maxItemHeight},
		<ja:if test="${showCFCaption}" value="true">showCaption: true,</ja:if>
		flowSpeedFactor: ${flowSpeedFactor},
		scrollWheelSpeed: ${scrollWheelSpeed},
		flowDragFriction: ${flowDragFriction},
		reflectionGap: 0.${reflectionGap},
		reflectionHeight: 0.${reflectionHeight},
   onReachTarget : function(){
		if (global.isCboxOpen)
			initCBox();
	},
	
	onclickActiveItem : function(){
		initCBox();
	},
	
	onclickInactiveItem: function (item) {
	
          $('.flow').live('click', function() {
       return false;
	  
});
				},
	keys : {}
} ) ;

global = {
	canChangeImage : true,
	isCboxOpen : false
};

$(function(){
	init();
});

$(function() {
            $('#controlls button').hover(
                function(){ $(this).addClass('ui-state-hover'); }, 
                function(){ $(this).removeClass('ui-state-hover'); }
            );
	
           $( "#preButton_slide" ).button({
			text: false,
			icons: {
				primary: "ui-icon-circle-triangle-w"
			}
		});
		
		$( "#nextButton_slide" ).button({
			text: false,
			icons: {
				primary: "ui-icon-circle-triangle-e"
			}
		});
		$( "#ff_slide" ).button({
			text: false,
			icons: {
				primary: "ui-icon-seek-end"
			}
		}).click(function() {
			
			cf.moveTo('last');
			
		});
		$( "#slow_slide" ).button({
			text: false,
			icons: {
				primary: "ui-icon-seek-first"
			}
		}).click(function() {
			
			cf.moveTo('first');
			
		});
		$( "#play_slide" ).button({
			text: false,
			icons: {
				primary: "ui-icon-play"
			}
		}).click(function() {
			var options;
			if ( $( this ).text() === "play" ) {
				options = {
					label: "pause",
					icons: {
						primary: "ui-icon-pause"
					}
					
					
				};
			} else {
				options = {
					label: "play",
					icons: {
						primary: "ui-icon-play"
					}
				};
			}
			$( this ).button( "option", options );
			cf.toggleSlideshow();
			
		});
        });

function init(){
	select.cache();
	
	
}

function updateCbox(){
	if (global.isCboxOpen){
		initCBox();
	}
}

<ja:if test="${lightBoxSelectionCL}" value="true">
function initCBox(){
CB_Init(); 
	var img1 = $(select.currentLink).not('.folder').attr('href');
var label = $(select.currentImg).attr('alt');
var desc = $.map( $('.item.active .caption')[0].childNodes, function(val,i) {
  if (val.nodeType === 3) {
    return val.data;
  }
}).join('');

CB_Open('href=' + img1 + ',,title=' + desc + ',,comment=' + label +''); 	
	
}
</ja:if>

<ja:if test="${lightBoxSelectionP}" value="true">
function initCBox(){
	var img1 = $(select.currentLink).not('.folder').attr('href');
var label = $(select.currentImg).attr('alt');
var desc = $.map( $('.item.active .caption')[0].childNodes, function(val,i) {
  if (val.nodeType === 3) {
    return val.data;
  }
}).join('');
$.prettyPhoto.open(img1,label,desc);
	
}
</ja:if>

<ja:if test="${lightBoxSelectionC}" value="true">
function initCBox(){
	var img1 = $(select.currentLink).not('.folder').attr('href');
var label = $(select.currentImg).attr('alt');
var desc = $.map( $('.item.active .caption')[0].childNodes, function(val,i) {
  if (val.nodeType === 3) {
    return val.data;
  }
}).join('');
$.colorbox({href: img1, title: label });
	
}
</ja:if>

<ja:if test="${lightBoxSelectionEZ}" value="true">
function initCBox(){
	var img1 = $(select.currentLink).not('.folder').attr('href');
var label = $(select.currentImg).attr('alt');
var desc = $.map( $('.item.active .caption')[0].childNodes, function(val,i) {
  if (val.nodeType === 3) {
    return val.data;
  }
}).join('');

$.easybox(img1, label,  {overlayOpacity: 0.7, fadeDuration: 200, resizeDuration: 400, resizeEasing: 'swing'});	
}
</ja:if>


<ja:if test="${lightBoxSelectionE}" value="true">
function initCBox(){
	var img1 = $(select.currentLink).not('.folder').attr('href');
var label = $(select.currentImg).attr('alt');
var desc = $.map( $('.item.active .caption')[0].childNodes, function(val,i) {
  if (val.nodeType === 3) {
    return val.data;
  }
}).join('');

$.lightbox(img1, {
 'background'	: '${evolutionBackground}',
       'modal' : ${evolutionModal},
       'overlay' : {'opacity': 0.${evolutionOverlay}},
       'showDuration' : 400,
       'closeDuration' : 200,
       'showTransition' : 'easeOutBack',
       'closeTransition' :  'easeOutBack',
       'moveTransition' : 'easeOutBack',
       'resizeTransition' : 'easeOutBack',
      <ja:if test="${emergefrom}" value="none">
	  'moveDuration'    : 1,
      'resizeDuration'  : 0.5,
	  'emergefrom' : 'top'</ja:if>
	  <ja:if test="${emergefrom}" value="none"></ja:if><ja:else>
	  'moveDuration' : 1000,
       'resizeDuration' : 1000, 
	   'emergefrom' : '${emergefrom}'</ja:else>

      });

	
}
</ja:if>






<ja:if test="${lightBoxSelectionY}" value="true">

function initCBox(){
   var img = $(select.currentLink).not('.folder').attr('href');
var label = $(select.currentImg).attr('alt');
	<ja:if test="${showYoxDownload}" value="true">var yoxviewDownloadButton = $("<a>", {
	 title: "Download image",
                target: "yoxviewDownloadImage"
            });
            yoxviewDownloadButton.append($("<img>", {
                src: "res/js/yoxview/images/yoxview_download_icon.png",
                alt: "Download",
                css: { width: 18, height: 18 }
            }));</ja:if>
			
			var yoxviewEXIFButton = $("<a>", {
	 title: "Toggle EXIF Info",
                target: "yoxviewEXIF"
            });
      yoxviewEXIFButton.append($("<img>", {
                src: "res/js/yoxview/images/camera.png",
                alt: "Toggle EXIF Info",
                css: { width: 18, height: 18 }
            }));		
			
			
			  <ja:if test="${showYoxPrint}" value="true">var yoxviewPrintButton = $("<a>", {
	 title: "Print Image",
    url: this.src,
	  click: function(e){
                    e.preventDefault();
                    $('.yoxview_imgPanel').jqprint();
                    return false;
                }

            });
            yoxviewPrintButton.append($("<img>", {
                src: "res/js/yoxview/images/printer.png",
                alt: "Print",
                css: { width: 18, height: 18 }
            }));</ja:if>
	
  $('.item').addClass('yoxviewLink');
  
    $('.yoxview').yoxview({
		 infoButtons: {
           <ja:if test="${showYoxDownload}" value="true">download: yoxviewDownloadButton</ja:if><ja:if test="${showYoxDownload}" value="true"></ja:if>
		   
             },
          onSelect: function(i, image)
{
          <ja:if test="${showYoxDownload}" value="true">$.yoxview.infoButtons.download.attr("href", image.media.src);</ja:if>
		   
		  
                },
        href : img,
        onComplete : function(){
            global.isYoxOpen = true;
        },
        
        onClosed : function(){
            global.isYoxOpen = false;
        }
    })
}

  



/******************************************************
    *Yoxview Settings Script
******************************************************/	

  
  $.yoxview.setDefaults({
            videoSize: { maxwidth: 720, maxheight: 560 },
			 autoHideInfo: ${autoHideInfo}, // If false, the info bar (with image count and title) is always displayed.
                autoPlay: ${autoPlay}, // If true, slideshow mode starts when the popup opens
				<ja:if test="${yoxSkin}" value="Top Menu">skin: 'top_menu',</ja:if><ja:if test="${yoxSkin}" value="Default">skin: 'default',</ja:if>
                backgroundColor: "${backgroundYoxColor}",
                backgroundOpacity: 0.${backgroundOpacity},
                buttonsFadeTime: ${buttonsFadeTime}, // The time, in milliseconds, it takes the buttons to fade in/out when hovered on. Set to 0 to force the Prev/Next buttons to remain visible.
                cacheImagesInBackground: ${cacheImagesInBackground}, // If true, full-size images are cached even while the gallery hasn't been opened yet.
				cacheBuffer: 5, // The number of images to cache after the current image (directional, depends on the current viewing direction)
                controlsInitialFadeTime: ${controlsInitialFadeTime}, // The time, in milliseconds, it takes the menu and prev/next buttons to fade in and out when the popup is opened.
                controlsInitialDisplayTime: ${controlsInitialDisplayTime}, // The time, in milliseconds, to display the menu and prev/next buttons when the popup is opened. Set to 0 to not display them by default
                defaultDimensions: { // Default sizes for different types of media, in case none was specified
                    flash: { width: 720, height: 560 },
                    iframe: { width: 1024, height: 768  }
                },
				flashVideoPlayer: "jwplayer", // The default player for Flash video files
				flashVideoPlayerPath: "/player.swf",
				infoBackColor: "${infoBackColor}",
                infoBackOpacity: 0.${infoBackOpacity},
                isRTL : false, // Switch direction. For RTL languages such as Hebrew or Arabic, for example.
                lang: "en", // The language for texts. The relevant language file should exist in the lang folder.
                loopPlay: ${loopPlay}, // If true, slideshow play starts over after the last image
                playDelay: ${playDelay}, // Time in milliseconds to display each image
                popupMargin: ${popupMargin}, // the minimum margin between the popup and the window
                popupResizeTime: ${popupResizeTime}, // The time in milliseconds it takes to make the resize transition from one image to the next.
                renderButtons: ${renderButtons}, // Set to false if you want to implement your own Next/Prev buttons, using the API.
                renderMenu: ${renderMenu}, // Set to false if you want to implement you own menu (Play/Help/Close).
                showBarsOnOpen: ${showBarsOnOpen}, // If true, displays the top (help) bar and bottom (info) bar momentarily when the popup opens.
                showButtonsOnOpen: ${showButtonsOnOpen}, // If true, displays the Prev/Next buttons momentarily when the popup opens.
                titleAttribute: "title",
                titleDisplayDuration: ${titleDisplayDuration}, // The time in ms to display the image's title, after which it fades out.
				allowInternalLinks: true
				
        });
		

  $("li.yoxview a").yoxview(); 
 

  
<ja:if test="${yoxSkin}" value="Top Menu">
$.yoxview.yoxviewSkins["top_menu"] = {
    infoButtons: function(options, lang, sprites, yoxviewPanel, yoxviewContent){
        var $ = jQuery;
        
        //prev/next buttons:
		
        if (!options.skinOptions || options.skinOptions.renderButtons !== false)
        {
            var prevBtn = $("<a>", {
                className: "yoxview_ctlButton yoxview_prevBtn",
                title: lang.PrevImage,
                href: "#"
            });
            prevBtn.click(function(e){
                $.yoxview.prev();
	  cf.moveTo('previous');  
                return false;
            });
            var nextBtn = $("<a>", {
                className: "yoxview_ctlButton yoxview_nextBtn",
                title: lang.NextImage,
                href: "#"
            });
            nextBtn.click(function(e){
                $.yoxview.next();
				  cf.moveTo('next');  
                return false;
            });
            
            yoxviewPanel.append(prevBtn, nextBtn);
        }
        // menu buttons:
        var closeBtn = $("<a>", {
            href: "#",
            title: lang.Close,
            click: function(e){
                e.preventDefault();
                $.yoxview.close();
            }
        });
		
        closeBtn.append(sprites.getSprite("icons", "close"));
        
        var playBtn = $("<a>", {
            href: "#",
            title: lang.Play,
            click: function(e){
                e.preventDefault();
                $.yoxview.play();
				cf.toggleSlideshow();
            }
        });
        playBtn.append(sprites.getSprite("icons", "play"));
        
        var rightBtn = $("<a>", {
            href: "#",
            title: options.isRTL ? lang.PrevImage : lang.NextImage,
            click: function(e){
                e.preventDefault();
                if (options.isRTL)
                    $.yoxview.prev();
					
					
                else
                    $.yoxview.next();
					cf.moveTo('next');
            }
        });
        rightBtn.append(sprites.getSprite("icons", "right"));
        
        var leftBtn = $("<a>", {
            href: "#",
            title: options.isRTL ? lang.NextImage : lang.PrevImage,
            click: function(e){
                e.preventDefault();
                if (options.isRTL)
                    $.yoxview.next();
					
					
                else
                    $.yoxview.prev();
					cf.moveTo('previous');
            }
        });
        leftBtn.append(sprites.getSprite("icons", "left"));
        
        //yoxviewContent.delegate("div.yoxview_imgPanel", "click.yoxviewZoom", $.yoxview.zoom);
        
        return {
            close: closeBtn,
            playBtn: playBtn,
            right: rightBtn,
            left: leftBtn
        };
    },
    options: {
        renderInfoExternally: true,
        autoHideInfo: false,
        popupMargin: "20 80",
        renderInfoPin: false,
        renderMenu: false,
        renderButtons: false
    }
};

</ja:if>

<ja:if test="${yoxSkin}" value="Default">
$.yoxview.yoxviewSkins["default"] = {
    infoButtons: function(options, lang, sprites, yoxviewPanel, yoxviewContent){
        var $ = jQuery;
        
        //prev/next buttons:
		
        if (!options.skinOptions || options.skinOptions.renderButtons !== false)
        {
		 var closeBtn = $("<a>", {
            href: "#",
            title: lang.Close,
            click: function(e){
                e.preventDefault();
                $.yoxview.close();
            }
        });
		
        closeBtn.append(sprites.getSprite("icons", "close"));
        
        var playBtn = $("<a>", {
            href: "#",
            title: lang.Play,
            click: function(e){
                e.preventDefault();
                $.yoxview.play();
				cf.toggleSlideshow();
            }
        });
        playBtn.append(sprites.getSprite("icons", "play"));
            var prevBtn = $("<a>", {
                className: "yoxview_ctlButton yoxview_prevBtn",
                title: lang.PrevImage,
                href: "#"
            });
            prevBtn.click(function(e){
                $.yoxview.prev();
	  cf.moveTo('previous');  
                return false;
            });
            var nextBtn = $("<a>", {
                className: "yoxview_ctlButton yoxview_nextBtn",
                title: lang.NextImage,
                href: "#"
            });
            nextBtn.click(function(e){
                $.yoxview.next();
				  cf.moveTo('next');  
                return false;
            });
            
            yoxviewPanel.append(prevBtn, nextBtn);
        }
 
        
        var rightBtn = $("<a>", {
            href: "#",
            title: options.isRTL ? lang.PrevImage : lang.NextImage,
            click: function(e){
                e.preventDefault();
                if (options.isRTL)
                    $.yoxview.prev();
                else
                    $.yoxview.next();
					cf.moveTo('next');
            }
        });
        rightBtn.append(sprites.getSprite("icons", "right"));
        
        var leftBtn = $("<a>", {
            href: "#",
            title: options.isRTL ? lang.NextImage : lang.PrevImage,
            click: function(e){
                e.preventDefault();
                if (options.isRTL)
                    $.yoxview.next();
					
					
                else
                    $.yoxview.prev();
					cf.moveTo('previous');
            }
        });
        leftBtn.append(sprites.getSprite("icons", "left"));
     
        return {
		 close: closeBtn,
           playBtn: playBtn,
            right: rightBtn,
            left: leftBtn
        };
    },
    options: {
	 
        
		 renderMenu: false    
    }
	
};</ja:if>





</ja:if>






$(document).ready(function() {



<ja:if test="${enableBackgroundImage}" value="true">	
/******************************************************
    * jQuery plug-in
    * Easy Background Image Resizer
    * Developed by J.P. Given (http://johnpatrickgiven.com)
    * Some modifcations by Hay Kranen < http://www.haykranen.nl >
    * Useage: anyone so long as credit is left alone
******************************************************/
(function(a){function f(){a("#jq_ez_bg").css({position:"fixed",top:"0px",left:"0px","z-index":"-1",overflow:"hidden",width:a(window).width()+"px",height:a(window).height()+"px",opacity:b.opacity});a("#jq_ez_bg").children("img").css("position","relative");var c=a("#jq_ez_bg").children("img").width(),e=a("#jq_ez_bg").children("img").height();if(a(window).width()>a(window).height())if(c>e){var d=c/e;a("#jq_ez_bg").children("img").css("width",a(window).width()+"px");a("#jq_ez_bg").children("img").css("height",
Math.round(a(window).width()*(1/d)));Math.round(a(window).width()*(1/d))<a(window).height()&&(d=e/c,a("#jq_ez_bg").children("img").css("height",a(window).height()),a("#jq_ez_bg").children("img").css("width",Math.round(a(window).height()*(1/d))))}else d=e/c,a("#jq_ez_bg").children("img").css("height",a(window).height()),a("#jq_ez_bg").children("img").css("width",Math.round(a(window).height()*(1/d)));else d=e/c,a("#jq_ez_bg").children("img").css("height",a(window).height()),a("#jq_ez_bg").children("img").css("width",
Math.round(a(window).height()*(1/d)));if(typeof b.center=="undefined"||b.center)a("#jq_ez_bg").children("img").width()>a(window).width()&&(c=(a("#jq_ez_bg").children("img").width()-a(window).width())/2,a("#jq_ez_bg").children("img").css({top:0,left:-c})),a("#jq_ez_bg").children("img").height()>a(window).height()&&(c=(a("#jq_ez_bg").children("img").height()-a(window).height())/2,a("#jq_ez_bg").children("img").css({left:0,top:-c}));a("#jq_ez_bg").css({visibility:"visible"});a("body").css({overflow:"auto"})}
var b={};a.fn.ezBgResize=function(c){b=c;if(!a.isArray(b.img))b.img=[b.img];a("<img/>").attr("src",b.img).load(function(){b.width=this.width;b.height=this.height;a("body").append('<div id="jq_ez_bg"></div>');a("#jq_ez_bg").html('<img src="'+b.img[0]+'" width="'+b.width+'" height="'+b.height+'" border="0">');a("#jq_ez_bg").css("visibility","hidden");a("body").css({overflow:"hidden"});f()})};a(window).bind("resize",function(){f()})})(jQuery);  
 

$('body').ezBgResize({
    img : "res/${imageName}", // Required.
    opacity : 1, // Optional. Default is 100% (1).
    center : true // Optional. Default is true.
});</ja:if>
  
/******************************************************
    *jqprint Script
******************************************************/	 
(function(a){var b;a.fn.jqprint=function(f){b=a.extend({},a.fn.jqprint.defaults,f);f=this instanceof jQuery?this:a(this);if(b.operaSupport&&a.browser.opera){var c=window.open("","jqPrint-preview");c.document.open();var d=c.document}else{var e=a("<iframe  />");b.debug||e.css({position:"absolute",width:"0px",height:"0px",left:"-600px",top:"-600px"});e.appendTo("body");d=e[0].contentWindow.document}if(b.importCSS)a("link[media=print]").length>0?a("link[media=print]").each(function(){d.write("<link type='text/css' rel='stylesheet' href='"+
a(this).attr("href")+"' media='print' />")}):a("link").each(function(){d.write("<link type='text/css' rel='stylesheet' href='"+a(this).attr("href")+"' />")});b.printContainer?d.write(f.outer()):f.each(function(){d.write(a(this).html())});d.close();(b.operaSupport&&a.browser.opera?c:e[0].contentWindow).focus();setTimeout(function(){(b.operaSupport&&a.browser.opera?c:e[0].contentWindow).print();c&&c.close()},1E3)};a.fn.jqprint.defaults={debug:false,importCSS:true,printContainer:true,operaSupport:true};
jQuery.fn.outer=function(){return a(a("<div></div>").html(this.clone())).html()}})(jQuery);

 
	   });
	   
	   
	   
	   
	     
 <ja:if test="${showCart}" value="true">
/******************************************************
    *simlpecart-js  Script 2.2
******************************************************/	
var Custom="Custom",GoogleCheckout="GoogleCheckout",PayPal="PayPal",Email="Email",AustralianDollar="AUD",AUD="AUD",CanadianDollar="CAD",CAD="CAD",CzechKoruna="CZK",CZK="CZK",DanishKrone="DKK",DKK="DKK",Euro="EUR",EUR="EUR",HongKongDollar="HKD",HKD="HKD",HungarianForint="HUF",HUF="HUF",IsraeliNewSheqel="ILS",ILS="ILS",JapaneseYen="JPY",JPY="JPY",MexicanPeso="MXN",MXN="MXN",NorwegianKrone="NOK",NOK="NOK",NewZealandDollar="NZD",NZD="NZD",PolishZloty="PLN",PLN="PLN",PoundSterling="GBP",GBP="GBP",SingaporeDollar=
"SGD",SGD="SGD",SwedishKrona="SEK",SEK="SEK",SwissFranc="CHF",CHF="CHF",ThaiBaht="THB",THB="THB",USDollar="USD",USD="USD";
function Cart(){var a=this;a.nextId=1;a.Version="2.2.2";a.Shelf=null;a.items={};a.isLoaded=!1;a.pageIsReady=!1;a.quantity=0;a.total=0;a.taxRate=0;a.taxCost=0;a.shippingFlatRate=0;a.shippingTotalRate=0;a.shippingQuantityRate=0;a.shippingRate=0;a.shippingCost=0;a.currency=USD;a.checkoutTo=PayPal;a.email="";a.merchantId="";a.successUrl=null;a.cancelUrl=null;a.cookieDuration=30;a.storagePrefix="sc_";a.MAX_COOKIE_SIZE=4E3;a.cartHeaders=["Name","Price","Quantity","Total"];a.events={};a.sandbox=!1;a.paypalHTTPMethod=
"GET";a.add=function(a){this.pageIsReady||(this.initializeView(),this.update());this.isLoaded||(this.load(),this.update());var b=new CartItem;if(!arguments||arguments.length===0)return error("No values passed for item."),null;var d=arguments;a&&typeof a!=="string"&&typeof a!=="number"&&(d=a);b.parseValuesFromArray(d);b.checkQuantityAndPrice();if(this.trigger("beforeAdd",[b])===!1)return!1;d=!0;this.hasItem(b)?(d=this.hasItem(b),d.quantity=parseInt(d.quantity,10)+parseInt(b.quantity,10),b=d,d=!1):
this.items[b.id]=b;this.update();this.trigger("afterAdd",[b,d]);return b};a.remove=function(c){var b={};a.each(function(a){a.id!==c&&(b[a.id]=a)});this.items=b};a.empty=function(){a.items={};a.update()};a.find=function(c){if(!c)return null;var b=[];a.each(function(d){fits=!0;a.each(c,function(a,c,b){if(!d[b]||d[b]!=a)fits=!1});fits&&b.push(d)});return b.length===0?null:b};a.each=function(c,b){var d,e=0,g;if(typeof c==="function")var i=c,f=a.items;else if(typeof b==="function")var i=b,f=c;else return;
for(d in f)if(typeof f[d]!=="function"){g=i.call(a,f[d],e,d);if(g===!1)break;e++}};a.chunk=function(a,b){typeof b==="undefined"&&(b=2);return a.match(RegExp(".{1,"+b+"}","g"))||[]};a.checkout=function(){if(a.quantity===0)error("Cart is empty");else switch(a.checkoutTo){case PayPal:a.paypalCheckout();break;case GoogleCheckout:a.googleCheckout();break;case Email:a.emailCheckout();break;default:a.customCheckout()}};a.paypalCheckout=function(){var c=document.createElement("form"),b=1;c.style.display=
"none";c.method=a.paypalHTTPMethod=="GET"||a.paypalHTTPMethod=="POST"?a.paypalHTTPMethod:"GET";c.action=a.sandbox?"https://www.sandbox.paypal.com/cgi-bin/webscr":"https://www.paypal.com/cgi-bin/webscr";c.acceptCharset="utf-8";c.appendChild(a.createHiddenElement("cmd","_cart"));c.appendChild(a.createHiddenElement("rm",a.paypalHTTPMethod=="POST"?"2":"0"));c.appendChild(a.createHiddenElement("upload","1"));c.appendChild(a.createHiddenElement("business",a.email));c.appendChild(a.createHiddenElement("currency_code",
"me.currency"));a.taxRate&&c.appendChild(a.createHiddenElement("tax_cart",a.taxCost));a.shipping()!==0&&c.appendChild(a.createHiddenElement("handling_cart",a.shippingCost));a.successUrl&&c.appendChild(a.createHiddenElement("return",a.successUrl));a.cancelUrl&&c.appendChild(a.createHiddenElement("cancel_return",a.cancelUrl));a.each(function(d,e){b=e+1;c.appendChild(a.createHiddenElement("item_name_"+b,d.name));c.appendChild(a.createHiddenElement("quantity_"+b,d.quantity));c.appendChild(a.createHiddenElement("amount_"+
b,d.price));c.appendChild(a.createHiddenElement("item_number_"+b,b));var g=0;a.each(d,function(d,e,h){h!=="id"&&h!=="price"&&h!=="quantity"&&h!=="name"&&h!=="shipping"&&g<10&&(c.appendChild(a.createHiddenElement("on"+g+"_"+b,h)),c.appendChild(a.createHiddenElement("os"+g+"_"+b,d)),g++)});c.appendChild(a.createHiddenElement("option_index_"+b,g))});document.body.appendChild(c);c.submit();document.body.removeChild(c)};a.googleCheckout=function(){var a=this;if(a.currency!==USD&&a.currency!==GBP)error("Google Checkout only allows the USD and GBP for currency.");
else if(a.merchantId===""||a.merchantId===null||!a.merchantId)error("No merchant Id for google checkout supplied.");else{var b=document.createElement("form"),d=1,e;b.style.display="none";b.method="POST";b.action="https://checkout.google.com/api/checkout/v2/checkoutForm/Merchant/"+a.merchantId;b.acceptCharset="utf-8";a.each(function(g,i){d=i+1;b.appendChild(a.createHiddenElement("item_name_"+d,g.name));b.appendChild(a.createHiddenElement("item_quantity_"+d,g.quantity));b.appendChild(a.createHiddenElement("item_price_"+
d,g.price));b.appendChild(a.createHiddenElement("item_currency_"+d,a.currency));b.appendChild(a.createHiddenElement("item_tax_rate_"+d,a.taxRate));b.appendChild(a.createHiddenElement("_charset_",""));e="";a.each(g,function(a,c,b){b!=="id"&&b!=="quantity"&&b!=="price"&&(e=e+", "+b+": "+a)});e=e.substring(1);b.appendChild(a.createHiddenElement("item_description_"+d,e))});a.shipping()!==0&&(b.appendChild(a.createHiddenElement("ship_method_name_1","Shipping")),b.appendChild(a.createHiddenElement("ship_method_price_1",
parseFloat(a.shippingCost).toFixed(2))),b.appendChild(a.createHiddenElement("ship_method_currency_1",a.currency)));document.body.appendChild(b);b.submit();document.body.removeChild(b)}};a.emailCheckout=function(){};a.customCheckout=function(){};a.load=function(){this.items={};this.quantity=this.total=0;if(readCookie(simpleCart.storagePrefix+"simpleCart_chunks")){var a=1*readCookie(simpleCart.storagePrefix+"simpleCart_chunks"),b=[],d="",d="",e=0;if(a>0){for(e=0;e<a;e++)b.push(readCookie(simpleCart.storagePrefix+
"simpleCart_"+(1+e)));d=unescape(b.join(""));d=d.split("++")}for(var e=0,g=d.length;e<g;e++)a=d[e].split("||"),b=new CartItem,b.parseValuesFromArray(a)&&(b.checkQuantityAndPrice(),this.items[b.id]=b)}this.isLoaded=!0};a.save=function(){for(var c="",b=[],b=0,b=1*readCookie(simpleCart.storagePrefix+"simpleCart_chunks"),d=0;d<b;d++)eraseCookie(simpleCart.storagePrefix+"simpleCart_"+d);eraseCookie(simpleCart.storagePrefix+"simpleCart_chunks");a.each(function(a){c=c+"++"+a.print()});for(var b=simpleCart.chunk(c.substring(2),
simpleCart.MAX_COOKIE_SIZE),d=0,e=b.length;d<e;d++)createCookie(simpleCart.storagePrefix+"simpleCart_"+(1+d),b[d],a.cookieDuration);createCookie(simpleCart.storagePrefix+"simpleCart_chunks",""+b.length,a.cookieDuration)};a.initializeView=function(){this.totalOutlets=getElementsByClassName("simpleCart_total");this.quantityOutlets=getElementsByClassName("simpleCart_quantity");this.cartDivs=getElementsByClassName("simpleCart_items");this.taxCostOutlets=getElementsByClassName("simpleCart_taxCost");this.taxRateOutlets=
getElementsByClassName("simpleCart_taxRate");this.shippingCostOutlets=getElementsByClassName("simpleCart_shippingCost");this.finalTotalOutlets=getElementsByClassName("simpleCart_finalTotal");this.addEventToArray(getElementsByClassName("simpleCart_checkout"),simpleCart.checkout,"click");this.addEventToArray(getElementsByClassName("simpleCart_empty"),simpleCart.empty,"click");this.Shelf=new Shelf;this.Shelf.readPage();this.pageIsReady=!0};a.updateView=function(){a.updateViewTotals();a.cartDivs&&a.cartDivs.length>
0&&a.updateCartView()};a.updateViewTotals=function(){for(var c=[["quantity","none"],["total","currency"],["shippingCost","currency"],["taxCost","currency"],["taxRate","percentage"],["finalTotal","currency"]],b=0,d=c.length;b<d;b++)for(var e=c[b][0]+"Outlets",g,i=0,f=a[e].length;i<f;i++){switch(c[b][1]){case "none":g=""+a[c[b][0]];break;case "currency":g=a.valueToCurrencyString(a[c[b][0]]);break;case "percentage":g=a.valueToPercentageString(a[c[b][0]]);break;default:g=""+a[c[b][0]]}a[e][i].innerHTML=
""+g}};a.updateCartView=function(){var c=[],b,d,e,g,i,f;d=document.createElement("div");b=0;for(var h=a.cartHeaders.length;b<h;b++){e=document.createElement("div");f=a.cartHeaders[b].split("_");e.innerHTML=a.print(f[0]);e.className="item"+f[0];for(var j=1,k=f.length;j<k;j++)if(f[j].toLowerCase()=="noheader")e.style.display="none";d.appendChild(e)}d.className="cartHeaders";c[0]=d;a.each(function(b,f){d=document.createElement("div");for(var h=0,j=a.cartHeaders.length;h<j;h++)e=document.createElement("div"),
g=a.cartHeaders[h].split("_"),i=a.createCartRow(g,b,i),e.innerHTML=i,e.className="item"+g[0],d.appendChild(e);d.className="itemContainer";c[f+1]=d});b=0;for(f=a.cartDivs.length;b<f;b++)if(h=a.cartDivs[b],h.childNodes&&h.appendChild){for(;h.childNodes[0];)h.removeChild(h.childNodes[0]);j=0;for(k=c.length;j<k;j++)h.appendChild(c[j])}};a.createCartRow=function(c,b,d){switch(c[0].toLowerCase()){case "total":d=a.valueToCurrencyString(parseFloat(b.price)*parseInt(b.quantity,10));break;case "increment":d=
a.valueToLink("+","javascript:;","onclick=\"simpleCart.items['"+b.id+"'].increment();\"");break;case "decrement":d=a.valueToLink("-","javascript:;","onclick=\"simpleCart.items['"+b.id+"'].decrement();\"");break;case "remove":d=a.valueToLink("Remove","javascript:;","onclick=\"simpleCart.items['"+b.id+"'].remove();\"");break;case "price":d=a.valueToCurrencyString(b[c[0].toLowerCase()]?b[c[0].toLowerCase()]:" ");break;default:d=b[c[0].toLowerCase()]?typeof b[c[0].toLowerCase()]==="function"?b[c[0].toLowerCase()].call(b):
b[c[0].toLowerCase()]:" "}for(var e=1,g=c.length;e<g;e++)switch(option=c[e].toLowerCase(),option){case "image":case "img":d=a.valueToImageString(d);break;case "input":d=a.valueToTextInput(d,"onchange=\"simpleCart.items['"+b.id+"'].set('"+c[0].toLowerCase()+"' , this.value);\"");break;case "div":case "span":case "h1":case "h2":case "h3":case "h4":case "p":d=a.valueToElement(option,d,"");break;case "noheader":break;default:error("unkown header option: "+option)}return d};a.addEventToArray=function(a,
b,d){for(var e,g=0,i=a.length;g<i;g++)e=a[g],e.addEventListener?e.addEventListener(d,b,!1):e.attachEvent&&e.attachEvent("on"+d,b)};a.createHiddenElement=function(a,b){var d=document.createElement("input");d.type="hidden";d.name=a;d.value=b;return d};a.bind=function(c,b){if(typeof b!=="function")return a;a.events[c]===!0?b.apply(a):typeof a.events[c]!=="undefined"?a.events[c].push(b):a.events[c]=[b];return a};a.trigger=function(c,b){var d=!0;if(typeof a.events[c]!=="undefined"&&typeof a.events[c][0]===
"function")for(var e=0,g=a.events[c].length;e<g;e++)d=a.events[c][e].apply(a,b?b:[]);return d===!1?!1:!0};a.ready=function(c){c?a.bind("ready",c):(a.trigger("ready"),a.events.ready=!0);return a};a.currencySymbol=function(){switch(a.currency){case CHF:return"CHF&nbsp;";case CZK:return"CZK&nbsp;";case DKK:return"DKK&nbsp;";case HUF:return"HUF&nbsp;";case NOK:return"NOK&nbsp;";case PLN:return"PLN&nbsp;";case SEK:return"SEK&nbsp;";case JPY:return"&yen;";case EUR:return"&euro;";case GBP:return"&pound;";
case CHF:return"CHF&nbsp;";case THB:return"&#3647;";case USD:case CAD:case AUD:case NZD:case HKD:case SGD:return"&#36;";default:return""}};a.currencyStringForPaypalCheckout=function(c){return a.currencySymbol()=="&#36;"?"$"+parseFloat(c).toFixed(2):""+parseFloat(c).toFixed(2)};a.valueToCurrencyString=function(c){c=parseFloat(c);isNaN(c)&&(c=0);return c.toCurrency(a.currencySymbol())};a.valueToPercentageString=function(a){return parseFloat(100*a)+"%"};a.valueToImageString=function(a){return a.match(/<\s*img.*src\=/)?
a:'<img src="'+a+'" />'};a.valueToTextInput=function(a,b){return'<input type="text" value="'+a+'" '+b+" />"};a.valueToLink=function(a,b,d){return'<a href="'+b+'" '+d+" >"+a+"</a>"};a.valueToElement=function(a,b,d){return"<"+a+" "+d+" > "+b+"</"+a+">"};a.hasItem=function(c){var b,d=!1;a.each(function(e){b=!0;a.each(c,function(a,d,f){f!=="quantity"&&f!=="id"&&c[f]!==e[f]&&(b=!1)});b&&(d=e)});return d};a.ln={en_us:{quantity:"Quantity",price:"Price",total:"Total",decrement:"Decrement",increment:"Increment",
remove:"Remove",tax:"Tax",shipping:"Shipping",image:"Image"}};a.language="en_us";a.print=function(a){return this.ln[this.language]&&this.ln[this.language][a.toLowerCase()]?this.ln[this.language][a.toLowerCase()]:a};a.update=function(){simpleCart.isLoaded||simpleCart.load();simpleCart.pageIsReady||simpleCart.initializeView();a.updateTotals();a.updateView();a.save()};a.updateTotals=function(){a.total=0;a.quantity=0;a.each(function(c){if(c.quantity<1)c.remove();else if(c.quantity!==null&&c.quantity!==
"undefined")a.quantity=parseInt(a.quantity,10)+parseInt(c.quantity,10);if(c.price)a.total=parseFloat(a.total)+parseInt(c.quantity,10)*parseFloat(c.price)});a.shippingCost=a.shipping();a.taxCost=parseFloat(a.total)*a.taxRate;a.finalTotal=a.shippingCost+a.taxCost+a.total};a.shipping=function(){if(parseInt(a.quantity,10)===0)return 0;var c=parseFloat(a.shippingFlatRate)+parseFloat(a.shippingTotalRate)*parseFloat(a.total)+parseFloat(a.shippingQuantityRate)*parseInt(a.quantity,10);a.each(function(a){a.shipping&&
(c+=typeof a.shipping=="function"?parseFloat(a.shipping()):parseFloat(a.shipping))});return c};a.initialize=function(){a.initializeView();a.load();a.update();a.ready()}}function CartItem(){for(;simpleCart.items["c"+simpleCart.nextId];)simpleCart.nextId++;this.id="c"+simpleCart.nextId}
CartItem.prototype={set:function(a,c){a=a.toLowerCase();typeof this[a]!=="function"&&a!=="id"?(c=""+c,a=="quantity"?(c=c.replace(/[^(\d|\.)]*/gi,""),c=c.replace(/,*/gi,""),c=parseInt(c,10)):a=="price"&&(c=c.replace(/[^(\d|\.)]*/gi,""),c=c.replace(/,*/gi,""),c=parseFloat(c)),typeof c=="number"&&isNaN(c)?error("Improperly formatted input."):(typeof c==="string"&&(c.match(/\~|\=/)&&error("Special character ~ or = not allowed: "+c),c=c.replace(/\~|\=/g,"")),this[a]=c,this.checkQuantityAndPrice())):error("Cannot change "+
a+", this is a reserved field.");simpleCart.update()},increment:function(){this.quantity=parseInt(this.quantity,10)+1;simpleCart.update()},decrement:function(){parseInt(this.quantity,10)<2?this.remove():(this.quantity=parseInt(this.quantity,10)-1,simpleCart.update())},print:function(){var a="";simpleCart.each(this,function(c,b,d){a+=escape(d)+"="+escape(c)+"||"});return a.substring(0,a.length-2)},checkQuantityAndPrice:function(){if(!this.quantity||this.quantity==null||this.quantity=="undefined")this.quantity=
1,error("No quantity for item.");else if(this.quantity=(""+this.quantity).replace(/,*/gi,""),this.quantity=parseInt((""+this.quantity).replace(/[^(\d|\.)]*/gi,""),10),isNaN(this.quantity))error("Quantity is not a number."),this.quantity=1;if(!this.price||this.price==null||this.price=="undefined")this.price=0,error("No price for item or price not properly formatted.");else if(this.price=(""+this.price).replace(/,*/gi,""),this.price=parseFloat((""+this.price).replace(/[^(\d|\.)]*/gi,"")),isNaN(this.price))error("Price is not a number."),
this.price=0},parseValuesFromArray:function(a){if(a&&a.length&&a.length>0){for(var c=0,b=a.length;c<b;c++){a[c]=a[c].replace(/\|\|/g,"| |");a[c]=a[c].replace(/\+\+/g,"+ +");a[c].match(/\~/)&&error("Special character ~ not allowed: "+a[c]);a[c]=a[c].replace(/\~/g,"");var d=a[c].split("=");if(d.length>1){if(d.length>2)for(var e=2,g=d.length;e<g;e++)d[1]=d[1]+"="+d[e];this[unescape(d[0]).toLowerCase()]=unescape(d[1])}}return!0}else return!1},remove:function(){simpleCart.remove(this.id);simpleCart.update()}};
function Shelf(){this.items={}}
Shelf.prototype={readPage:function(){this.items={};var a=getElementsByClassName("simpleCart_shelfItem"),c;me=this;for(var b=0,d=a.length;b<d;b++)c=new ShelfItem,me.checkChildren(a[b],c),me.items[c.id]=c},checkChildren:function(a,c){if(a.childNodes)for(var b=0;a.childNodes[b];b++){var d=a.childNodes[b];if(d.className&&d.className.match(/item_[^ ]+/)){var e=/item_[^ ]+/.exec(d.className)[0].split("_");if(e[1]=="add"||e[1]=="Add"){e=[];e.push(d);var g=simpleCart.Shelf.addToCart(c.id);simpleCart.addEventToArray(e,
g,"click");d.id=c.id}else c[e[1]]=d}d.childNodes[0]&&this.checkChildren(d,c)}},empty:function(){this.items={}},addToCart:function(a){return function(){simpleCart.Shelf.items[a]?simpleCart.Shelf.items[a].addToCart():error("Shelf item with id of "+a+" does not exist.")}}};function ShelfItem(){this.id="s"+simpleCart.nextId++}
ShelfItem.prototype={remove:function(){simpleCart.Shelf.items[this.id]=null},addToCart:function(){var a=[],c,b;for(b in this)if(typeof this[b]!=="function"&&b!=="id"){c="";switch(b){case "price":if(this[b].value)c=this[b].value;else if(this[b].innerHTML)c=this[b].innerHTML;c=c.replace(/[^(\d|\.)]*/gi,"");c=c.replace(/,*/,"");break;case "image":c=this[b].src;break;default:c=this[b].value?this[b].value:this[b].innerHTML?this[b].innerHTML:this[b].src?this[b].src:this[b]}a.push(b+"="+c)}simpleCart.add(a)}};
function createCookie(a,c,b){if(b){var d=new Date;d.setTime(d.getTime()+b*864E5);b="; expires="+d.toGMTString()}else b="";c=c.replace(/\=/g,"~");document.cookie=a+"="+escape(c)+b+"; path=/"}function readCookie(a){a+="=";for(var c=document.cookie.split(";"),b=0;b<c.length;b++){for(var d=c[b];d.charAt(0)==" ";)d=d.substring(1,d.length);if(d.indexOf(a)===0)return unescape(d.substring(a.length,d.length)).replace(/\~/g,"=")}return null}function eraseCookie(a){createCookie(a,"",-1)}
var getElementsByClassName=function(a,c,b){getElementsByClassName=document.getElementsByClassName?function(a,b,c){for(var a=(c||document).getElementsByClassName(a),b=b?RegExp("\\b"+b+"\\b","i"):null,c=[],i,f=0,h=a.length;f<h;f+=1)i=a[f],(!b||b.test(i.nodeName))&&c.push(i);return c}:document.evaluate?function(a,b,c){for(var b=b||"*",c=c||document,i=a.split(" "),f="",h=document.documentElement.namespaceURI==="http://www.w3.org/1999/xhtml"?"http://www.w3.org/1999/xhtml":null,a=[],j,k=0,l=i.length;k<
l;k+=1)f+="[contains(concat(' ', @class, ' '), ' "+i[k]+" ')]";try{j=document.evaluate(".//"+b+f,c,h,0,null)}catch(m){j=document.evaluate(".//"+b+f,c,null,0,null)}for(;b=j.iterateNext();)a.push(b);return a}:function(a,b,c){var b=b||"*",c=c||document,i=a.split(" "),a=[],b=b==="*"&&c.all?c.all:c.getElementsByTagName(b),c=[],f;f=0;for(var h=i.length;f<h;f+=1)a.push(RegExp("(^|\\s)"+i[f]+"(\\s|$)"));for(var h=0,j=b.length;h<j;h+=1){i=b[h];f=!1;for(var k=0,l=a.length;k<l;k+=1)if(f=a[k].test(i.className),
!f)break;f&&c.push(i)}return c};return getElementsByClassName(a,c,b)};String.prototype.reverse=function(){return this.split("").reverse().join("")};Number.prototype.withCommas=function(){for(var a=6,c=parseFloat(this).toFixed(2).toString().reverse();a<c.length;)c=c.substring(0,a)+","+c.substring(a),a+=4;return c.reverse()};Number.prototype.toCurrency=function(a){return(a?a:"$")+this.withCommas()};function error(a){try{console.log(a)}catch(c){}}var simpleCart=new Cart;
typeof jQuery!=="undefined"?$(document).ready(function(){simpleCart.initialize()}):typeof Prototype!=="undefined"?Event.observe(window,"load",function(){simpleCart.initialize()}):window.onload=simpleCart.initialize;




/******************************************************
    *simlpecart-js Setup Script
******************************************************/	
	simpleCart.email = "${simpleCartemail}";
	simpleCart.checkoutTo = "${simpleCartcheckoutTo}";
	simpleCart.merchantId = "${simpleCartmerchantId}";
	simpleCart.currency = ${simpleCartcurrency};
	simpleCart.taxRate  = ${simpleCarttaxRate};
	simpleCart.shippingFlatRate = ${simpleCartshippingFlatRate};
	simpleCart.shippingQuantityRate = 1.00;
/*	CartItem.prototype.shipping = function(){
		if( this.size ){
			switch( this.size.toLowerCase() ){
				case 'small':
					return this.quantity * 10.00;
				case 'medium':
					return this.quantity * 12.00;
				case 'large':
					return this.quantity * 15.00;
				case 'bull':
					return 45.00;
				default:
					return this.quantity * 5.00;
			}
		}
	};
*/
			simpleCart.cartHeaders = ["Thumb_image_noHeader", "Name_noHeader" , "Size_noHeader", "Price_noHeader" ,  "increment_noHeader","Quantity_input_noHeader", "decrement_noHeader","remove_noHeader","Total_noHeader"];
		
</ja:if>	
<ja:if test="${showFooterBar}" value="false">	
$(document).ready(function() {
	 $(".cart_button").click(function () {
      $("#cart").slideToggle("slow");
    });   
});</ja:if>


 /******************************************************
    Jquery QTip2
******************************************************/	 
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
* Date: Thu Dec 15 19:17:35 2011 +0000
*//*jslint browser: true, onevar: true, undef: true, nomen: true, bitwise: true, regexp: true, newcap: true, immed: true, strict: true *//*global window: false, jQuery: false, console: false */(function(a,b,c){function E(b,g){function w(a){var b=a.precedance==="y",c=n[b?"width":"height"],d=n[b?"height":"width"],e=a.string().indexOf("center")>-1,f=c*(e?.5:1),g=Math.pow,h=Math.round,i,j,k,l=Math.sqrt(g(f,2)+g(d,2)),m=[p/f*l,p/d*l];m[2]=Math.sqrt(g(m[0],2)-g(p,2)),m[3]=Math.sqrt(g(m[1],2)-g(p,2)),i=l+m[2]+m[3]+(e?0:m[0]),j=i/l,k=[h(j*d),h(j*c)];return{height:k[b?0:1],width:k[b?1:0]}}function v(b){var c=k.titlebar&&b.y==="top",d=c?k.titlebar:k.content,e=a.browser.mozilla,f=e?"-moz-":a.browser.webkit?"-webkit-":"",g=b.y+(e?"":"-")+b.x,h=f+(e?"border-radius-"+g:"border-"+g+"-radius");return parseInt(d.css(h),10)||parseInt(l.css(h),10)||0}function u(a,b,c){b=b?b:a[a.precedance];var d=l.hasClass(r),e=k.titlebar&&a.y==="top",f=e?k.titlebar:k.content,g="border-"+b+"-width",h;l.addClass(r),h=parseInt(f.css(g),10),h=(c?h||parseInt(l.css(g),10):h)||0,l.toggleClass(r,d);return h}function t(a,f,g,h){if(k.tip){var l=i.corner.clone(),n=g.adjusted,o=b.options.position.adjust.method.split(" "),p=o[0],q=o[1]||o[0],r={left:e,top:e,x:0,y:0},s,t={},u;i.corner.fixed!==d&&(p==="shift"&&l.precedance==="x"&&n.left&&l.y!=="center"?l.precedance=l.precedance==="x"?"y":"x":p==="flip"&&n.left&&(l.x=l.x==="center"?n.left>0?"left":"right":l.x==="left"?"right":"left"),q==="shift"&&l.precedance==="y"&&n.top&&l.x!=="center"?l.precedance=l.precedance==="y"?"x":"y":q==="flip"&&n.top&&(l.y=l.y==="center"?n.top>0?"top":"bottom":l.y==="top"?"bottom":"top"),l.string()!==m.corner.string()&&(m.top!==n.top||m.left!==n.left)&&i.update(l,e)),s=i.position(l,n),s.right!==c&&(s.left=-s.right),s.bottom!==c&&(s.top=-s.bottom),s.user=Math.max(0,j.offset);if(r.left=p==="shift"&&!!n.left)l.x==="center"?t["margin-left"]=r.x=s["margin-left"]-n.left:(u=s.right!==c?[n.left,-s.left]:[-n.left,s.left],(r.x=Math.max(u[0],u[1]))>u[0]&&(g.left-=n.left,r.left=e),t[s.right!==c?"right":"left"]=r.x);if(r.top=q==="shift"&&!!n.top)l.y==="center"?t["margin-top"]=r.y=s["margin-top"]-n.top:(u=s.bottom!==c?[n.top,-s.top]:[-n.top,s.top],(r.y=Math.max(u[0],u[1]))>u[0]&&(g.top-=n.top,r.top=e),t[s.bottom!==c?"bottom":"top"]=r.y);k.tip.css(t).toggle(!(r.x&&r.y||l.x==="center"&&r.y||l.y==="center"&&r.x)),g.left-=s.left.charAt?s.user:p!=="shift"||r.top||!r.left&&!r.top?s.left:0,g.top-=s.top.charAt?s.user:q!=="shift"||r.left||!r.left&&!r.top?s.top:0,m.left=n.left,m.top=n.top,m.corner=l.clone()}}var i=this,j=b.options.style.tip,k=b.elements,l=k.tooltip,m={top:0,left:0},n={width:j.width,height:j.height},o={},p=j.border||0,q=".qtip-tip",s=!!(a("<canvas />")[0]||{}).getContext;i.mimic=i.corner=f,i.border=p,i.offset=j.offset,i.size=n,b.checks.tip={"^position.my|style.tip.(corner|mimic|border)$":function(){i.init()||i.destroy(),b.reposition()},"^style.tip.(height|width)$":function(){n={width:j.width,height:j.height},i.create(),i.update(),b.reposition()},"^content.title.text|style.(classes|widget)$":function(){k.tip&&i.update()}},a.extend(i,{init:function(){var b=i.detectCorner()&&(s||a.browser.msie);b&&(i.create(),i.update(),l.unbind(q).bind("tooltipmove"+q,t));return b},detectCorner:function(){var a=j.corner,c=b.options.position,f=c.at,g=c.my.string?c.my.string():c.my;if(a===e||g===e&&f===e)return e;a===d?i.corner=new h.Corner(g):a.string||(i.corner=new h.Corner(a),i.corner.fixed=d);return i.corner.string()!=="centercenter"},detectColours:function(c){var d,e,f,g=k.tip.css("cssText",""),h=c||i.corner,m=h[h.precedance],p="border-"+m+"-color",q="border"+m.charAt(0)+m.substr(1)+"Color",s=/rgba?\(0, 0, 0(, 0)?\)|transparent|#123456/i,t="background-color",u="transparent",v=" !important",w=a(document.body).css("color"),x=b.elements.content.css("color"),y=k.titlebar&&(h.y==="top"||h.y==="center"&&g.position().top+n.height/2+j.offset<k.titlebar.outerHeight(1)),z=y?k.titlebar:k.content;l.addClass(r),o.fill=e=g.css(t),o.border=f=g[0].style[q]||g.css(p)||l.css(p);if(!e||s.test(e))o.fill=z.css(t)||u,s.test(o.fill)&&(o.fill=l.css(t)||e);if(!f||s.test(f)||f===w)o.border=z.css(p)||u,s.test(o.border)&&(o.border=f);a("*",g).add(g).css("cssText",t+":"+u+v+";border:0"+v+";"),l.removeClass(r)},create:function(){var b=n.width,c=n.height,d;k.tip&&k.tip.remove(),k.tip=a("<div />",{"class":"ui-tooltip-tip"}).css({width:b,height:c}).prependTo(l),s?a("<canvas />").appendTo(k.tip)[0].getContext("2d").save():(d='<vml:shape coordorigin="0,0" style="display:inline-block; position:absolute; behavior:url(#default#VML);"></vml:shape>',k.tip.html(d+d),a("*",k.tip).bind("click mousedown",function(a){a.stopPropagation()}))},update:function(b,c){var g=k.tip,l=g.children(),q=n.width,r=n.height,t="px solid ",v="px dashed transparent",x=j.mimic,y=Math.round,z,A,B,C,E;b||(b=m.corner||i.corner),x===e?x=b:(x=new h.Corner(x),x.precedance=b.precedance,x.x==="inherit"?x.x=b.x:x.y==="inherit"?x.y=b.y:x.x===x.y&&(x[b.precedance]=b[b.precedance])),z=x.precedance,i.detectColours(b),o.border!=="transparent"&&o.border!=="#123456"?(p=u(b,f,d),j.border===0&&p>0&&(o.fill=o.border),i.border=p=j.border!==d?j.border:p):i.border=p=0,B=D(x,q,r),i.size=E=w(b),g.css(E),b.precedance==="y"?C=[y(x.x==="left"?p:x.x==="right"?E.width-q-p:(E.width-q)/2),y(x.y==="top"?E.height-r:0)]:C=[y(x.x==="left"?E.width-q:0),y(x.y==="top"?p:x.y==="bottom"?E.height-r-p:(E.height-r)/2)],s?(l.attr(E),A=l[0].getContext("2d"),A.restore(),A.save(),A.clearRect(0,0,3e3,3e3),A.translate(C[0],C[1]),A.beginPath(),A.moveTo(B[0][0],B[0][1]),A.lineTo(B[1][0],B[1][1]),A.lineTo(B[2][0],B[2][1]),A.closePath(),A.fillStyle=o.fill,A.strokeStyle=o.border,A.lineWidth=p*2,A.lineJoin="miter",A.miterLimit=100,p&&A.stroke(),A.fill()):(B="m"+B[0][0]+","+B[0][1]+" l"+B[1][0]+","+B[1][1]+" "+B[2][0]+","+B[2][1]+" xe",C[2]=p&&/^(r|b)/i.test(b.string())?parseFloat(a.browser.version,10)===8?2:1:0,l.css({antialias:""+(x.string().indexOf("center")>-1),left:C[0]-C[2]*Number(z==="x"),top:C[1]-C[2]*Number(z==="y"),width:q+p,height:r+p}).each(function(b){var c=a(this);c[c.prop?"prop":"attr"]({coordsize:q+p+" "+(r+p),path:B,fillcolor:o.fill,filled:!!b,stroked:!b}).css({display:p||b?"block":"none"}),!b&&c.html()===""&&c.html('<vml:stroke weight="'+p*2+'px" color="'+o.border+'" miterlimit="1000" joinstyle="miter"  style="behavior:url(#default#VML); display:inline-block;" />')})),c!==e&&i.position(b)},position:function(b){var c=k.tip,f={},g=Math.max(0,j.offset),h,l,m;if(j.corner===e||!c)return e;b=b||i.corner,h=b.precedance,l=w(b),m=[b.x,b.y],h==="x"&&m.reverse(),a.each(m,function(a,c){var e,i;c==="center"?(e=h==="y"?"left":"top",f[e]="50%",f["margin-"+e]=-Math.round(l[h==="y"?"width":"height"]/2)+g):(e=u(b,c,d),i=v(b),f[c]=a?p?u(b,c):0:g+(i>e?i:0))}),f[b[h]]-=l[h==="x"?"width":"height"],c.css({top:"",bottom:"",left:"",right:"",margin:""}).css(f);return f},destroy:function(){k.tip&&k.tip.remove(),l.unbind(q)}}),m.corner=new h.Corner(i.init())}function D(a,b,c){var d=Math.ceil(b/2),e=Math.ceil(c/2),f={bottomright:[[0,0],[b,c],[b,0]],bottomleft:[[0,0],[b,0],[0,c]],topright:[[0,c],[b,0],[b,c]],topleft:[[0,0],[0,c],[b,c]],topcenter:[[0,c],[d,0],[b,c]],bottomcenter:[[0,0],[b,0],[d,c]],rightcenter:[[0,0],[b,e],[0,c]],leftcenter:[[b,0],[b,c],[0,e]]};f.lefttop=f.bottomright,f.righttop=f.bottomleft,f.leftbottom=f.topright,f.rightbottom=f.topleft;return f[a.string()]}function C(c){var f=this,g=c.options.show.modal,i=c.elements,j=i.tooltip,k="#qtip-overlay",l=".qtipmodal",m=l+c.id,o="is-modal-qtip",q=a(document.body),r;c.checks.modal={"^show.modal.(on|blur)$":function(){f.init(),i.overlay.toggle(j.is(":visible"))}},a.extend(f,{init:function(){if(!g.on)return f;r=f.create(),j.attr(o,d).css("z-index",h.modal.zindex+a(n+"["+o+"]").length).unbind(l).unbind(m).bind("tooltipshow"+l+" tooltiphide"+l,function(b,c,d){var e=b.originalEvent;if(e&&b.type==="tooltiphide"&&/mouse(leave|enter)/.test(e.type)&&a(e.relatedTarget).closest(r[0]).length)try{b.preventDefault()}catch(g){}else(!e||e&&!e.solo)&&f[b.type.replace("tooltip","")](b,d)}).bind("tooltipfocus"+l,function(b){if(!b.isDefaultPrevented()){var c=a(n).filter("["+o+"]"),d=h.modal.zindex+c.length,e=parseInt(j[0].style.zIndex,10);r[0].style.zIndex=d-1,c.each(function(){this.style.zIndex>e&&(this.style.zIndex-=1)}),c.end().filter("."+p).qtip("blur",b.originalEvent),j.addClass(p)[0].style.zIndex=d;try{b.preventDefault()}catch(f){}}}).bind("tooltiphide"+l,function(b){a("["+o+"]").filter(":visible").not(j).last().qtip("focus",b)}),g.escape&&a(b).unbind(m).bind("keydown"+m,function(a){a.keyCode===27&&j.hasClass(p)&&c.hide(a)}),g.blur&&i.overlay.unbind(m).bind("click"+m,function(a){j.hasClass(p)&&c.hide(a)});return f},create:function(){var c=a(k);if(c.length)return i.overlay=c.insertAfter(a(n).last());r=i.overlay=a("<div />",{id:k.substr(1),html:"<div></div>",mousedown:function(){return e}}).insertAfter(a(n).last()),a(b).unbind(l).bind("resize"+l,function(){r.css({height:a(b).height(),width:a(b).width()})}).triggerHandler("resize");return r},toggle:function(b,c,h){if(b&&b.isDefaultPrevented())return f;var i=g.effect,k=c?"show":"hide",l=r.is(":visible"),p=a("["+o+"]").filter(":visible").not(j),s;r||(r=f.create());if(r.is(":animated")&&l===c||!c&&p.length)return f;c?(r.css({left:0,top:0}),r.toggleClass("blurs",g.blur),q.bind("focusin"+m,function(b){var c=a(b.target),d=c.closest(".qtip"),f=d.length<1?e:parseInt(d[0].style.zIndex,10)>parseInt(j[0].style.zIndex,10);!f&&a(b.target).closest(n)[0]!==j[0]&&j.find("input:visible").filter(":first").focus()})):q.undelegate("*","focusin"+m),r.stop(d,e),a.isFunction(i)?i.call(r,c):i===e?r[k]():r.fadeTo(parseInt(h,10)||90,c?1:0,function(){c||a(this).hide()}),c||r.queue(function(a){r.css({left:"",top:""}),a()});return f},show:function(a,b){return f.toggle(a,d,b)},hide:function(a,b){return f.toggle(a,e,b)},destroy:function(){var d=r;d&&(d=a("["+o+"]").not(j).length<1,d?(i.overlay.remove(),a(b).unbind(l)):i.overlay.unbind(l+c.id),q.undelegate("*","focusin"+m));return j.removeAttr(o).unbind(l)}}),f.init()}function B(b){var c=this,d=b.elements,e=d.tooltip,f=".bgiframe-"+b.id;a.extend(c,{init:function(){d.bgiframe=a('<iframe class="ui-tooltip-bgiframe" frameborder="0" tabindex="-1" src="javascript:\'\';"  style="display:block; position:absolute; z-index:-1; filter:alpha(opacity=0); -ms-filter:"progid:DXImageTransform.Microsoft.Alpha(Opacity=0)";"></iframe>'),d.bgiframe.appendTo(e),e.bind("tooltipmove"+f,c.adjust)},adjust:function(){var a=b.get("dimensions"),c=b.plugins.tip,f=d.tip,g,h;h=parseInt(e.css("border-left-width"),10)||0,h={left:-h,top:-h},c&&f&&(g=c.corner.precedance==="x"?["width","left"]:["height","top"],h[g[1]]-=f[g[0]]()),d.bgiframe.css(h).css(a)},destroy:function(){d.bgiframe.remove(),e.unbind(f)}}),c.init()}function A(b){var c=this,f=b.elements.tooltip,g=b.options.content.ajax,h=".qtip-ajax",i=/<script\b[^<]*(?:(?!<\/script>)<[^<]*)*<\/script>/gi,j=d;b.checks.ajax={"^content.ajax":function(a,b,d){b==="ajax"&&(g=d),b==="once"?c.init():g&&g.url?c.load():f.unbind(h)}},a.extend(c,{init:function(){g&&g.url&&f.unbind(h)[g.once?"one":"bind"]("tooltipshow"+h,c.load);return c},load:function(d,f){function p(a,c,d){a.status!==0&&b.set("content.text",c+": "+d)}function o(c){k&&(c=a("<div/>").append(c.replace(i,"")).find(k)),b.set("content.text",c)}function n(){l&&(b.show(d.originalEvent),f=e),a.isFunction(g.complete)&&g.complete.apply(this,arguments)}var h=g.url.indexOf(" "),j=g.url,k,l=g.once&&!g.loading&&f;if(l)try{d.preventDefault()}catch(m){}else if(d&&d.isDefaultPrevented())return c;h>-1&&(k=j.substr(h),j=j.substr(0,h)),a.ajax(a.extend({success:o,error:p,context:b},g,{url:j,complete:n}))}}),c.init()}function z(b,c){var i,j,k,l,m,n=a(this),o=a(document.body),p=this===document?o:n,q=n.metadata?n.metadata(c.metadata):f,r=c.metadata.type==="html5"&&q?q[c.metadata.name]:f,s=n.data(c.metadata.name||"qtipopts");try{s=typeof s==="string"?(new Function("return "+s))():s}catch(t){w("Unable to parse HTML5 attribute data: "+s)}l=a.extend(d,{},g.defaults,c,typeof s==="object"?x(s):f,x(r||q)),j=l.position,l.id=b;if("boolean"===typeof l.content.text){k=n.attr(l.content.attr);if(l.content.attr!==e&&k)l.content.text=k;else{w("Unable to locate content for tooltip! Aborting render of tooltip on element: ",n);return e}}j.container.length||(j.container=o),j.target===e&&(j.target=p),l.show.target===e&&(l.show.target=p),l.show.solo===d&&(l.show.solo=o),l.hide.target===e&&(l.hide.target=p),l.position.viewport===d&&(l.position.viewport=j.container),j.at=new h.Corner(j.at),j.my=new h.Corner(j.my);if(a.data(this,"qtip"))if(l.overwrite)n.qtip("destroy");else if(l.overwrite===e)return e;l.suppress&&(m=a.attr(this,"title"))&&a(this).removeAttr("title").attr(u,m),i=new y(n,l,b,!!k),a.data(this,"qtip",i),n.bind("remove.qtip-"+b,function(){i.destroy()});return i}function y(s,t,w,y){function R(){var c=[t.show.target[0],t.hide.target[0],z.rendered&&G.tooltip[0],t.position.container[0],t.position.viewport[0],b,document];z.rendered?a([]).pushStack(a.grep(c,function(a){return typeof a==="object"})).unbind(F):t.show.target.unbind(F+"-create")}function Q(){function p(a){E.is(":visible")&&z.reposition(a)}function o(a){if(E.hasClass(m))return e;clearTimeout(z.timers.inactive),z.timers.inactive=setTimeout(function(){z.hide(a)},t.hide.inactive)}function l(b){if(E.hasClass(m)||C||D)return e;var d=a(b.relatedTarget||b.target),g=d.closest(n)[0]===E[0],h=d[0]===f.show[0];clearTimeout(z.timers.show),clearTimeout(z.timers.hide);if(c.target==="mouse"&&g||t.hide.fixed&&(/mouse(out|leave|move)/.test(b.type)&&(g||h)))try{b.preventDefault(),b.stopImmediatePropagation()}catch(i){}else t.hide.delay>0?z.timers.hide=setTimeout(function(){z.hide(b)},t.hide.delay):z.hide(b)}function k(a){if(E.hasClass(m))return e;clearTimeout(z.timers.show),clearTimeout(z.timers.hide);var b=function(){z.toggle(d,a)};t.show.delay>0?z.timers.show=setTimeout(b,t.show.delay):b()}var c=t.position,f={show:t.show.target,hide:t.hide.target,viewport:a(c.viewport),document:a(document),body:a(document.body),window:a(b)},h={show:a.trim(""+t.show.event).split(" "),hide:a.trim(""+t.hide.event).split(" ")},j=a.browser.msie&&parseInt(a.browser.version,10)===6;E.bind("mouseenter"+F+" mouseleave"+F,function(a){var b=a.type==="mouseenter";b&&z.focus(a),E.toggleClass(q,b)}),t.hide.fixed&&(f.hide=f.hide.add(E),E.bind("mouseover"+F,function(){E.hasClass(m)||clearTimeout(z.timers.hide)})),/mouse(out|leave)/i.test(t.hide.event)?t.hide.leave==="window"&&f.window.bind("mouseout"+F+" blur"+F,function(a){/select|option/.test(a.target)&&!a.relatedTarget&&z.hide(a)}):/mouse(over|enter)/i.test(t.show.event)&&f.hide.bind("mouseleave"+F,function(a){clearTimeout(z.timers.show)}),(""+t.hide.event).indexOf("unfocus")>-1&&f.body.bind("mousedown"+F,function(b){var c=a(b.target),d=!E.hasClass(m)&&E.is(":visible");c[0]!==E[0]&&c.parents(n).length===0&&c.add(s).length>1&&!c.attr("disabled")&&z.hide(b)}),"number"===typeof t.hide.inactive&&(f.show.bind("qtip-"+w+"-inactive",o),a.each(g.inactiveEvents,function(a,b){f.hide.add(G.tooltip).bind(b+F+"-inactive",o)})),a.each(h.hide,function(b,c){var d=a.inArray(c,h.show),e=a(f.hide);d>-1&&e.add(f.show).length===e.length||c==="unfocus"?(f.show.bind(c+F,function(a){E.is(":visible")?l(a):k(a)}),delete h.show[d]):f.hide.bind(c+F,l)}),a.each(h.show,function(a,b){f.show.bind(b+F,k)}),"number"===typeof t.hide.distance&&f.show.add(E).bind("mousemove"+F,function(a){var b=H.origin||{},c=t.hide.distance,d=Math.abs;(d(a.pageX-b.pageX)>=c||d(a.pageY-b.pageY)>=c)&&z.hide(a)}),c.target==="mouse"&&(f.show.bind("mousemove"+F,function(a){i={pageX:a.pageX,pageY:a.pageY,type:"mousemove"}}),c.adjust.mouse&&(t.hide.event&&E.bind("mouseleave"+F,function(a){(a.relatedTarget||a.target)!==f.show[0]&&z.hide(a)}),f.document.bind("mousemove"+F,function(a){!E.hasClass(m)&&E.is(":visible")&&z.reposition(a||i)}))),(c.adjust.resize||f.viewport.length)&&(a.event.special.resize?f.viewport:f.window).bind("resize"+F,p),(f.viewport.length||j&&E.css("position")==="fixed")&&f.viewport.bind("scroll"+F,p)}function P(b,d){function g(b){function i(c){c&&(delete h[c.src],clearTimeout(z.timers.img[c.src]),a(c).unbind(F)),a.isEmptyObject(h)&&(z.redraw(),d!==e&&z.reposition(H.event),b())}var g,h={};if((g=f.find("img:not([height]):not([width])")).length===0)return i();g.each(function(b,d){if(h[d.src]===c){var e=0,f=3;(function g(){if(d.height||d.width||e>f)return i(d);e+=1,z.timers.img[d.src]=setTimeout(g,700)})(),a(d).bind("error"+F+" load"+F,function(){i(this)}),h[d.src]=d}})}var f=G.content;if(!z.rendered||!b)return e;a.isFunction(b)&&(b=b.call(s,H.event,z)||""),b.jquery&&b.length>0?f.empty().append(b.css({display:"block"})):f.html(b),z.rendered<0?E.queue("fx",g):(D=0,g(a.noop));return z}function O(b,c){var d=G.title;if(!z.rendered||!b)return e;a.isFunction(b)&&(b=b.call(s,H.event,z));if(b===e)return K(e);b.jquery&&b.length>0?d.empty().append(b.css({display:"block"})):d.html(b),z.redraw(),c!==e&&z.rendered&&E.is(":visible")&&z.reposition(H.event)}function N(a){var b=G.button,c=G.title;if(!z.rendered)return e;a?(c||M(),L()):b.remove()}function M(){var b=B+"-title";G.titlebar&&K(),G.titlebar=a("<div />",{"class":k+"-titlebar "+(t.style.widget?"ui-widget-header":"")}).append(G.title=a("<div />",{id:b,"class":k+"-title","aria-atomic":d})).insertBefore(G.content).delegate(".ui-tooltip-close","mousedown keydown mouseup keyup mouseout",function(b){a(this).toggleClass("ui-state-active ui-state-focus",b.type.substr(-4)==="down")}).delegate(".ui-tooltip-close","mouseover mouseout",function(b){a(this).toggleClass("ui-state-hover",b.type==="mouseover")}),t.content.title.button?L():z.rendered&&z.redraw()}function L(){var b=t.content.title.button,c=typeof b==="string",d=c?b:"Close tooltip";G.button&&G.button.remove(),b.jquery?G.button=b:G.button=a("<a />",{"class":"ui-state-default ui-tooltip-close "+(t.style.widget?"":k+"-icon"),title:d,"aria-label":d}).prepend(a("<span />",{"class":"ui-icon ui-icon-close",html:"&times;"})),G.button.appendTo(G.titlebar).attr("role","button").click(function(a){E.hasClass(m)||z.hide(a);return e}),z.redraw()}function K(a){G.title&&(G.titlebar.remove(),G.titlebar=G.title=G.button=f,a!==e&&z.reposition())}function J(){var a=t.style.widget;E.toggleClass(l,a).toggleClass(o,t.style["default"]&&!a),G.content.toggleClass(l+"-content",a),G.titlebar&&G.titlebar.toggleClass(l+"-header",a),G.button&&G.button.toggleClass(k+"-icon",!a)}function I(a){var b=0,c,d=t,e=a.split(".");while(d=d[e[b++]])b<e.length&&(c=d);return[c||t,e.pop()]}var z=this,A=document.body,B=k+"-"+w,C=0,D=0,E=a(),F=".qtip-"+w,G,H;z.id=w,z.rendered=e,z.elements=G={target:s},z.timers={img:{}},z.options=t,z.checks={},z.plugins={},z.cache=H={event:{},target:a(),disabled:e,attr:y},z.checks.builtin={"^id$":function(b,c,f){var h=f===d?g.nextid:f,i=k+"-"+h;h!==e&&h.length>0&&!a("#"+i).length&&(E[0].id=i,G.content[0].id=i+"-content",G.title[0].id=i+"-title")},"^content.text$":function(a,b,c){P(c)},"^content.title.text$":function(a,b,c){if(!c)return K();!G.title&&c&&M(),O(c)},"^content.title.button$":function(a,b,c){N(c)},"^position.(my|at)$":function(a,b,c){"string"===typeof c&&(a[b]=new h.Corner(c))},"^position.container$":function(a,b,c){z.rendered&&E.appendTo(c)},"^show.ready$":function(){z.rendered?z.toggle(d):z.render(1)},"^style.classes$":function(a,b,c){E.attr("class",k+" qtip ui-helper-reset "+c)},"^style.widget|content.title":J,"^events.(render|show|move|hide|focus|blur)$":function(b,c,d){E[(a.isFunction(d)?"":"un")+"bind"]("tooltip"+c,d)},"^(show|hide|position).(event|target|fixed|inactive|leave|distance|viewport|adjust)":function(){var a=t.position;E.attr("tracking",a.target==="mouse"&&a.adjust.mouse),R(),Q()}},a.extend(z,{render:function(b){if(z.rendered)return z;var c=t.content.text,f=t.content.title.text,g=t.position,i=a.Event("tooltiprender");a.attr(s[0],"aria-describedby",B),E=G.tooltip=a("<div/>",{id:B,"class":k+" qtip ui-helper-reset "+o+" "+t.style.classes+" "+k+"-pos-"+t.position.my.abbrev(),width:t.style.width||"",height:t.style.height||"",tracking:g.target==="mouse"&&g.adjust.mouse,role:"alert","aria-live":"polite","aria-atomic":e,"aria-describedby":B+"-content","aria-hidden":d}).toggleClass(m,H.disabled).data("qtip",z).appendTo(t.position.container).append(G.content=a("<div />",{"class":k+"-content",id:B+"-content","aria-atomic":d})),z.rendered=-1,C=D=1,f&&(M(),a.isFunction(f)||O(f,e)),a.isFunction(c)||P(c,e),z.rendered=d,J(),a.each(t.events,function(b,c){a.isFunction(c)&&E.bind(b==="toggle"?"tooltipshow tooltiphide":"tooltip"+b,c)}),a.each(h,function(){this.initialize==="render"&&this(z)}),Q(),E.queue("fx",function(a){i.originalEvent=H.event,E.trigger(i,[z]),C=D=0,z.redraw(),(t.show.ready||b)&&z.toggle(d,H.event,e),a()});return z},get:function(a){var b,c;switch(a.toLowerCase()){case"dimensions":b={height:E.outerHeight(),width:E.outerWidth()};break;case"offset":b=h.offset(E,t.position.container);break;default:c=I(a.toLowerCase()),b=c[0][c[1]],b=b.precedance?b.string():b}return b},set:function(b,c){function m(a,b){var c,d,e;for(c in k)for(d in k[c])if(e=(new RegExp(d,"i")).exec(a))b.push(e),k[c][d].apply(z,b)}var g=/^position\.(my|at|adjust|target|container)|style|content|show\.ready/i,h=/^content\.(title|attr)|style/i,i=e,j=e,k=z.checks,l;"string"===typeof b?(l=b,b={},b[l]=c):b=a.extend(d,{},b),a.each(b,function(c,d){var e=I(c.toLowerCase()),f;f=e[0][e[1]],e[0][e[1]]="object"===typeof d&&d.nodeType?a(d):d,b[c]=[e[0],e[1],d,f],i=g.test(c)||i,j=h.test(c)||j}),x(t),C=D=1,a.each(b,m),C=D=0,E.is(":visible")&&z.rendered&&(i&&z.reposition(t.position.target==="mouse"?f:H.event),j&&z.redraw());return z},toggle:function(b,c){function q(){b?(a.browser.msie&&E[0].style.removeAttribute("filter"),E.css("overflow",""),"string"===typeof h.autofocus&&a(h.autofocus,E).focus(),p=a.Event("tooltipvisible"),p.originalEvent=c?H.event:f,E.trigger(p,[z]),h.target.trigger("qtip-"+w+"-inactive")):E.css({display:"",visibility:"",opacity:"",left:"",top:""})}if(!z.rendered)return b?z.render(1):z;var g=b?"show":"hide",h=t[g],j=E.is(":visible"),k=!c||t[g].target.length<2||H.target[0]===c.target,l=t.position,m=t.content,o,p;(typeof b).search("boolean|number")&&(b=!j);if(!E.is(":animated")&&j===b&&k)return z;if(c){if(/over|enter/.test(c.type)&&/out|leave/.test(H.event.type)&&c.target===t.show.target[0]&&E.has(c.relatedTarget).length)return z;H.event=a.extend({},c)}p=a.Event("tooltip"+g),p.originalEvent=c?H.event:f,E.trigger(p,[z,90]);if(p.isDefaultPrevented())return z;a.attr(E[0],"aria-hidden",!b),b?(H.origin=a.extend({},i),z.focus(c),a.isFunction(m.text)&&P(m.text,e),a.isFunction(m.title.text)&&O(m.title.text,e),!v&&l.target==="mouse"&&l.adjust.mouse&&(a(document).bind("mousemove.qtip",function(a){i={pageX:a.pageX,pageY:a.pageY,type:"mousemove"}}),v=d),z.reposition(c,arguments[2]),(p.solo=!!h.solo)&&a(n,h.solo).not(E).qtip("hide",p)):(clearTimeout(z.timers.show),delete H.origin,v&&!a(n+'[tracking="true"]:visible',h.solo).not(E).length&&(a(document).unbind("mousemove.qtip"),v=e),z.blur(c)),k&&E.stop(0,1),h.effect===e?(E[g](),q.call(E)):a.isFunction(h.effect)?(h.effect.call(E,z),E.queue("fx",function(a){q(),a()})):E.fadeTo(90,b?1:0,q),b&&h.target.trigger("qtip-"+w+"-inactive");return z},show:function(a){return z.toggle(d,a)},hide:function(a){return z.toggle(e,a)},focus:function(b){if(!z.rendered)return z;var c=a(n),d=parseInt(E[0].style.zIndex,10),e=g.zindex+c.length,f=a.extend({},b),h,i;E.hasClass(p)||(i=a.Event("tooltipfocus"),i.originalEvent=f,E.trigger(i,[z,e]),i.isDefaultPrevented()||(d!==e&&(c.each(function(){this.style.zIndex>d&&(this.style.zIndex=this.style.zIndex-1)}),c.filter("."+p).qtip("blur",f)),E.addClass(p)[0].style.zIndex=e));return z},blur:function(b){var c=a.extend({},b),d;E.removeClass(p),d=a.Event("tooltipblur"),d.originalEvent=c,E.trigger(d,[z]);return z},reposition:function(c,d){if(!z.rendered||C)return z;C=1;var f=t.position.target,g=t.position,j=g.my,l=g.at,m=g.adjust,n=m.method.split(" "),o=E.outerWidth(),p=E.outerHeight(),q=0,r=0,s=a.Event("tooltipmove"),u=E.css("position")==="fixed",v=g.viewport,w={left:0,top:0},x=g.container,y=e,B=z.plugins.tip,D={horizontal:n[0],vertical:n[1]=n[1]||n[0],enabled:v.jquery&&f[0]!==b&&f[0]!==A&&m.method!=="none",left:function(a){var b=D.horizontal==="shift",c=-x.offset.left+v.offset.left+v.scrollLeft,d=j.x==="left"?o:j.x==="right"?-o:-o/2,e=l.x==="left"?q:l.x==="right"?-q:-q/2,f=B&&B.size?B.size.width||0:0,g=B&&B.corner&&B.corner.precedance==="x"&&!b?f:0,h=c-a+g,i=a+o-v.width-c+g,k=d-(j.precedance==="x"||j.x===j.y?e:0),n=j.x==="center";b?(g=B&&B.corner&&B.corner.precedance==="y"?f:0,k=(j.x==="left"?1:-1)*d-g,w.left+=h>0?h:i>0?-i:0,w.left=Math.max(-x.offset.left+v.offset.left+(g&&B.corner.x==="center"?B.offset:0),a-k,Math.min(Math.max(-x.offset.left+v.offset.left+v.width,a+k),w.left))):(h>0&&(j.x!=="left"||i>0)?w.left-=k:i>0&&(j.x!=="right"||h>0)&&(w.left-=n?-k:k),w.left!==a&&n&&(w.left-=m.x),w.left<c&&-w.left>i&&(w.left=a));return w.left-a},top:function(a){var b=D.vertical==="shift",c=-x.offset.top+v.offset.top+v.scrollTop,d=j.y==="top"?p:j.y==="bottom"?-p:-p/2,e=l.y==="top"?r:l.y==="bottom"?-r:-r/2,f=B&&B.size?B.size.height||0:0,g=B&&B.corner&&B.corner.precedance==="y"&&!b?f:0,h=c-a+g,i=a+p-v.height-c+g,k=d-(j.precedance==="y"||j.x===j.y?e:0),n=j.y==="center";b?(g=B&&B.corner&&B.corner.precedance==="x"?f:0,k=(j.y==="top"?1:-1)*d-g,w.top+=h>0?h:i>0?-i:0,w.top=Math.max(-x.offset.top+v.offset.top+(g&&B.corner.x==="center"?B.offset:0),a-k,Math.min(Math.max(-x.offset.top+v.offset.top+v.height,a+k),w.top))):(h>0&&(j.y!=="top"||i>0)?w.top-=k:i>0&&(j.y!=="bottom"||h>0)&&(w.top-=n?-k:k),w.top!==a&&n&&(w.top-=m.y),w.top<0&&-w.top>i&&(w.top=a));return w.top-a}},F;if(a.isArray(f)&&f.length===2)l={x:"left",y:"top"},w={left:f[0],top:f[1]};else if(f==="mouse"&&(c&&c.pageX||H.event.pageX))l={x:"left",y:"top"},c=(c&&(c.type==="resize"||c.type==="scroll")?H.event:c&&c.pageX&&c.type==="mousemove"?c:i&&i.pageX&&(m.mouse||!c||!c.pageX)?{pageX:i.pageX,pageY:i.pageY}:!m.mouse&&H.origin&&H.origin.pageX?H.origin:c)||c||H.event||i||{},w={top:c.pageY,left:c.pageX};else{f==="event"?c&&c.target&&c.type!=="scroll"&&c.type!=="resize"?f=H.target=a(c.target):f=H.target:H.target=a(f),f=a(f).eq(0);if(f.length===0)return z;f[0]===document||f[0]===b?(q=h.iOS?b.innerWidth:f.width(),r=h.iOS?b.innerHeight:f.height(),f[0]===b&&(w={top:u||h.iOS?(v||f).scrollTop():0,left:u||h.iOS?(v||f).scrollLeft():0})):f.is("area")&&h.imagemap?w=h.imagemap(f,l,D.enabled?n:e):f[0].namespaceURI==="http://www.w3.org/2000/svg"&&h.svg?w=h.svg(f,l):(q=f.outerWidth(),r=f.outerHeight(),w=h.offset(f,x)),w.offset&&(q=w.width,r=w.height,y=w.flipoffset,w=w.offset);if(h.iOS<4.1&&h.iOS>3.1||h.iOS==4.3||!h.iOS&&u)F=a(b),w.left-=F.scrollLeft(),w.top-=F.scrollTop();w.left+=l.x==="right"?q:l.x==="center"?q/2:0,w.top+=l.y==="bottom"?r:l.y==="center"?r/2:0}w.left+=m.x+(j.x==="right"?-o:j.x==="center"?-o/2:0),w.top+=m.y+(j.y==="bottom"?-p:j.y==="center"?-p/2:0),D.enabled?(v={elem:v,height:v[(v[0]===b?"h":"outerH")+"eight"](),width:v[(v[0]===b?"w":"outerW")+"idth"](),scrollLeft:u?0:v.scrollLeft(),scrollTop:u?0:v.scrollTop(),offset:v.offset()||{left:0,top:0}},x={elem:x,scrollLeft:x.scrollLeft(),scrollTop:x.scrollTop(),offset:x.offset()||{left:0,top:0}},w.adjusted={left:D.horizontal!=="none"?D.left(w.left):0,top:D.vertical!=="none"?D.top(w.top):0},w.adjusted.left+w.adjusted.top&&E.attr("class",E[0].className.replace(/ui-tooltip-pos-\w+/i,k+"-pos-"+j.abbrev())),y&&w.adjusted.left&&(w.left+=y.left),y&&w.adjusted.top&&(w.top+=y.top)):w.adjusted={left:0,top:0},s.originalEvent=a.extend({},c),E.trigger(s,[z,w,v.elem||v]);if(s.isDefaultPrevented())return z;delete w.adjusted,d===e||isNaN(w.left)||isNaN(w.top)||f==="mouse"||!a.isFunction(g.effect)?E.css(w):a.isFunction(g.effect)&&(g.effect.call(E,z,a.extend({},w)),E.queue(function(b){a(this).css({opacity:"",height:""}),a.browser.msie&&this.style.removeAttribute("filter"),b()})),C=0;return z},redraw:function(){if(z.rendered<1||D)return z;var a=t.position.container,b,c,d,e;D=1,t.style.height&&E.css("height",t.style.height),t.style.width?E.css("width",t.style.width):(E.css("width","").addClass(r),c=E.width()+1,d=E.css("max-width")||"",e=E.css("min-width")||"",b=(d+e).indexOf("%")>-1?a.width()/100:0,d=(d.indexOf("%")>-1?b:1)*parseInt(d,10)||c,e=(e.indexOf("%")>-1?b:1)*parseInt(e,10)||0,c=d+e?Math.min(Math.max(c,e),d):c,E.css("width",Math.round(c)).removeClass(r)),D=0;return z},disable:function(b){"boolean"!==typeof b&&(b=!E.hasClass(m)&&!H.disabled),z.rendered?(E.toggleClass(m,b),a.attr(E[0],"aria-disabled",b)):H.disabled=!!b;return z},enable:function(){return z.disable(e)},destroy:function(){var b=s[0],c=a.attr(b,u),d=s.data("qtip");z.rendered&&(E.remove(),a.each(z.plugins,function(){this.destroy&&this.destroy()})),clearTimeout(z.timers.show),clearTimeout(z.timers.hide),R();if(!d||z===d)a.removeData(b,"qtip"),t.suppress&&c&&(a.attr(b,"title",c),s.removeAttr(u)),s.removeAttr("aria-describedby");s.unbind(".qtip-"+w),delete j[z.id];return s}})}function x(b){var c;if(!b||"object"!==typeof b)return e;if(b.metadata===f||"object"!==typeof b.metadata)b.metadata={type:b.metadata};if("content"in b){if(b.content===f||"object"!==typeof b.content||b.content.jquery)b.content={text:b.content};c=b.content.text||e,!a.isFunction(c)&&(!c&&!c.attr||c.length<1||"object"===typeof c&&!c.jquery)&&(b.content.text=e);if("title"in b.content){if(b.content.title===f||"object"!==typeof b.content.title)b.content.title={text:b.content.title};c=b.content.title.text||e,!a.isFunction(c)&&(!c&&!c.attr||c.length<1||"object"===typeof c&&!c.jquery)&&(b.content.title.text=e)}}if("position"in b)if(b.position===f||"object"!==typeof b.position)b.position={my:b.position,at:b.position};if("show"in b)if(b.show===f||"object"!==typeof b.show)b.show.jquery?b.show={target:b.show}:b.show={event:b.show};if("hide"in b)if(b.hide===f||"object"!==typeof b.hide)b.hide.jquery?b.hide={target:b.hide}:b.hide={event:b.hide};if("style"in b)if(b.style===f||"object"!==typeof b.style)b.style={classes:b.style};a.each(h,function(){this.sanitize&&this.sanitize(b)});return b}function w(){w.history=w.history||[],w.history.push(arguments);if("object"===typeof console){var a=console[console.warn?"warn":"log"],b=Array.prototype.slice.call(arguments),c;typeof arguments[0]==="string"&&(b[0]="qTip2: "+b[0]),c=a.apply?a.apply(console,b):a(b)}}"use strict";var d=!0,e=!1,f=null,g,h,i,j={},k="ui-tooltip",l="ui-widget",m="ui-state-disabled",n="div.qtip."+k,o=k+"-default",p=k+"-focus",q=k+"-hover",r=k+"-fluid",s="-31000px",t="_replacedByqTip",u="oldtitle",v;g=a.fn.qtip=function(b,h,i){var j=(""+b).toLowerCase(),k=f,l=a.makeArray(arguments).slice(1),m=l[l.length-1],n=this[0]?a.data(this[0],"qtip"):f;if(!arguments.length&&n||j==="api")return n;if("string"===typeof b){this.each(function(){var b=a.data(this,"qtip");if(!b)return d;m&&m.timeStamp&&(b.cache.event=m);if(j!=="option"&&j!=="options"||!h)b[j]&&b[j].apply(b[j],l);else if(a.isPlainObject(h)||i!==c)b.set(h,i);else{k=b.get(h);return e}});return k!==f?k:this}if("object"===typeof b||!arguments.length){n=x(a.extend(d,{},b));return g.bind.call(this,n,m)}},g.bind=function(b,f){return this.each(function(k){function r(b){function d(){p.render(typeof b==="object"||l.show.ready),m.show.add(m.hide).unbind(o)}if(p.cache.disabled)return e;p.cache.event=a.extend({},b),p.cache.target=b?a(b.target):[c],l.show.delay>0?(clearTimeout(p.timers.show),p.timers.show=setTimeout(d,l.show.delay),n.show!==n.hide&&m.hide.bind(n.hide,function(){clearTimeout(p.timers.show)})):d()}var l,m,n,o,p,q;q=a.isArray(b.id)?b.id[k]:b.id,q=!q||q===e||q.length<1||j[q]?g.nextid++:j[q]=q,o=".qtip-"+q+"-create",p=z.call(this,q,b);if(p===e)return d;l=p.options,a.each(h,function(){this.initialize==="initialize"&&this(p)}),m={show:l.show.target,hide:l.hide.target},n={show:a.trim(""+l.show.event).replace(/ /g,o+" ")+o,hide:a.trim(""+l.hide.event).replace(/ /g,o+" ")+o},/mouse(over|enter)/i.test(n.show)&&!/mouse(out|leave)/i.test(n.hide)&&(n.hide+=" mouseleave"+o),m.show.bind("mousemove"+o,function(a){i={pageX:a.pageX,pageY:a.pageY,type:"mousemove"}}),m.show.bind(n.show,r),(l.show.ready||l.prerender)&&r(f)})},h=g.plugins={Corner:function(a){a=(""+a).replace(/([A-Z])/," $1").replace(/middle/gi,"center").toLowerCase(),this.x=(a.match(/left|right/i)||a.match(/center/)||["inherit"])[0].toLowerCase(),this.y=(a.match(/top|bottom|center/i)||["inherit"])[0].toLowerCase();var b=a.charAt(0);this.precedance=b==="t"||b==="b"?"y":"x",this.string=function(){return this.precedance==="y"?this.y+this.x:this.x+this.y},this.abbrev=function(){var a=this.x.substr(0,1),b=this.y.substr(0,1);return a===b?a:a==="c"||a!=="c"&&b!=="c"?b+a:a+b},this.clone=function(){return{x:this.x,y:this.y,precedance:this.precedance,string:this.string,abbrev:this.abbrev,clone:this.clone}}},offset:function(a,b){function i(a,b){c.left+=b*a.scrollLeft(),c.top+=b*a.scrollTop()}var c=a.offset(),d=b,e=0,f=document.body,g,h;if(d){do{d.css("position")!=="static"&&(g=d[0]===f?{left:parseInt(d.css("left"),10)||0,top:parseInt(d.css("top"),10)||0}:d.position(),c.left-=g.left+(parseInt(d.css("borderLeftWidth"),10)||0)+(parseInt(d.css("marginLeft"),10)||0),c.top-=g.top+(parseInt(d.css("borderTopWidth"),10)||0),h=d.css("overflow"),(h==="scroll"||h==="auto")&&++e);if(d[0]===f)break}while(d=d.offsetParent());b[0]!==f&&e&&i(b,1)}return c},iOS:parseFloat((""+(/CPU.*OS ([0-9_]{1,3})|(CPU like).*AppleWebKit.*Mobile/i.exec(navigator.userAgent)||[0,""])[1]).replace("undefined","3_2").replace("_","."))||e,fn:{attr:function(b,c){if(this.length){var d=this[0],e="title",f=a.data(d,"qtip");if(b===e&&f&&"object"===typeof f&&f.options.suppress){if(arguments.length<2)return a.attr(d,u);f&&f.options.content.attr===e&&f.cache.attr&&f.set("content.text",c);return this.attr(u,c)}}return a.fn["attr"+t].apply(this,arguments)},clone:function(b){var c=a([]),d="title",e=a.fn["clone"+t].apply(this,arguments);b||e.filter("["+u+"]").attr("title",function(){return a.attr(this,u)}).removeAttr(u);return e},remove:a.ui?f:function(b,c){a.ui||a(this).each(function(){c||(!b||a.filter(b,[this]).length)&&a("*",this).add(this).each(function(){a(this).triggerHandler("remove")})})}}},a.each(h.fn,function(b,c){if(!c||a.fn[b+t])return d;var e=a.fn[b+t]=a.fn[b];a.fn[b]=function(){return c.apply(this,arguments)||e.apply(this,arguments)}}),g.version="2.0.0pre",g.nextid=0,g.inactiveEvents="click dblclick mousedown mouseup mousemove mouseleave mouseenter".split(" "),g.zindex=15e3,g.defaults={prerender:e,id:e,overwrite:d,suppress:d,content:{text:d,attr:"title",title:{text:e,button:e}},position:{my:"top left",at:"bottom right",target:e,container:e,viewport:e,adjust:{x:0,y:0,mouse:d,resize:d,method:"flip flip"},effect:function(b,c,d){a(this).animate(c,{duration:200,queue:e})}},show:{target:e,event:"mouseenter",effect:d,delay:90,solo:e,ready:e,autofocus:e},hide:{target:e,event:"mouseleave",effect:d,delay:0,fixed:e,inactive:e,leave:"window",distance:e},style:{classes:"",widget:e,width:e,height:e,"default":d},events:{render:f,move:f,show:f,hide:f,toggle:f,visible:f,focus:f,blur:f}},h.ajax=function(a){var b=a.plugins.ajax;return"object"===typeof b?b:a.plugins.ajax=new A(a)},h.ajax.initialize="render",h.ajax.sanitize=function(a){var b=a.content,c;b&&"ajax"in b&&(c=b.ajax,typeof c!=="object"&&(c=a.content.ajax={url:c}),"boolean"!==typeof c.once&&c.once&&(c.once=!!c.once))},a.extend(d,g.defaults,{content:{ajax:{loading:d,once:d}}}),h.bgiframe=function(b){var c=a.browser,d=b.plugins.bgiframe;if(a("select, object").length<1||(!c.msie||(""+c.version).charAt(0)!=="6"))return e;return"object"===typeof d?d:b.plugins.bgiframe=new B(b)},h.bgiframe.initialize="render",h.imagemap=function(b,c,d){function n(a,b,c){var d=0,e=1,f=1,g=0,h=0,i=a.width,j=a.height;while(i>0&&j>0&&e>0&&f>0){i=Math.floor(i/2),j=Math.floor(j/2),c.x==="left"?e=i:c.x==="right"?e=a.width-i:e+=Math.floor(i/2),c.y==="top"?f=j:c.y==="bottom"?f=a.height-j:f+=Math.floor(j/2),d=b.length;while(d--){if(b.length<2)break;g=b[d][0]-a.offset.left,h=b[d][1]-a.offset.top,(c.x==="left"&&g>=e||c.x==="right"&&g<=e||c.x==="center"&&(g<e||g>a.width-e)||c.y==="top"&&h>=f||c.y==="bottom"&&h<=f||c.y==="center"&&(h<f||h>a.height-f))&&b.splice(d,1)}}return{left:b[0][0],top:b[0][1]}}b.jquery||(b=a(b));var e=(b[0].shape||b.attr("shape")).toLowerCase(),f=(b[0].coords||b.attr("coords")).split(","),g=[],h=a('img[usemap="#'+b.parent("map").attr("name")+'"]'),i=h.offset(),j={width:0,height:0,offset:{top:1e10,right:0,bottom:0,left:1e10}},k=0,l=0,m;i.left+=Math.ceil((h.outerWidth()-h.width())/2),i.top+=Math.ceil((h.outerHeight()-h.height())/2);if(e==="poly"){k=f.length;while(k--)l=[parseInt(f[--k],10),parseInt(f[k+1],10)],l[0]>j.offset.right&&(j.offset.right=l[0]),l[0]<j.offset.left&&(j.offset.left=l[0]),l[1]>j.offset.bottom&&(j.offset.bottom=l[1]),l[1]<j.offset.top&&(j.offset.top=l[1]),g.push(l)}else g=a.map(f,function(a){return parseInt(a,10)});switch(e){case"rect":j={width:Math.abs(g[2]-g[0]),height:Math.abs(g[3]-g[1]),offset:{left:Math.min(g[0],g[2]),top:Math.min(g[1],g[3])}};break;case"circle":j={width:g[2]+2,height:g[2]+2,offset:{left:g[0],top:g[1]}};break;case"poly":a.extend(j,{width:Math.abs(j.offset.right-j.offset.left),height:Math.abs(j.offset.bottom-j.offset.top)}),c.string()==="centercenter"?j.offset={left:j.offset.left+j.width/2,top:j.offset.top+j.height/2}:(j.offset=n(j,g.slice(),c),d&&(d[0]==="flip"||d[1]==="flip")&&(j.flipoffset=n(j,g.slice(),{x:c.x==="left"?"right":c.x==="right"?"left":"center",y:c.y==="top"?"bottom":c.y==="bottom"?"top":"center"}),j.flipoffset.left-=j.offset.left,j.flipoffset.top-=j.offset.top)),j.width=j.height=0}j.offset.left+=i.left,j.offset.top+=i.top;return j},h.modal=function(a){var b=a.plugins.modal;return"object"===typeof b?b:a.plugins.modal=new C(a)},h.modal.initialize="render",h.modal.sanitize=function(a){a.show&&(typeof a.show.modal!=="object"?a.show.modal={on:!!a.show.modal}:typeof a.show.modal.on==="undefined"&&(a.show.modal.on=d))},h.modal.zindex=g.zindex+1e3,a.extend(d,g.defaults,{show:{modal:{on:e,effect:d,blur:d,escape:d}}}),h.svg=function(b,c){var d=a(document),e=b[0],f={width:0,height:0,offset:{top:1e10,left:1e10}},g,h,i,j,k;if(e.getBBox&&e.parentNode){g=e.getBBox(),h=e.getScreenCTM(),i=e.farthestViewportElement||e;if(!i.createSVGPoint)return f;j=i.createSVGPoint(),j.x=g.x,j.y=g.y,k=j.matrixTransform(h),f.offset.left=k.x,f.offset.top=k.y,j.x+=g.width,j.y+=g.height,k=j.matrixTransform(h),f.width=k.x-f.offset.left,f.height=k.y-f.offset.top,f.offset.left+=d.scrollLeft(),f.offset.top+=d.scrollTop()}return f},h.tip=function(a){var b=a.plugins.tip;return"object"===typeof b?b:a.plugins.tip=new E(a)},h.tip.initialize="render",h.tip.sanitize=function(a){var b=a.style,c;b&&"tip"in b&&(c=a.style.tip,typeof c!=="object"&&(a.style.tip={corner:c}),/string|boolean/i.test(typeof c.corner)||(c.corner=d),typeof c.width!=="number"&&delete c.width,typeof c.height!=="number"&&delete c.height,typeof c.border!=="number"&&c.border!==d&&delete c.border,typeof c.offset!=="number"&&delete c.offset)},a.extend(d,g.defaults,{style:{tip:{corner:d,mimic:e,width:6,height:6,border:d,offset:0}}})})(jQuery,window);



<ja:if test="${menuControl}" value="Side Menu">
/*
 * Sticklr v1.2
 * Sticky Side Panel CSS + jQuery Plugin
 *
 * Copyright 2011 amatyr4n
 * http://codecanyon.net/user/amatyr4n
 *
 * licensed under Envato licenses
 * http://wiki.envato.com/support/legal-terms/licensing-terms/
 */
 
(function($){

    $.fn.sticklr = function(method){

        var defaults = {
            animate         : false,
            colWidth	    : '125px',
            relativeGap     : 15,
            relativeTo      : 'center',
            showOn		    : 'click',
            stickTo         : 'left'
        };
               
        var methods = {
        
            init : function(opts){

                return this.each(function(){
                    var $sticklr = $(this);
                    var props = $.extend({}, defaults, opts);
                    var top = helpers.calcTop(props.animate, props.relativeTo, props.relativeGap, $sticklr.height());
                    
                    if(!$sticklr.hasClass('sticklr')) $sticklr.addClass('sticklr');
                    if(props.stickTo == 'right') $sticklr.addClass('sticklr-right');                    
                    if(props.showOn == 'hover') props.showOn = 'mouseenter mouseleave';
               
                    $sticklr
                        .addClass('sticklr-js')
                        .css({
                            'position'  : (props.animate ? 'absolute' : 'fixed'),
                            'top'       : top
                        })
                        .data('props', props)
					    .find('a[href="#"]').bind('click', function(e){
						    e.preventDefault();
					    })
					    .end()
					    .children('li')
					    .children('a[href="#"]').bind(props.showOn, function(){
                                if(!$(this).siblings().hasClass('sticklr-active')){
                                    methods.hide();
                                    $(this)
                                        .append('<span class="sticklr-arrow  ui-icon ui-icon-triangle-1-e"></span>')
                                        .siblings()
                                        .each(function(){                                                        
                                            $(this).css({
                                                'margin-left'   : '50px',
                                                'margin-right'  : '50px',
                                                'opacity'       : 0,
                                                'position'      : 'absolute',
                                                'top'           : 0
                                            }).show();
                                            var totalHeight = $(this).height() + $(this).offset().top;
                                            var windowHeight = $(window).height() + $(window).scrollTop();
                                            var newTop = 0;
                                            if(totalHeight > windowHeight){
                                                newTop = parseInt($(this).css('top'), 10) - (totalHeight - windowHeight);
                                            }
                                            $(this).css({
                                                'top'           : newTop
                                            }).animate({
                                                'margin-left'   : '20px',
                                                'margin-right'  : '20px',
                                                'opacity'       : 1.0
                                            }, 200);
                                    }).addClass('sticklr-active ui-widget-content ui-corner-all');
                                }
                                return false;
					    });
				
				    if($.browser.msie || props.colWidth != defaults.colWidth){
					    for(var i = 2; i < 10; i++){
                            var newLeft = 23 + i + (parseInt(props.colWidth, 10) * (i - 2));
                            var newRight = 'auto';
                            if(props.stickTo == 'right'){
                                newRight = newLeft;
                                newLeft = 'auto';
                            }
						    $sticklr.find('li').find('ul:nth-child(' + i + ')').css({
							    'left'	: newLeft,
							    'right' : newRight,
							    'width'	: props.colWidth
						    });
					    }
				    }
                });
            },
        
            hide: function(){
                $('.sticklr-active').animate({
                    'margin-left'   : '50px',
                    'margin-right'  : '50px',
                    'opacity'       : 0
                }, 200, function(){
                    $(this).removeClass('sticklr-active').hide();
                });
                $('span.sticklr-arrow').remove();
            }
        };

        var helpers = {
        
            calcTop : function(anim, on, gap, h){
                if(/top|high/i.test(on)){
                    return (anim ? $(window).scrollTop() : 0) + gap;                
                } else if(/bottom|low|ground/i.test(on)){
                    return (anim ? ($(window).scrollTop() + $(window).height() - h) : ($(window).height() - h)) - gap;
                } else {
                    return anim ? ($(window).scrollTop() + (($(window).height() - h) / 2)) : (($(window).height() - h) / 2);
                }
            },
            
            fixPos: function(){
                $('.sticklr').each(function(){
                    var top = $(this).data('props').relativeTo;
                    var gap = $(this).data('props').relativeGap;
                    var h = $(this).height();
                    if($(this).css('position') == 'absolute'){
                        $(this).stop().animate({
                            'top'   : helpers.calcTop(true, top, gap, h)
                        }, 1000);
                    } else {
                        $(this).css({
                            'top'   : helpers.calcTop(false, top, gap, h)
                        });
                    }
                });
            }
        };
        
        $(window).bind({
            resize: helpers.fixPos,
            scroll: helpers.fixPos
        });

        $(document).bind('click', function(e){
            if(!$(e.target).parents().hasClass('sticklr')) methods.hide();
        });
        
        if (methods[method] && method.toLowerCase() != 'init'){
            return methods[method].apply(this, Array.prototype.slice.call(arguments, 1));
        } else if (typeof method === 'object' || !method){
            return methods.init.apply(this, arguments);
        } else {
            $.error('Method "' +  method + '" does not exist in Sticklr');
        }     
    }
})(jQuery);
</ja:if>




/******************************************************
    *Browser Reject
******************************************************/	
(function(b){b.reject=function(a){a=b.extend(!0,{reject:{all:!0,msie5:!0,msie6:!0,msie7:!0,msie8:!0},display:[],browserInfo:{firefox:{text:"Firefox 8",url:"http://www.mozilla.com/firefox/"},safari:{text:"Safari 5",url:"http://www.apple.com/safari/download/"},opera:{text:"Opera 11",url:"http://www.opera.com/download/"},chrome:{text:"Chrome 15",url:"http://www.google.com/chrome/"},msie:{text:"Internet Explorer 9",url:"http://www.microsoft.com/windows/Internet-explorer/"},gcf:{text:"Google Chrome Frame",url:"http://code.google.com/chrome/chromeframe/",
allow:{all:!1,msie:!0}}},header:"Did you know that your Internet Browser is out of date?",paragraph1:"Your browser is out of date, and may not be compatible with our website. A list of the most popular web browsers can be found below.",paragraph2:"Just click on the icons to get to the download page",close:!0,closeMessage:"Upgrading is a good thing!",closeLink:"Close This Window",closeURL:"#",closeESC:!0,closeCookie:!1,cookieSettings:{path:"/",
expires:0},imagePath:"res/icons/",overlayBgColor:"#000",overlayOpacity:0.8,fadeInTime:"fast",fadeOutTime:"fast",analytics:!1},a);if(1>a.display.length)a.display="firefox,chrome,msie,safari,opera,gcf".split(",");b.isFunction(a.beforeReject)&&a.beforeReject(a);if(!a.close)a.closeESC=!1;var f=function(a){return(a.all?!0:!1)||(a[b.os.name]?!0:!1)||(a[b.layout.name]?!0:!1)||(a[b.browser.name]?!0:!1)||(a[b.browser.className]?!0:!1)};if(!f(a.reject)){if(b.isFunction(a.onFail))a.onFail(a);return!1}if(a.close&&
a.closeCookie){var e="jreject-close",c=function(c,e){if("undefined"!=typeof e){var d="";0!=a.cookieSettings.expires&&(d=new Date,d.setTime(d.getTime()+a.cookieSettings.expires),d="; expires="+d.toGMTString());var f=a.cookieSettings.path||"/";document.cookie=c+"="+encodeURIComponent(null==e?"":e)+d+"; path="+f}else{f=null;if(document.cookie&&""!=document.cookie)for(var g=document.cookie.split(";"),h=g.length,i=0;i<h;++i)if(d=b.trim(g[i]),d.substring(0,c.length+1)==c+"="){f=decodeURIComponent(d.substring(c.length+
1));break}return f}};if(null!=c(e))return!1}var d='<div id="jr_overlay"></div><div id="jr_wrap"><div id="jr_inner"><h1 id="jr_header">'+a.header+"</h1>"+(""===a.paragraph1?"":"<p>"+a.paragraph1+"</p>")+(""===a.paragraph2?"":"<p>"+a.paragraph2+"</p>")+"<ul>",i=0,l;for(l in a.display){var m=a.display[l],j=a.browserInfo[m]||!1;if(j&&(void 0==j.allow||f(j.allow)))d+='<li id="jr_'+m+'"><div class="jr_icon"></div><div><a href="'+(j.url||"#")+'">'+(j.text||"Unknown")+"</a></div></li>",++i}var d=d+('</ul><div id="jr_close">'+
(a.close?'<a href="'+a.closeURL+'">'+a.closeLink+"</a><p>"+a.closeMessage+"</p>":"")+"</div></div></div>"),g=b("<div>"+d+"</div>"),f=h(),d=k();g.bind("closejr",function(){if(!a.close)return!1;b.isFunction(a.beforeClose)&&a.beforeClose(a);b(this).unbind("closejr");b("#jr_overlay,#jr_wrap").fadeOut(a.fadeOutTime,function(){b(this).remove();b.isFunction(a.afterClose)&&a.afterClose(a)});b("embed, object, select, applet").show();a.closeCookie&&c(e,"true");return!0});var n=function(b){if(a.analytics){var c=
b.split(/\/+/g)[1];try{_gaq.push(["_trackEvent","External Links",c,b])}catch(d){try{pageTracker._trackEvent("External Links",c,b)}catch(e){}}}window.open(b,"jr_"+Math.round(11*Math.random()));return!1};g.find("#jr_overlay").css({width:f[0],height:f[1],background:a.overlayBgColor,opacity:a.overlayOpacity});g.find("#jr_wrap").css({top:d[1]+f[3]/4,left:d[0]});g.find("#jr_inner").css({minWidth:100*i,maxWidth:140*i,width:"trident"==b.layout.name?155*i:"auto"});g.find("#jr_inner li").css({background:'transparent url("'+
a.imagePath+'background_browser.gif")no-repeat scroll left top'});g.find("#jr_inner li .jr_icon").each(function(){var c=b(this);c.css("background","transparent url("+a.imagePath+"browser_"+c.parent("li").attr("id").replace(/jr_/,"")+".gif) no-repeat scroll left top");c.click(function(){var a=b(this).next("div").children("a").attr("href");n(a)})});g.find("#jr_inner li a").click(function(){n(b(this).attr("href"));return!1});g.find("#jr_close a").click(function(){b(this).trigger("closejr");if("#"===
a.closeURL)return!1});b("#jr_overlay").focus();b("embed, object, select, applet").hide();b("body").append(g.hide().fadeIn(a.fadeInTime));b(window).bind("resize scroll",function(){var a=h();b("#jr_overlay").css({width:a[0],height:a[1]});var c=k();b("#jr_wrap").css({top:c[1]+a[3]/4,left:c[0]})});a.closeESC&&b(document).bind("keydown",function(a){27==a.keyCode&&g.trigger("closejr")});b.isFunction(a.afterReject)&&a.afterReject(a);return!0};var h=function(){var a=window.innerWidth&&window.scrollMaxX?window.innerWidth+
window.scrollMaxX:document.body.scrollWidth>document.body.offsetWidth?document.body.scrollWidth:document.body.offsetWidth,b=window.innerHeight&&window.scrollMaxY?window.innerHeight+window.scrollMaxY:document.body.scrollHeight>document.body.offsetHeight?document.body.scrollHeight:document.body.offsetHeight,e=window.innerWidth?window.innerWidth:document.documentElement&&document.documentElement.clientWidth?document.documentElement.clientWidth:document.body.clientWidth,c=window.innerHeight?window.innerHeight:
document.documentElement&&document.documentElement.clientHeight?document.documentElement.clientHeight:document.body.clientHeight;return[a<e?a:e,b<c?c:b,e,c]},k=function(){return[window.pageXOffset?window.pageXOffset:document.documentElement&&document.documentElement.scrollTop?document.documentElement.scrollLeft:document.body.scrollLeft,window.pageYOffset?window.pageYOffset:document.documentElement&&document.documentElement.scrollTop?document.documentElement.scrollTop:document.body.scrollTop]}})(jQuery);
(function(b){b.browserTest=function(h,k){var a=function(a,b){for(var d=0;d<b.length;d+=1)a=a.replace(b[d][0],b[d][1]);return a},f=function(e,c,d,f){c={name:a((c.exec(e)||["unknown","unknown"])[1],d)};c[c.name]=!0;c.version=c.opera?window.opera.version():(f.exec(e)||["X","X","X","X"])[3];if(/safari/.test(c.name)&&400<c.version)c.version="2.0";else if("presto"===c.name)c.version=9.27<b.browser.version?"futhark":"linear_b";c.versionNumber=parseFloat(c.version,10)||0;e=1;100>c.versionNumber&&9<c.versionNumber&&
(e=2);c.versionX="X"!==c.version?c.version.substr(0,e):"X";c.className=c.name+c.versionX;return c},h=(/Opera|Navigator|Minefield|KHTML|Chrome/.test(h)?a(h,[[/(Firefox|MSIE|KHTML,\slike\sGecko|Konqueror)/,""],["Chrome Safari","Chrome"],["KHTML","Konqueror"],["Minefield","Firefox"],["Navigator","Netscape"]]):h).toLowerCase();b.browser=b.extend(!k?b.browser:{},f(h,/(camino|chrome|firefox|netscape|konqueror|lynx|msie|opera|safari)/,[],/(camino|chrome|firefox|netscape|netscape6|opera|version|konqueror|lynx|msie|safari)(\/|\s)([a-z0-9\.\+]*?)(\;|dev|rel|\s|$)/));
b.layout=f(h,/(gecko|konqueror|msie|opera|webkit)/,[["konqueror","khtml"],["msie","trident"],["opera","presto"]],/(applewebkit|rv|konqueror|msie)(\:|\/|\s)([a-z0-9\.]*?)(\;|\)|\s)/);b.os={name:(/(win|mac|linux|sunos|solaris|iphone)/.exec(navigator.platform.toLowerCase())||["unknown"])[0].replace("sunos","solaris")};k||b("html").addClass([b.os.name,b.browser.name,b.browser.className,b.layout.name,b.layout.className].join(" "))};b.browserTest(navigator.userAgent)})(jQuery);



/**
 * Cookie plugin
 *
 * Copyright (c) 2006 Klaus Hartl (stilbuero.de)
 * Dual licensed under the MIT and GPL licenses:
 * http://www.opensource.org/licenses/mit-license.php
 * http://www.gnu.org/licenses/gpl.html
 *
 */
jQuery.cookie=function(d,c,a){if(typeof c!="undefined"){a=a||{};if(c===null){c="";a.expires=-1}var b="";if(a.expires&&(typeof a.expires=="number"||a.expires.toUTCString)){if(typeof a.expires=="number"){b=new Date;b.setTime(b.getTime()+a.expires*24*60*60*1E3)}else b=a.expires;b="; expires="+b.toUTCString()}var e=a.path?"; path="+a.path:"",f=a.domain?"; domain="+a.domain:"";a=a.secure?"; secure":"";document.cookie=[d,"=",encodeURIComponent(c),b,e,f,a].join("")}else{c=null;if(document.cookie&&document.cookie!=
""){a=document.cookie.split(";");for(b=0;b<a.length;b++){e=jQuery.trim(a[b]);if(e.substring(0,d.length+1)==d+"="){c=decodeURIComponent(e.substring(d.length+1));break}}}return c}};

 




/********************************************************************************************************
 *Addthis Script
 ********************************************************************************************************/	
<ja:if test="${showSocial}" value="true">
var addthis_config =
{
  ui_cobrand: 'Jalbum ImageFlow Skin'
}
</ja:if>