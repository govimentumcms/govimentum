jQuery(document).ready(function(){
	var nav = jQuery('#menu-principal');
	var nav2 = jQuery('#block-menu-menu-transparencia-segundo-nivel');
    
    jQuery(window).scroll(function () {
        if (jQuery(this).scrollTop() > 136) {
            nav.addClass("f-nav");
            nav2.addClass("f-nav2");
        } else {
            nav.removeClass("f-nav");
            nav2.removeClass("f-nav2");
        }
    });
    jQuery('#toggles').click(function(){
        if( jQuery(this).hasClass("open")){
             jQuery('.encabezado-c-1').removeClass("open");
            jQuery('.custom-toggle').removeClass("x");
            jQuery('#toggles').removeClass("open");
        }else{
            jQuery('.encabezado-c-1').addClass("open");
            jQuery('.custom-toggle').addClass("x");
            jQuery('#toggles').addClass("open");
        }
    });
});

// Implementa funcionalidad boton ir hacia arriba

jQuery(document).ready(function($) {


        $(window).scroll(function(){
                        //valida que exista un desplazamiento
                        if ($(this).scrollTop() > 100) {
                                $('.scrollToTop').fadeIn();
                        } else {
                                $('.scrollToTop').fadeOut();
                        }

        });

        // realiza suavizado de desplazamiento hacia arriba
        $('.scrollToTop').click(function(){
                $('html, body').animate({scrollTop : 0},800);
                return false;
        });

});

jQuery(document).ready(function($) {

    hash = window.location.hash;
    search = window.location.search.match("organizacion");

    // El suavizado aplicara solamente para los elementos
    // de la sección Organización de Transparencia
    if (search !== null) {

	el = $(hash);

	//añade clases al menu tipo anchor
	$(".region-posicion-e-3 .block-menu a[href*='#']").addClass("scroll");

	if (el.length) {
	    console.log("Entra");
	    $('html,body').animate({scrollTop:(el.offset().top)-225}, 800);
	}
	// Implementa funcionalida suavizado al desplazamiento de anchor
	$(".scroll").click(function(event){
	    event.preventDefault();
	    // Calcula el offset del hash y deduce 225px para evitar el
	    // sobrelapamiento de la navegación superior
	    $('html,body').animate({scrollTop:($(this.hash).offset().top)-225}, 800);
	});
    }
});

jQuery(document).ready(function($) {
    $('.colorbox-inline').colorbox({inline:true});
});

  //Acordion
 jQuery(document).ready(function($) {
    $('.view-content').find('h3').click(function(){

      //Expand or collapse this panel
      $(this).next().slideToggle('fast');

      //Hide the other panels
      $(".accordion-content").not($(this).next()).slideUp('fast');

    });
  });