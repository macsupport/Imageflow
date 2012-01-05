/*  ContentFlowAddOn_shadowbox, version 1.0 
 *  (c) 2008 - 20010 Mike Sozanski
 *  <http://www.jalbumskins.com/flow/>
 *  (c) 2008 - 20010 Sebastian Kutsch
 *  This file is distributed under the terms of the MIT license.
 *  (see http://www.jacksasylum.eu/ContentFlow/LICENSE)
 *Shadowbox is licensed under the terms of the Shadowbox.js License. 
 *This license grants personal, non-commercial users the right to use Shadowbox without paying a fee. 
 *It also provides an option for users who wish to use Shadowbox for commercial purposes.
 *http://shadowbox-js.com/LICENSE
 *For confiuration options can be set in shadowbox_config.js.
 *For more detailed information go to: http://shadowbox-js.com/options.html
 */

new ContentFlowAddOn ('shadowbox', {

    init: function () {
        var shadowboxBaseDir = this.scriptpath+"shadowbox/";
		var shadowboxCSSBaseDir = shadowboxBaseDir;
      var shadowboxImageBaseDir = shadowboxBaseDir+"/";
      this.addStylesheet(shadowboxBaseDir+"shadowbox.css");
      this.addScript(shadowboxBaseDir+"shadowbox.js");
	  this.addScript(shadowboxBaseDir+"shadowbox_config.js");
     
    },
	
 ContentFlowConf: {
        onclickInactiveItem: function (item) {},

        onclickActiveItem: function (item) {
            var content = item.content;
            if (content.getAttribute('src')) {
                if (item.content.getAttribute('href')) {
                    item.element.href = item.content.getAttribute('href');
                }
                else if (! item.element.getAttribute('href')) {
                    item.element.href = content.getAttribute('src');
                }
                if (item.caption)
                    item.element.setAttribute ('title', item.caption.innerHTML);
			   if ($CF (item.element).hasClassName('active')) 
			Shadowbox.init();
			
            return Shadowbox.open(item.element, {
								  
     
    });
            
			
			
         }
      }
   }
});


 

