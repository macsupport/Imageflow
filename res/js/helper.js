select = {
    cached : {},
    cache  : function(){
        for(selector in select){
            if (selector != 'cache' && selector != 'cached'){
                select.cached[selector] = $(select[selector]);
            }
        }
    },
    // Begin selector repository
    galleryImgs         : '#flow-container .item',
    currentImg          : '.item.active .content'
};

var flow = new ContentFlow('flow', { 
        
    onReachTarget : function(){
        if (global.isYoxOpen)
            initYox();
    },
    
    onclickActiveItem : function(){
        initYox();
    },
	onclickInactiveItem: function (item) {
		 
          $('a.item').click(function (e) {
       e.preventDefault();
	  
});
	
			},
    
    keys : {}
} ) ;

global = {
    canChangeImage : true,
    isYoxOpen : false
};

$(function(){
    init();
});

function init(){
    select.cache();
    
    $(document)
        .keydown(nav)
        .keyup(function(){
            global.canChangeImage = true;
        });
        
    $('.item').click(function(){
        /*if ($(this).hasClass('active')){
            initYox();
        }/**/
    });
}

var nav = function(evt){
    
    if (!global.canChangeImage)
        return;

    switch(evt.keyCode){
        case 37: // left
            flow.moveTo('previous');
            updateCbox();
        break;
        
        case 39: // right
            flow.moveTo('next');
            updateCbox();
        break;
        
        default:
            
        break;
    }
    
    global.canChangeImage = false;
}

function updateCbox(){
    if (global.isYoxOpen){
        initYox();
    }
}

function initYox(){
    var img = $(select.currentImg).attr('src');

    $.yoxview({ 
        href : img,
        onComplete : function(){
            global.isYoxOpen = true;
        },
        
        onClosed : function(){
            global.isYoxOpen = false;
        }
    })
}

function log(text, paramArray){
    try{
        //text = text.toString(); // Cast it to a String
    
        // Will work in good browsers
        if (!!paramArray && isArray(paramArray)){
            for (var i = 0; i < paramArray.length; i++){
                text = text.replace( ('{' + i + '}') , paramArray[i].toString());
            }
        }
                
        console.log(text);
    }catch(ex){
        // Fallback functionality for IE
        alert(text);
    }
}

function isArray(x){
    return ( !!x[0] && ( (typeof x) != 'string') );
}