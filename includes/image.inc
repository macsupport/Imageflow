<%

// Start thumbnail href

StringBuilder ithumbBuilder = new StringBuilder();
if(fileName.toLowerCase().endsWith(".swf") || fileName.toLowerCase().endsWith(".flv") || fileName.toLowerCase().endsWith(".mp4") || !locVideoLink.equals("")) {
	


	if(fileName.toLowerCase().endsWith(".swf")) {
		ithumbBuilder.append("<div class='" + item + "' href='" + fileName + "\"");
	
		ithumbBuilder.append("}");
	}
	else if(fileName.toLowerCase().endsWith(".flv") || fileName.toLowerCase().endsWith(".mp4")) {
		isFLV = true;
		ithumbBuilder.append("<div class='" + item + "' href='player.swf'\", ");
		
		ithumbBuilder.append("}");
	}
	
}



// Close href

ithumbBuilder.append("</div>");
out.print(ithumbBuilder.toString());
%>