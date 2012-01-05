/*
addPrintLink function by Roger Johansson, www.456bereastreet.com
*/
var addPrintLink = {
	init:function(sTargetEl,sLinkText) {
		if (!document.getElementById || !document.createTextNode) {return;} // Check for DOM support
		if (!document.getElementById(sTargetEl)) {return;} // Check that the target element actually exists
		if (!window.print) {return;} // Check that the browser supports window.print
		var oTarget = document.getElementById(sTargetEl);
		var oLink = document.createElement('a');
		oLink.id = 'print-link'; // Give the link an id to allow styling
		oLink.href = '#'; // Make the link focusable for keyboard users
		oLink.appendChild(document.createTextNode(sLinkText));
		oLink.onclick = function() {window.print(); return false;} // Return false prevents the browser from following the link and jumping to the top of the page after printing
		oTarget.appendChild(oLink);
	},
/*
addEvent function included here for portability. Replace with your own addEvent function if you use one.
*/
/* addEvent function from http://www.quirksmode.org/blog/archives/2005/10/_and_the_winner_1.html */
	addEvent:function(obj, type, fn) {
		if (obj.addEventListener)
			obj.addEventListener(type, fn, false);
		else if (obj.attachEvent) {
			obj["e"+type+fn] = fn;
			obj[type+fn] = function() {obj["e"+type+fn](window.event);}
			obj.attachEvent("on"+type, obj[type+fn]);
		}
	}
};
addPrintLink.addEvent(window, 'load', function(){addPrintLink.init('article','Print this page');});