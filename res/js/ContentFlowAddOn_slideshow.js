/*  ContentFlowAddOn_slideshow
 * DrMikey
 *  <http://www.jacksasylum.eu/ContentFlow/>
 *
 *  This file is distributed under the terms of the MIT license.
 *  (see http://www.jacksasylum.eu/ContentFlow/LICENSE)
 */



$(function() {
		$( ".slider" ).slider();
            
	});
  new ContentFlowAddOn ('slideshow', {

    conf: {
        showControlls: true,
        duration: 2500,
        startOnLoad: false
    },

   
    
    
    onloadInit: function (flow) {
        this._slideshow_timer = null;
        var conf = flow.getAddOnConf('slideshow');

        /* run slideshow */
        flow._startSlideshow = function () {
            var dur = this._slideshow_duration;
            var mn = function () {
                this.moveTo('next');
                this._slideshow_stoped = false;
            }.bind(this);
            window.clearTimeout(this._slideshow_timer);
            this._slideshow_timer = window.setTimeout( mn, dur);
        };

        /* pause slideshow */
        flow._stopSlideshow = function () {
            window.clearTimeout(this._slideshow_timer);
            this._slideshow_stoped = true;
        }; 

        /* set the speed of the slideshow */
        flow._setSlideshowSpeed = function (dur) {
            this._slideshow_duration = dur;
        };

        
        
    
       
         /* toggle slideshow on and off */
        flow.toggleSlideshow = function (force) {

            if (this._slideshow_locked) var t = "stop";
            else var t = "play";
            if (force) {
                switch (force) {
                case "stop":
                case "play":
                    var t = force;
                    break;
                }
            }

            switch (t) {
                case "stop":
                    
                    this._slideshow_locked = false;
                    this._startSlideshow();
                    break;

                case "play":
                   
                    this._slideshow_locked = true;
                    this._stopSlideshow();
                    break;
            }
        };
        /* add spacebar key event */
        flow.conf.keys[32] = function () { this.toggleSlideshow() };

       
        var dur = conf.duration;
        flow._setSlideshowSpeed(dur);


        var status = conf.startOnLoad;
        flow._slideshow_stoped = status;
        flow._slideshow_locked = status;

        flow.toggleSlideshow();
		

    },
	
    /*
     * ContentFlow configuration.
     * Will overwrite the default configuration (or configuration of previously loaded AddOns).
     * For a detailed explanation of each value take a look at the documentation.
     */
	ContentFlowConf: {
        circularFlow: true,             // should the flow wrap around at begging and end?


        onInit: function () {
        },

        /*
         * called after the inactive item is clicked.
         */
        onclickInactiveItem : function (item) {
            this._stopSlideshow();
          $('.flow').click(function () {
       return false;
	  
});
			
        },

        /*
         * called when an item becomes active.
         */
        onMakeActive: function (item) {
            if (this._slideshow_stoped || this._slideshow_locked) return;
            this._startSlideshow();
        },
        
        /*
         * called when the target item/position is reached
         */
        onReachTarget: function(item) {
            if (this._slideshow_stoped && !this._slideshow_locked) {
                this._startSlideshow();
            }
        },

        /*
         * called when a new target is set
         */
        onMoveTo: function(item) {
            this._stopSlideshow();
        }
    }
}); 

$(function(){
            $('button .ui-state-default').hover(
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
		});
		
		$( "#slow_slide" ).button({
			text: false,
			icons: {
				primary: "ui-icon-seek-first"
			}
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
			$( this ).toggleSlideshow();
		});
        });

