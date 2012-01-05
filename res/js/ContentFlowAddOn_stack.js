/*  ContentFlowAddOn_stack, version 1.0 
 *  (c) 2008 - 2010 Sebastian Kutsch
 *  <http://www.jacksasylum.eu/ContentFlow/>
 *
 *  This file is distributed under the terms of the MIT license.
 *  (see http://www.jacksasylum.eu/ContentFlow/LICENSE)
 */

new ContentFlowAddOn ('stack', {

    conf: {
       
        scrollSpeed: 0.2 
    },

    init: function() {
    },
    
    onloadInit: function (flow) {
    },

    afterContentFlowInit: function (flow) {
        var conf = flow.getAddOnConf('stack');
  
    },
	
	ContentFlowConf: {
        scaleFactorLandscape: 1.0,      // scale factor of landscape images ('max' := height= maxItemHeight)
        relativeItemPosition: "below center", // align top/above, bottom/below, left, right, center of position coordinate
        visibleItems: 20,               // how man item are visible on each side (-1 := auto)
        endOpacity: 0,                  // opacity of last visible item on both sides
        
        calcSize: function (item) {
            var rP = item.relativePosition;
            var rPN = item.relativePositionNormed;
            var h = (rP <= -0.9) ? 0 : (rP < 0 ?  1 - rP : 1 - rPN );
            var w = h;
            return {width: w, height: h};
        },

        calcCoordinates: function (item) {
            var rP = item.relativePosition;
            var rPN = item.relativePositionNormed;
            var x = 0;
            var y = -0.25- (rP >= 0 ? rPN/2 : -rP*0.75);
            return {x: x, y: y};
        },
        
        calcRelativeItemPosition: function (item) {
            var x = 0;
            var y = 1;
            return {x: x, y: y};
        },

        calcZIndex: function (item) {
            return -item.relativePositionNormed;
        },

        calcOpacity: function (item) {
            var rP = item.relativePosition;
            var rPN = item.relativePositionNormed;
            return rP <= -1 ? 0 : (rP < 0 ? 1 + rP : 1 - rPN*0.75);
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