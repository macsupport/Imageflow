<% boolean vFirstIndexPage = (level == 0 && (totalIndexes == void || indexNum == 1)); %>
	 <%
boolean mainIsoPage = (totalIndexes == void || indexNum == 1);
%>					

<ul id="stickyCP" class="sticklr ui-widget-content ui-corner-all sorting"  style="display:none;">
      <ja:if test="${showHome}" value="true"><li class="ui-state-default"><a title="Home Page"  href="<ja:if test="${mainIsoPage}">index.html</ja:if>"><span class="ui-icon ui-icon-home"></span></a>
	  <ul>
	  <ja:if test="${level}" not value="0"><li><a href="${rootPath}/${firstIndexPage}">Home Page</a></li></ja:if>
	 <ja:if test="${level}" not value="0"><li><a href="${parentIndexPage}">Previous Page</a></li></ja:if>
	  </ul>
	  </li></ja:if>
	   <ja:if test="${showSearch}" value="true"><li class="ui-state-default"><a id="show_search2" title="Search"><span class="ui-icon ui-icon-search"></span></a></li></ja:if>
	  <ja:if test="${enableAbout}" value="true"><li class="ui-state-default"><a <ja:if test="${lightBoxSelectionC}" value="true">class="colorbox_about"</ja:if><ja:if test="${lightBoxSelectionE}" value="true">class="lightbox"</ja:if><ja:if test="${lightBoxSelectionCL}" value="true">rel="clearbox[width=900,,height=700]"</ja:if><ja:if test="${lightBoxSelectionP}" value="true">rel="prettyPhoto"</ja:if><ja:if test="${lightBoxSelectionEZ}" value="true">rel="lightbox"</ja:if> href="${rootPath}/about.html<ja:if test="${lightBoxSelectionE}" value="true">?lightbox[iframe]=true&lightbox[width]=750&lightbox[height]=600</ja:if><ja:if test="${lightBoxSelectionP}" value="true">?iframe=true&width=85%&height=85%</ja:if>"  title="About"><span class="ui-icon ui-icon-info"></span></a> </li></ja:if>
	  
     <ja:if test="${enableContact}" value="true"> <li class="ui-state-default"><a <ja:if test="${lightBoxSelectionC}" value="true">class="colorbox_contact"</ja:if><ja:if test="${lightBoxSelectionE}" value="true">class="lightbox"</ja:if> <ja:if test="${lightBoxSelectionCL}" value="true">rel="clearbox[width=900,,height=700]"</ja:if><ja:if test="${lightBoxSelectionP}" value="true">rel="prettyPhoto"</ja:if><ja:if test="${lightBoxSelectionEZ}" value="true">rel="lightbox"</ja:if>  href="${rootPath}/res/contact.php<ja:if test="${lightBoxSelectionE}" value="true">?lightbox[iframe]=true&lightbox[width]=750&lightbox[height]=600</ja:if><ja:if test="${lightBoxSelectionP}" value="true">?iframe=true&width=70%&height=80%</ja:if>"  target="yoxview" title="Contact"><span class="ui-icon ui-icon-mail-closed"></span></a> </li></ja:if>
	
    <ja:if test="${showCart}" value="true"> <li class="ui-state-default"><a  id="show_basket" href="#" title="Show Shopping Cart"><span class="ui-icon ui-icon-cart"></span></a></li></ja:if>
	 
	  <ja:if test="${showHelp}" value="true"><li class="ui-state-default"><a  class="<ja:if test="${lightBoxSelectionC}" value="true">colorbox_help</ja:if><ja:if test="${lightBoxSelectionE}" value="true">lightbox</ja:if><ja:if test="${lightBoxSelectionY}" value="true">yoxview</ja:if>" <ja:if test="${lightBoxSelectionP}" value="true">rel="prettyPhoto"</ja:if><ja:if test="${lightBoxSelectionEZ}" value="true">rel="lightbox"</ja:if>  href="${resPath}/info.html<ja:if test="${lightBoxSelectionE}" value="true">?lightbox[iframe]=true&lightbox[width]=800&lightbox[height]=600</ja:if><ja:if test="${lightBoxSelectionP}" value="true">?iframe=true&width=80%&height=80%</ja:if>" title="Show Help"><span class="ui-icon ui-icon-help"></span></a> </li></ja:if>
	  <ja:if test="${showSocial}" value="true"><ja:if test="${socialSeparate}" value="true"></ja:if><ja:else><li class="ui-state-default"><a class="addthis_button" href="http://www.addthis.com/bookmark.php">
        <img src="http://s7.addthis.com/static/btn/sm-plus.gif" 
        width="16" height="16" border="0" alt="Share" /></a></li></ja:else></ja:if>
    </ul>
