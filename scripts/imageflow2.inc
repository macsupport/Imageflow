$(window).load(function(){

<ja:if test="${jqueryUINone}" value="true"></ja:if><ja:else>$('body').addClass('ui-widget-content ui-corner-all');
$('#title').addClass('ui-widget-header ui-corner-all');</ja:else>
    $('body.ui-widget-content').css('border','0');
	 $('#styleSwitcher').css('border','0');
	$('#controlls').fadeIn("slow");
	$('.slider, .position').fadeIn("slow");	
    <ja:if test="${menuControl}" value="Top Menu">	
	$('#styleSwitcher').fadeIn("slow");
	$('#styleSwitcher').css({marginTop:-10});
	$('#switcher_btn').animate({marginBottom:35, marginRight:0});
	</ja:if>
	<ja:if test="${menuControl}" value="Bottom Menu">
	$('#footer_wrapper').fadeIn("slow");
	$('#footer_wrapper').css({marginBottom:-10});
	$('#switcher_btn').css({marginTop:25});
   </ja:if>
  <ja:if test="${menuControl}" value="Side Menu">$('#stickyCP').show();		
	$('#stickyCP').css({marginLeft:-30});
	$('#stickyCP').delay(300).animate({marginLeft:0});</ja:if>
	$("#maincontent").append('<div class="credit ui-state-highlight ui-corner-all"><a href="http://www.jalbumskins.com/registerlightboxes.html">Un-Registered Version<br />ImageFlow by DrMikey</a></div>').delay(3000);$(".credit").delay(5E3).fadeTo("slow", 0.5);
$(function() {$(".credit").mouseenter(function() {$(this).fadeTo("fast", 1);}).mouseleave(function() {$(this).fadeTo("fast", 0.5);});});

});
$(document).ready(function() {

$( "#switcher_btn" ).button({text: false,
            icons: {
                primary: "ui-icon-carat-2-n-s"
            }
           
			});

$.reject({
		reject:  {all: false ,
        msie5: true, msie6: true,msie7: true, msie8: true},
				closeCookie: true // Set cookie to remmember close for this session
			});

			
<ja:if test="${showJqueryuiSwitcher}" value="true"> $('#ThemeRoller').themeswitcher(); </ja:if>			

/******************************************************
    * Menus  
******************************************************/
<ja:if test="${menuControl}" value="Side Menu">
$('#stickyCP').sticklr({
			animate     : ${controlPanelAnimate},
            relativeTo  : '${controlPanelPosition}',
              relativeGap : ${controlPanelPositionOffset},
				showOn	: '${controlPanelShow}',
                stickTo: '${controlPanelPagePosition}'
			});
$(".sticklr li a:not(.gal, .themer, .sticklr-title a)").mouseenter(function(){
		$(this).addClass("ui-state-hover");
	});

	$(".sticklr li a:not(.gal, .themer, .sticklr-title a)").mouseleave(function(){
		$(this).removeClass("ui-state-hover");
	});	
	</ja:if>


$( "#show_search" ).button({
  label: "Show Search",
            icons: {
                primary: "ui-icon-search"
            }
        }).click(function() {
			var options;
			if ( $( this ).text() === "Show Search" ) {
				options = {
					label: "Hide Search",
					icons: {
						primary: "ui-icon-circle-zoomout"
					}
				};$( "#project1" ).fadeIn( );
			} else {
				options = {
					label: "Show Search",
					icons: {
						primary: "ui-icon-circle-zoomin"
					}
				};$( "#project1" ).fadeOut( );
			}
			$( this ).button( "option", options );
		});
		
		
	$( "#show_search2" ).click(function() {		
				$( "#project1" ).fadeToggle( );		
		});	
		
		$( "#show_basket" ).click(function() {		
				$( "#basket" ).fadeToggle( );		
		});	
		
		

$('#title').hover(function() {
      $('#help_show').fadeIn();
}, function() {
      $('#help_show').fadeOut();
	  
});

<ja:if test="${menuControl}" value="No Menu"></ja:if>


<ja:if test="${menuControl}" value="Top Menu">
	//Control Panel Hide Button Function
var opened=true;
$(function(){
//fix the IE6 position fixed issue
if ($.browser.msie && $.browser.version.substr(0, 1) < 7) {
	$("#styleSwitcher").css("position", "absolute");
	$(window).scroll(function() {
		$("#styleSwitcher").css("top", $(window).scrollTop() + "px");
	});
}
});

	$('#switcher_btn').click(function(){
		if(opened){
			$('#styleSwitcher').animate({marginTop:-42});
			$('#switcher_btn').animate({marginBottom:10, marginRight:0});
			
			opened=false;
		}else{
			
			$('#styleSwitcher').animate({marginTop:-10});
			$('#switcher_btn').animate({marginBottom:35, marginRight:0});
			opened=true;
		}
	});</ja:if>
	
	<ja:if test="${menuControl}" value="Bottom Menu">
	//Control Panel Hide Button Function
var opened=true;
$(function(){
//fix the IE6 position fixed issue
if ($.browser.msie && $.browser.version.substr(0, 1) < 7) {
	$("#styleSwitcher").css("position", "absolute");
	$(window).scroll(function() {
		$("#styleSwitcher").css("top", $(window).scrollTop() + "px");
	});
}
});

$('#switcher_btn').click(function(){
		if(opened){
			$('#footer_wrapper').animate({marginBottom:-42});
			$('#switcher_btn').animate({marginTop:0});
			opened=false;
		}else{			
			$('#footer_wrapper').animate({marginBottom:-10});			
			$('#switcher_btn').animate({marginTop:25});
			opened=true;
		}
	});
	$('#switcher_btn').mouseover(function(){
		$(this).css({cursor:'pointer'});	
	});</ja:if>
	
	$('#switcher_btn').mouseover(function(){
		$(this).css({cursor:'pointer'});	
	});

 $(".printImage").live('click', function() {

            var link = $(select.currentImg).attr('src');

            var img = $("<img />", {
                src: link
            }).appendTo("body");

            img.load(function() {
                img.jqprint();
				 img.remove();

            });
            return false;
        });
		$(function() {
		$(".icon li")
		.mouseenter(function() {
			$(this).addClass('ui-state-hover');
		})
		.mouseleave(function() {
			$(this).removeClass("ui-state-hover");
		});	
		
		$(".sticklr ul li a:not(.gal a,  .themer a .sticklr-title a)")
		.mouseenter(function() {
			$(this).addClass('ui-state-hover');
		})
		.mouseleave(function() {
			$(this).removeClass("ui-state-hover");
		});	
	});
	
	 $('.tooltip-sticky').live('click', function() {
   $(this).qtip({
      overwrite: false,
	  width:250, 
     content   :{
			text: $('.exif_holder', this),
            title: {
                text: 'EXIF Info',
                button: true
            }
			},
      show: {
	   effect: function(offset) {
         $(this).fadeIn(700); // "this" refers to the tooltip
      },
         event: 'click',
		  solo: true,
            modal: true,
			ready:true      
      },
        hide: false,
   position   : { my: 'center',
            at: 'center',
            target: $(window)},
      style      : {
         widget: true,
		 classes: 'ui-tooltip-rounded'
      }
   }); 
});	

$('.description').live('click', function() {
   $(this).qtip({
   width:350,
      overwrite: false, 
     content   :{
			text: $('.description_holder', this),
            title: {
                text: 'Image Info',
                button: true
            }
			},
      show: {
	   effect: function(offset) {
         $(this).fadeIn(700); // "this" refers to the tooltip
      },
         event: 'click',
		  solo: true,
            modal: true,
			ready:true
        
      },
        hide: false,
   position   : { my: 'center',
            at: 'center',
            target: $(window)},
      style      : {
         widget: true,
		  classes: 'ui-tooltip-rounded'
      }
	  
   }); 
});	


  
<ja:if test="${enableBackgroundImage}" value="true">	
	$().ezBgResize({
    img : "res/${imageName}", // Required.
    opacity : 1, // Optional. Default is 100% (1).
    center : true // Optional. Default is true.
});

</ja:if>

<ja:if test="${showCart}" value="true">
	<ja:if test="${showCart}" value="true">$( "#cart" ).dialog({
			autoOpen: false,
			show: "blind",
			width:450,
			position:['right', 30],
			hide: "blind"
		});
		$( "#show_cart_menu" ).click(function() {
			$( "#cart" ).dialog( "open" );
			return false;
		});</ja:if>

 $('.cart_button').live('click', function() {
   $(this).qtip({
      overwrite: false, 
     content   :{
			text: $('.cart_holder', this),
            title: {
                text: 'Add to Cart',
                button: true
            }
			},
      show: {
         event: 'click',
		  solo: true,
            modal: true,
			ready:true
        
      },
        hide: false,
   position   : { my: 'center',
            at: 'center',
            target: $(window)},
      style      : {
         widget: true,
		 classes: 'ui-tooltip-rounded'
      }
   }); 
});	

//destroy tooltip when "cancel" is clicked
$('a.add_cart').live('click', function() {
$('.item_added').show('slide', 300);
	$('.item_added').delay(1000).hide('slide', 300);
    $(this).parents('.qtip').delay(2000).qtip("hide");
});
</ja:if>
$( "#show_cart" ).button({
  label: "Show Cart",
            icons: {
                primary: "ui-icon-cart"
            }
        }).click(function() {
			var options;
			if ( $( this ).text() === "Show Cart" ) {
				options = {
					label: "Hide Cart",
					icons: {
						primary: "ui-icon-cart"
						
					}
				};$( "#cart" ).dialog( "open" );
			} else {
				options = {
					label: "Show Cart",
					icons: {
						primary: "ui-icon-cart"
						
					}
				};$( "#cart" ).dialog( "close" );
			}
			$( this ).button( "option", options );
		});
			
//Add to Cart Button		
		$(".add_cart").button({
  label: "Add to Cart",
            icons: {
                primary: "ui-icon-cart"
            }
        });	
$(function() {

		<ja:if test="${showCart}" value="true">$( "#cart" ).dialog({
			autoOpen: false,
			show: "blind",
			width:450,
			position:['right', 30],
			hide: "blind"
		});
		$( "#show_cart_menu" ).click(function() {
			$( "#cart" ).dialog( "open" );
			return false;
		});</ja:if>
		
		
	});

});