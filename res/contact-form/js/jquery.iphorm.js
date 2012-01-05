;(function($) {
	$.fn.iPhorm = function(options) {
		return $(this).each(function() {
			var $form = $(this);
			$form.submit(function(event) {
				// Prevent the browser submitting the form normally
				event.preventDefault();
				// Bind the form submit to use the ajax form plugin
				$form.ajaxSubmit({
					async: false,
					dataType: 'json',
					success: function(response) {
						// Check if the form submission was successful
						if (response.type == 'success') {
							// Hide any tooltips
							$('.qtip').hide();
							// Fade out the form
							$('.iphorm-container', $form).fadeOut('slow', function() {
								// Then fade in the success message
								$('.iphorm-message', $form).hide().html(response.data).fadeIn('slow');
							});
						} else if (response.type == 'message') {
							// Remove any previous errors from the DOM
							$('.form-errors', $form).remove();
							// Display the message
							$('.iphorm-message', $form).hide().html(response.data).fadeIn('slow');
						} else if (response.type == 'error') {
							// Remove any previous errors from the DOM
							$('.form-errors', $form).remove();
							// Go through each element containing errors					
							$.each(response.data, function(index, info) {
								// If there are errors for this element
								if (info.errors != undefined && info.errors.length > 0) {
									// Save a reference to this element									
									$element = $("[name='" + index + "']", $form);
									// If the returned element exists
									if ($element.size()) {
										// Create a blank error list
										var $errorList = $('<ul class="form-errors"></ul>');
										// Go through each error for this field
										$.each(info.errors, function(i, e) {
											// Append the error to the list as a list item
											$errorList.append('<li>' + e + '</li>');
											return false; // Just display one error per element
										});
										// Add the error list after the element's wrapper
										$element.last().parent().after($errorList);
									}
								}
							});
							// Fade all errors in
							$('.form-errors').fadeIn(1000);			
						}
					}
				}); // End ajaxSubmit()
			}); // End this.live()
		});
	};
})(jQuery);