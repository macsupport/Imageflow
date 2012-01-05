/*  ContentFlowAddOn_carousel, version 2 
 * DrMikey 2011
 *  <http://www.jacksasylum.eu/ContentFlow/>
 *
 *  This file is distributed under the terms of the MIT license.
 *  (see http://www.jacksasylum.eu/ContentFlow/LICENSE)
 */



new ContentFlowAddOn ('carousel', {

    conf: {
        shownItems: 4,
        showCaption: true,
        width: 100,
        height: 100,
        space:0.4
    },
    

    init: function() {
        this.addStylesheet();
    },
    
    onloadInit: function (flow) {
    },

    afterContentFlowInit: function (flow) {
       var SI = flow.getAddOnConf('carousel').shownItems;
	  
       var c = flow.Container;
       var ac = flow.getAddOnConf('carousel')
       if (ac.showCaption) {
           $CF(flow.Flow).addClassName('showCaption');
       }

     
       
       
       
       flow.Flow.style.fontSize = 12*(flow.maxHeight / 150) +"px";
       if (flow.Browser.IE) {
           window.setTimeout(function () {flow.Flow.style.overflow = "hidden"}, 1000);
       }
       else {
           flow.Flow.style.overflow = "hidden";
       }

       flow.setConfig({visibleItems: Math.ceil((flow.getAddOnConf('carousel').shownItems - 1)/2) + 1});
    },
	
	ContentFlowConf: {
        scaleFactorLandscape: "max",      // scale factor of landscape images ('max' := height= maxItemHeight)
        scaleFactorPortrait: "max",
        fixItemSize: true,
        relativeItemPosition: "center", // align top/above, bottom/below, left, right, center of position coordinate
        visibleItems: 2,               // how man item are visible on each side (-1 := auto)
        reflectionHeight: 0,          // float (relative to original image height)


        /* ==================== actions ==================== */
        onclickInactiveItem : function (item) {
            this.conf.onclickActiveItem(item);
            return false;
        },

        /* ==================== calculations ==================== */

        calcStepWidth: function(diff) {
           var vI = this.conf.visibleItems;
           var items = this.items.length;
           items = items == 0 ? 1 : items;
           var absDiff = Math.abs(diff);
           if (absDiff > vI) {
               if (diff > 0) {
                   var stepwidth = diff - vI;
               } else {
                   var stepwidth = diff + vI;
               }
           } else if (vI >= items) {
               var stepwidth = diff / items;
           } else {
               var c = this.getAddOnConf('carousel');
               var f = 0.1 * 2/3 * c.shownItems * diff/absDiff;
               var d = diff * ( vI / items);
               var stepwidth = absDiff > 0.1 ? f : d*8; 
           }
           return stepwidth;
        },
        

       calcSize: function (item) {
           var c = this.getAddOnConf('carousel');
           var a = c.width / c.height;
           //if (this.conf.verticalFlow) a = 1/a;
           var h = 3/c.shownItems / a;
           //if (this.conf.verticalFlow) h *= 2/3;
           var w = h * a;
           return {width: w, height: h};
       },

       calcCoordinates: function (item) {
           var rP = item.relativePosition;
           var c = this.getAddOnConf('carousel');
           var w = item.size.width;
           //if (this.conf.verticalFlow) w = item.size.height;
           var x = rP*w/2*(1 + c.space) *this.conf.scaleFactor - w* (c.shownItems % 2 ? 0 : 0.5) / 1.4;
           if (this.conf.verticalFlow) x *= 2*2/3;
           var y = 0;

           return {x: x, y: y};
       }
        
	
    }

});


$(document).ready(function() {
	

		$( "#preButton" ).button({
			text: false,
			icons: {
				primary: "ui-icon-circle-triangle-w"
			}
		});
		
		$( "#nextButton" ).button({
			text: false,
			icons: {
				primary: "ui-icon-circle-triangle-e"
			}
		});
		
		$('.ContentFlow').addClass('ui-corner-all ui-widget-content');
		
	});