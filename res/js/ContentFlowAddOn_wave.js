/*  ContentFlowAddOn_wave, version 1.0 
 *  (c) 2008 - 2010 Sebastian Kutsch
 *  <http://www.jacksasylum.eu/ContentFlow/>
 *
 *  This file is distributed under the terms of the MIT license.
 *  (see http://www.jacksasylum.eu/ContentFlow/LICENSE)
 */

new ContentFlowAddOn ('wave', {

    init: function() {
    },
    
    onloadInit: function (flow) {
                    //flow.container.style.height = "300px";
        var f = function () {
            if (flow.isInit && this.maxHeight > 0) {
                flow.container.style.height = "auto";
                flow.Flow.style.height = "300px";
                flow.resize();
            }
            else {
                window.setTimeout(f, 1000);
            }
        }
        f();
    },
	
	ContentFlowConf: {

        scaleFactorLandscape: "max",      // scale factor of landscape images ('max' := height= maxItemHeight)
        relativeItemPosition: "center", // align top/above, bottom/below, left, right, center of position coordinate
        visibleItems: 12,               // how man item are visible on each side (-1 := auto)
        endOpacity: 0.1,                  // opacity of last visible item on both sides

        /* ==================== calculations ==================== */


        calcSize: function (item) {
            var rPN = item.relativePositionNormed;
            var h = ( Math.abs( Math.cos(3/2*Math.PI * rPN) )/4 + 0.05 ) * ( 1 - rPN*rPN ) ;
            var w = h;
            return {width: w, height: h};
        },

        calcCoordinates: function (item) {
            var rP = item.relativePosition;
            var rPN = item.relativePositionNormed;
            rPN *= 0.9;
            var vI = this.conf.visibleItems

            var x = Math.sin(Math.PI/2*rPN);
            //var y = rPN/2;
            var y = Math.sin(Math.PI*rPN)*2/3;
            y *= Math.sin(item.position/vI);
            return {x: x, y: y};
        },
        
        calcRelativeItemPosition: function (item) {
            var x = 0;
            var y = 0;
            return {x: x, y: y};
        },

        calcZIndex: function (item) {
            return item.size.height*10;
        },

        calcOpacity: function (item) {
            var rPN = item.relativePositionNormed;
            return 0.4 + 2*item.size.height*(1-Math.abs(rPN));
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
		
	});