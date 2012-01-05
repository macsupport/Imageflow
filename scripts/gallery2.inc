<ja:fileiterator>

<% if(fileName.toLowerCase().endsWith(".swf") || fileName.toLowerCase().endsWith(".flv") ||fileName.toLowerCase().endsWith(".m4a") ||fileName.toLowerCase().endsWith(".mp4") ||fileName.toLowerCase().endsWith(".m4p") ||fileName.toLowerCase().endsWith(".mov")) includesVideo = true; %>
		
		
<div class="item<ja:if test="${includesVideo}" value="true"><ja:if test="${lightBoxSelectionC}" value="true"> colorbox_video</ja:if><ja:if test="${lightBoxSelectionE}" value="true"> lightbox</ja:if><ja:if test="${lightBoxSelectionY}" value="true"> yoxview</ja:if></ja:if>" <ja:if test="${lightBoxSelectionP}" value="true">rel="prettyPhoto"</ja:if> <ja:if test="${lightBoxSelectionCL}" value="true">rel="clearbox[height=500,,height=500]"</ja:if> title="${label}   ${comment}" href="<ja:if exists="${videoLink}">${videoLink}</ja:if><ja:else>${closeupPath}</ja:else>" ><img class="content"  alt="${label}  ${comment}" src="<ja:if exists="iconPath">${iconPath}</ja:if><ja:else>${thumbPath}</ja:else>"/>
<div class="caption">
<ja:if test="${showCFCaption}" value="true">${label}</ja:if>
<ja:if exists="folder"></ja:if>

<ja:else>
		
<ul class="icon">
<ja:if test="${showImageDescription}" value="true"><li class="ui-state-default ui-corner-all" title="More Info"> <div class="description ui-icon ui-icon-comment"><div class="description_holder" style="display:none">${label}<br />${imageDescription}</div></div> </li></ja:if>
<ja:if test="${showExif}" value="true"><ja:if test="${includesVideo}" value="true"></ja:if><ja:else><li class="ui-state-default ui-corner-all" title="EXIF Info"> <div class="tooltip-sticky ui-icon ui-icon-zoomin"><div class="exif_holder" style="display:none"><div class='exif_popup'><br />Camera Make: ${cameraMake}<br />Camera Model: ${cameraModel}<br />Aperture: ${aperture}<br />Shutter: ${exposureTime}<br />Focal Length: ${focalLength}<br /> ISO: ${isoEquivalent}<br /> Flash: ${flash}</div></div></div></li></ja:else></ja:if>
  
 <ja:if test="${showCart}" value="true">
 <ja:if test="${includesVideo}" value="true"></ja:if>
 <ja:if exists="folder"></ja:if>
 <ja:else>
 <li class="ui-state-default ui-corner-all" title="Add to Cart"><div class="cart_button ui-icon ui-icon-cart">
 <div class="cart_holder" style="display:none"><div class="simpleCart_shelfItem">
<span class="item_thumb"><img src='${thumbPath}' height='25px' width='25px' alt="${label}"/></span>
<h5 class="item_name">${label}</h5><br />
<span class="item_size">${item_Size}</span><br />
<span class="item_price">${item_price}</span><br />
<input type="text" class="item_quantity" value="1"/>
 <a href="#" class="add_cart" onclick="simpleCart.add('thumb=${thumbPath}','name=${label}', 'size=${item_Size}','price=${item_price}','quantity=1');">Add to Cart</a><br /> 
<div class="item_added" style="display:none">Item Added to Cart</div>
</div></div></div> </li>
</ja:else>
</ja:if>

 <ja:if test="${showImagePrint}" value="true"><li class="ui-state-default ui-corner-all" title="Print"><div class="printImage ui-icon ui-icon-print" title="Print Image"></div></li></ja:if>
</ul>
		
</ja:else>
		
</div>
</div>
</ja:fileiterator>

 <ja:if test="${showCart}" value="true"> <div id="cart" class="ui-widget-content ui-corner-all" style="display:none"> 
            <div class="simpleCart_items"></div>
            <div id="cartTotal"> SubTotal: <span class="simpleCart_total"></span> <br />
              Tax: <span class="simpleCart_taxCost"></span> <br />
              Shipping: <span class="simpleCart_shippingCost"></span> <br />
              -----------------------------<br />
              <strong>Total: </strong><span class="simpleCart_total"></span> </div>
            <a href="javascript:;" class="simpleCart_empty fg-button ui-state-default ui-corner-all">Empty Cart</a>
			<a href="javascript:;" class="simpleCart_checkout fg-button ui-state-default fg-button-icon-right ui-corner-all"><span class="ui-icon ui-icon-triangle-1-e"></span>Checkout</a>
</div>
</ja:if>









