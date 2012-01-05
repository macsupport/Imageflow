<ja:rowiterator><ja:coliterator>
<% if(fileName.toLowerCase().endsWith(".swf") || fileName.toLowerCase().endsWith(".flv") || fileName.toLowerCase().endsWith(".mp4")) includesVideo = true; %>		
<ja:if exists="iconPath">
<div class="item" href="${closeupPath}"><img class="content <ja:if test="${lightBoxSelectionE}" value="true">lightbox</ja:if><ja:if test="${lightBoxSelectionY}" value="true">yoxview</ja:if>" <ja:if test="${lightBoxSelectionP}" value="true">rel="prettyPhoto</ja:if> src="<ja:if exists="iconPath">${iconPath}</ja:if><ja:else>${thumbPath}</ja:else>" alt="${label}"/><ja:if test="${showCFCaption}" value="true"><div class="caption">${label}</div></ja:if></div></ja:if><ja:else>
<ja:if exists="folder"><div class="item" title="${label}"><img class="content" src="<ja:if exists="iconPath">${iconPath}</ja:if><ja:else>${thumbPath}</ja:else>" onclick="location.href='${closeupPath}';" <ja:if test="${showComment}" value="true">alt="${comment}"</ja:if><ja:if test="${showLabel}" value="true">title="${label}"</ja:if> /><ja:if test="${showCFCaption}" value="true"><img src="${resPath}/images/folder_image.png" width="16" height="16" alt="folder" /><div class="caption"> ${label} Folder</ja:if></div></div></ja:if>
<ja:else><ja:if test="${addOns}" value="gallery2"><div class="item" href="${closeupPath}" > <img class="content" title="${label}" src="${closeupPath}" <ja:if test="${showComment}" value="true">alt="${comment}"</ja:if><ja:if test="${showCFCaption}" value="true"><div class="caption">${label} <ja:if exists="folder"></ja:if>
<ja:else><ul class="icon">
          <ja:if test="${showImageFavorites}" value="true"><li class="ui-state-default ui-corner-all" title="Select as Favorite"> <div class="fav ui-icon ui-icon-heart"></div> </li></ja:if>
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
        </ul></ja:else></div></ja:if></ja:if>
		<ja:else><div class="item" title="${label}   ${comment}" href="${closeupPath}" ><img class="content"  alt="${label}   ${comment}" src="${closeupPath}" alt="${comment}"/><ja:if test="${showCFCaption}" value="true"><div class="caption">${label}</ja:if><ja:if exists="folder"></ja:if><ja:else><ul class="icon">
          <ja:if test="${showImageFavorites}" value="true"><li class="ui-state-default ui-corner-all" title="Select as Favorite"> <div class="fav ui-icon ui-icon-heart"></div> </li></ja:if>
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
        </ul></ja:else></ja:else></div></ja:else></div></ja:else>
		</ja:coliterator></ja:rowiterator>











