$(document).ready(function() {
	$('form.iphorm').iPhorm();
	
	// Tooltip settings
	if ($.isFunction($.fn.qtip)) {
		$('.iphorm-tooltip').qtip({
			content: {
				text: false
			},
			style: {
				tip: 'leftMiddle',
				name: 'blue'
			},
			position: {
				corner: {
					target: 'rightMiddle',
					tooltip: 'leftMiddle'
				}
			}
		});
	}
	
	var subjectHtml = $('.subject-input-wrapper').html();
	
	$('#subject').live('change', function () {		
		if ($(this).val() == 'Other') {
			$('.subject-input-wrapper').empty();
			newHtml = $('<input name="subject" type="text" id="subject" value="" />');
			$('.subject-input-wrapper').html(newHtml);
			$cancelOther = $('<a>').click(function () {
				$('.subject-input-wrapper').empty();
				$('.subject-input-wrapper').append(subjectHtml);
				$(this).remove();
				return false;
			}).attr('href', '#').addClass('cancel-button').attr('title', 'Cancel');
			newHtml.after($cancelOther);
		}
	});
}); // End document ready

//Image preloader
var images = new Array(
	'contact-form/images/close.png',
	'contact-form/images/success.png'
);
var imageObjs = new Array();
for (var i in images) {
	imageObjs[i] = new Image();
	imageObjs[i].src = images[i];
}