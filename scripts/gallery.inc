<ja:fileiterator>
<% if(fileName.toLowerCase().endsWith(".swf") || fileName.toLowerCase().endsWith(".flv") ||fileName.toLowerCase().endsWith(".m4a") ||fileName.toLowerCase().endsWith(".mp4") ||fileName.toLowerCase().endsWith(".m4p")) includesVideo = true; %>
		
<ja:if exists="iconPath"><div class="item" href="${closeupPath}"><img class="content <ja:if test="${roundBorders}" value="true">rounded</ja:if> <ja:if test="${lightBoxSelectionC}" value="true">clearbox</ja:if><ja:if test="${lightBoxSelectionE}" value="true">lightbox</ja:if><ja:if test="${lightBoxSelectionY}" value="true">yoxview</ja:if>" <ja:if test="${lightBoxSelectionP}" value="true">rel="prettyPhoto"</ja:if> src="<ja:if exists="iconPath">${iconPath}</ja:if><ja:else>${thumbPath}</ja:else>" alt="${label}"/><ja:if test="${showCFCaption}" value="true"><div class="caption">${label}</div></ja:if></div></ja:if>
<ja:else><ja:if exists="folder"></ja:if>
<ja:else><ja:if test="${addOns}" value="gallery2"><div class="item" href="${closeupPath}" > <img class="content" title="${label}" src="${closeupPath}" <ja:if test="${showComment}" value="true">alt="${comment}"</ja:if><ja:if test="${showCFCaption}" value="true"><div class="caption">${label} <ja:if exists="folder"></ja:if>
<ja:else>
<ul class="icon">
          <ja:if test="${showImageFavorites}" value="true"><li class="ui-state-default ui-corner-all" title="Select as Favorite"> <div class="fav ui-icon ui-icon-heart"></div> </li></ja:if>
          <ja:if test="${showImageDescription}" value="true"><li class="ui-state-default ui-corner-all" title="More Info"> <div class="description ui-icon ui-icon-comment"><div class="description_holder" style="display:none">${label}<br />${imageDescription}</div></div> </li></ja:if>
 <ja:if test="${showExif}" value="true"><ja:if test="${includesVideo}" value="true"></ja:if><ja:else><ja:if test="${showExif}" value="true"><li class="ui-state-default ui-corner-all" title="EXIF Info"> <div class="tooltip-sticky ui-icon ui-icon-zoomin"><div class="exif_holder" style="display:none"><div class='exif_popup'><br />Camera Make: ${cameraMake}<br />Camera Model: ${cameraModel}<br />Aperture: ${aperture}<br />Shutter: ${exposureTime}<br />Focal Length: ${focalLength}<br /> ISO: ${isoEquivalent}<br /> Flash: ${flash}</div></div></div></li></ja:if></ja:else></ja:if> 
 <ja:if test="${showCart}" value="true"><ja:if test="${includesVideo}" value="true"></ja:if><ja:if exists="folder"></ja:if>
 <ja:else><li class="ui-state-default ui-corner-all" title="Add to Cart"><div class="cart_button ui-icon ui-icon-cart">
 <div class="cart_holder" style="display:none"><div class="simpleCart_shelfItem">
<span class="item_thumb"><img src='${thumbPath}' height='25px' width='25px' alt="${label}"/></span>
<h5 class="item_name">${label}</h5><br />
<span class="item_size">${item_Size}</span><br />
<span class="item_price">${item_price}</span><br />
<input type="text" class="item_quantity" value="1"/>
 <a href="#" class="add_cart" onclick="simpleCart.add('thumb=${thumbPath}','name=${label}', 'size=${item_Size}','price=${item_price}','quantity=1');">Add to Cart</a><br /> 
<div class="item_added" style="display:none">Item Added to Cart</div>
</div></div></div> </li></ja:else></ja:if>
  <ja:if test="${showImagePrint}" value="true"><li class="ui-state-default ui-corner-all" title="Print"><div class="printImage ui-icon ui-icon-print" title="Print Image"></div></li></ja:if>
        </ul></ja:else></div></ja:if></ja:if>
		<ja:else><div class="item<ja:if test="${includesVideo}" value="true"><ja:if test="${lightBoxSelectionC}" value="true"> colorbox_video</ja:if><ja:if test="${lightBoxSelectionE}" value="true"> lightbox</ja:if><ja:if test="${lightBoxSelectionY}" value="true"> yoxview</ja:if></ja:if>" <ja:if test="${lightBoxSelectionP}" value="true">rel="prettyPhoto"</ja:if> <ja:if test="${lightBoxSelectionCL}" value="true">rel="clearbox[height=500,,height=500]"</ja:if> title="${label}   ${comment}" href="<ja:if exists="${videoLink}">${videoLink}</ja:if><ja:else>${closeupPath}</ja:else><ja:if exists="${includesVideo}"><ja:if test="${lightBoxSelectionE}" value="true">?lightbox[iframe]=true&lightbox[width]=800&lightbox[height]=600</ja:if><ja:if test="${lightBoxSelectionP}" value="true">?iframe=true&width=80%&height=80%</ja:if></ja:if>" ><img class="content"  alt="${label}   ${comment}" src="${closeupPath}" alt="${comment}"/><div class="caption"><ja:if test="${showCFCaption}" value="true">${label}</ja:if><ja:if exists="folder"></ja:if><ja:else><ul class="icon">
          
          <ja:if test="${showImageDescription}" value="true"><li class="ui-state-default ui-corner-all" title="More Info"> <div class="description ui-icon ui-icon-comment"><div class="description_holder" style="display:none">${label}<br />${imageDescription}</div></div> </li></ja:if>
 <ja:if test="${showExif}" value="true"><ja:if test="${includesVideo}" value="true"></ja:if><ja:else><ja:if test="${showExif}" value="true"><li class="ui-state-default ui-corner-all" title="EXIF Info"> <div class="tooltip-sticky ui-icon ui-icon-zoomin"><div class="exif_holder" style="display:none"><div class='exif_popup'><br />Camera Make: ${cameraMake}<br />Camera Model: ${cameraModel}<br />Aperture: ${aperture}<br />Shutter: ${exposureTime}<br />Focal Length: ${focalLength}<br /> ISO: ${isoEquivalent}<br /> Flash: ${flash}</div></div></div></li></ja:if></ja:else></ja:if> 
 <ja:if test="${showCart}" value="true"><ja:if test="${includesVideo}" value="true"></ja:if><ja:if exists="folder"></ja:if><ja:else><li class="ui-state-default ui-corner-all" title="Add to Cart"><div class="cart_button ui-icon ui-icon-cart">
 <div class="cart_holder" style="display:none"><div class="simpleCart_shelfItem">
<span class="item_thumb"><img src='${thumbPath}' height='25px' width='25px' alt="${label}"/></span>
<h5 class="item_name">${label}</h5><br />
<span class="item_size">${item_Size}</span><br />
<span class="item_price">${item_price}</span><br />
<input type="text" class="item_quantity" value="1"/>
 <a href="#" class="add_cart" onclick="simpleCart.add('thumb=${thumbPath}','name=${label}', 'size=${item_Size}','price=${item_price}','quantity=1');">Add to Cart</a><br /> 
<div class="item_added" style="display:none">Item Added to Cart</div>
</div></div></div> </li></ja:else></ja:if>
          <ja:if test="${showImagePrint}" value="true"><li class="ui-state-default ui-corner-all" title="Print"><div class="printImage ui-icon ui-icon-print" title="Print Image"></div></li></ja:if>
        </ul></ja:else></ja:else></div></ja:else></div></ja:else></ja:fileiterator>

 <ja:if test="${showCart}" value="true"> <div id="cart" class="ui-widget-content ui-corner-all" style="display:none"> 
            <div class="simpleCart_items"></div>
            <div id="cartTotal"> SubTotal: <span class="simpleCart_total"></span> <br />
              Tax: <span class="simpleCart_taxCost"></span> <br />
              Shipping: <span class="simpleCart_shippingCost"></span> <br />
              -----------------------------<br />
              <strong>Total: </strong><span class="simpleCart_total"></span> </div>
            <a href="javascript:;" class="simpleCart_empty fg-button ui-state-default ui-corner-all">Empty Cart</a>
			<a href="javascript:;" class="simpleCart_checkout fg-button ui-state-default fg-button-icon-right ui-corner-all"><span class="ui-icon ui-icon-triangle-1-e"></span>Checkout</a>
</div></ja:if>









