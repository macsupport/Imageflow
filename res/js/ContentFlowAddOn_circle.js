/*  ContentFlowAddOn_circle, version 1.0 
 *  (c) 2008 - 2010 Sebastian Kutsch
 *  <http://www.jacksasylum.eu/ContentFlow/>
 *
 *  This file is distributed under the terms of the MIT license.
 *  (see http://www.jacksasylum.eu/ContentFlow/LICENSE)
 */
new ContentFlowAddOn ('circle', {


    conf: {
        
        scrollSpeed: 0.2 
    },

    init: function() {
    },
    
    onloadInit: function (flow) {
    },

    afterContentFlowInit: function (flow) {
        var conf = flow.getAddOnConf('circle');

    },
	
	ContentFlowConf: {
        scaleFactorLandscape: "max",      // scale factor of landscape images ('max' := height= maxItemHeight)
        fixItemSize: true,
        relativeItemPosition: "center", // align top/above, bottom/below, left, right, center of position coordinate
        visibleItems: 8,               // how man item are visible on each side (-1 := auto)
        endOpacity: 0.5,                  // opacity of last visible item on both sides

        calcSize: function (item) {
            var rP = item.relativePosition;
            var h = Math.abs(rP) <= 0.5 ? 0.5 - Math.abs(rP)/2 : 0.25;
            var w = h;
            return {width: w, height: h};
        },

        calcCoordinates: function (item) {
            var rP = item.relativePosition;
            var rPN = item.relativePositionNormed;
            var vI = this.conf.visibleItems;
            var f = (rP/vI+0.5)*Math.PI;
            var x = Math.cos(f)*0.5;
            var y = Math.sin(f)+2*(1-Math.abs(rPN))+0.25 - (Math.abs(rP) <= 0.5 ? 2.5* (0.5-Math.abs(rP)) : 0) ;
            return {x: x, y: y};
        },
        
        calcZIndex: function (item) {
            return -Math.abs(item.relativePositionNormed);
        },

        calcFontSize: function (item) {
            return item.size;
        },

        calcOpacity: function (item) {
            return 1 - Math.abs(item.relativePositionNormed/2);
        }
	
    }

});

$(document).ready(function() {
	

		$( "#preButton" ).button({
			text: false,
			icons: {
				primary: "ui-icon-arrowreturnthick-1-n"
			}
		});
		
		$( "#nextButton" ).button({
			text: false,
			icons: {
				primary: "ui-icon-arrowreturnthick-1-s"
			}
		});
		
		
		
	});
