
<%boolean mainIsoPage = (totalIndexes == void || indexNum == 1);%>
   <div id="styleSwitcher" class="ui-widget-content" style="display:none;">
  <button id="switcher_btn" title="Toggle Menu"></button>
  <div id="top_nav" class="nav_down bar_nav grid_16 ui-widget-header ui-corner-all"> 
    <ul class="clearfix">
      <li><span class="ui-icon ui-icon-home"></span><a  href="${rootPath}/${firstIndexPage}"> Home</a>
	 <ul class="ui-widget-header"> 
	<ja:if test="${level}" not value="0"><li><a href="${parentIndexPage}">Previous Page</a></li></ja:if>
	<ja:fileiterator><ja:if exists="folder"><li><a href="${closeupPath}">${label}</a></li></ja:if></ja:fileiterator>	
</ul>	  	   </li> 
       <ja:if test="${enableAbout}" value="true"><li ><span class="ui-icon ui-icon-info"></span><a <ja:if test="${lightBoxSelectionC}" value="true">class="colorbox_about"</ja:if><ja:if test="${lightBoxSelectionE}" value="true">class="lightbox"</ja:if><ja:if test="${lightBoxSelectionCL}" value="true">rel="clearbox[width=900,,height=700]"</ja:if><ja:if test="${lightBoxSelectionP}" value="true">rel="prettyPhoto"</ja:if><ja:if test="${lightBoxSelectionEZ}" value="true">rel="lightbox"</ja:if> href="${rootPath}/about.html<ja:if test="${lightBoxSelectionE}" value="true">?lightbox[iframe]=true&lightbox[width]=750&lightbox[height]=600</ja:if><ja:if test="${lightBoxSelectionP}" value="true">?iframe=true&width=80%&height=80%</ja:if>"  title="About">About</a> </li></ja:if>
<ja:if test="${enableContact}" value="true"> <li ><span class="ui-icon ui-icon-mail-closed"></span><a <ja:if test="${lightBoxSelectionC}" value="true">class="colorbox_contact"</ja:if><ja:if test="${lightBoxSelectionE}" value="true">class="lightbox"</ja:if> <ja:if test="${lightBoxSelectionCL}" value="true">rel="clearbox[width=900,,height=700]"</ja:if><ja:if test="${lightBoxSelectionP}" value="true">rel="prettyPhoto"</ja:if><ja:if test="${lightBoxSelectionEZ}" value="true">rel="lightbox"</ja:if>  href="${rootPath}/res/contact.php<ja:if test="${lightBoxSelectionE}" value="true">?lightbox[iframe]=true&lightbox[width]=750&lightbox[height]=600</ja:if><ja:if test="${lightBoxSelectionP}" value="true">?iframe=true&width=60%&height=80%</ja:if>"  target="yoxview" title="Contact"> Contact</a> </li></ja:if>
      <ja:if test="${showCart}" value="true"><li ><span class="ui-icon ui-icon-cart"></span><a id="show_basket" href="#"  title="Show Cart">Cart</a></li></ja:if>
     
	  <ja:if test="${showSearch}" value="true"><li ><span class="ui-icon ui-icon-search"></span><a id="show_search2" href="#"  title="Show Search">Search</a></li></ja:if>
	  	  <li><span class="ui-icon ui-icon-help"></span><a  class="<ja:if test="${lightBoxSelectionC}" value="true">colorbox_help</ja:if><ja:if test="${lightBoxSelectionE}" value="true">lightbox</ja:if><ja:if test="${lightBoxSelectionY}" value="true">yoxview</ja:if>" <ja:if test="${lightBoxSelectionP}" value="true">rel="prettyPhoto"</ja:if><ja:if test="${lightBoxSelectionEZ}" value="true">rel="lightbox"</ja:if>  href="${resPath}/info.html<ja:if test="${lightBoxSelectionE}" value="true">?lightbox[iframe]=true&lightbox[width]=800&lightbox[height]=600</ja:if><ja:if test="${lightBoxSelectionP}" value="true">?iframe=true&width=80%&height=80%</ja:if>" title="Show Help"></a> </li>
	   <ja:if test="${showSocial}" value="true"><ja:if test="${socialSeparate}" value="true"></ja:if><ja:else><li class="send_right"><a class="addthis_counter addthis_pill_style"></a></li></ja:else></ja:if>
    </ul>
  </div>
</div>
