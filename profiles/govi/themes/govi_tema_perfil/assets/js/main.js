/**
 * Modulo jQuery que presenta los slides de la Distribución CMS 
 * durante los pasos del perfil de instalación
 */

(function($){

    Drupal.behaviors.goviTemaPerfil = {

	// Implementa metodo para adjuntar las variables
	// enviadas a través de la configuración JS de Drupal
	attach: function (context, settings) {

	    // Descompongo la url para obtener los parámetros
	    var url = parseUrl(context.baseURI);
	    var params = url.searchObject;
	    console.log(params);

	    // Elementos del DOM protagonistas
	    headerBox = $('#encabezado');
	    footerBox = $('#pie');
	    slideBox = $('#slide');
	    contentBox = $('#contenido');
	    slideGrid = $('<div>').addClass('pure-u-1');
	    titulo = $('.info-pagina h2').text().trim();

	    slideBox.append(slideGrid);

	    // Validación de condiciones para presentar los
	    // slides de Bienvenida y finalizacion
	    slide5 = (titulo === 'La instalación de Govimentum ha sido completada') ? true : false;
	    
	    if (params.hasOwnProperty('welcome') === false ||
		slide5 === true) {

		headerBox.remove();
		footerBox.remove();
		slideGrid.addClass('slide1');
		contentBox.find('h3').css({
		    'color': '#0A3A62',
		    'font-family': 'Roboto Regular',
		    'font-size': '26px',
		    'margin-bottom': '30px',
		    'text-align': 'center',
		});
		contentBox.find('p').css({
		    'text-align': 'center',
		});
		slideGrid.css({'height':'338px'});
	    }
	    
	    slide2 = (titulo === 'Configuración de la base de datos') ? true : false;
	    if (slide2 === true) {

		slideBox.remove();
		footerBox.remove();
		contentBox.css({'margin-top': '-145px'});
		addPageCounter('1');
	    }

	    if (params.id == 1) addProgressSlide(2, 2);
	    if (params.id == 2) addProgressSlide(3, 4);
	    if (params.id == 3) addProgressSlide(4, 5);

	    slide3 = (titulo === 'Inicia la configuración del sitio Web') ? true : false;
	    if (slide3 === true) {

		footerBox.remove();
		slideBox.remove();
		contentBox.css({'margin-top': '-145px'});
		addPageCounter('3');		
	    }



	    function addPageCounter(count) {
		// Esta implementación de contador de pásos
		// no es lo más ortodoxo
		// FIXME: sugerencia enviar parametros desde template.php
		// a través de la configuracion JS de Drupal
		headerBox.find($('.info-pagina')
			       .append($('<span>')
				       .addClass('paso')
				       .text('Paso ' + count + ' de 6')));
	    }

	    function addProgressSlide(slide, page) {

		footerBox.remove();
		slideGrid.addClass('slide' + slide);
		slideGrid.css({
		    'background-position': 'center top',
		    'height': '400px',
		    'margin-top':'-145px'
		});
		
		addPageCounter(page);
	    }
	}
    }

    /**
     * Obtiene los elementos de la url
     * @ver http://james.padolsey.com/javascript/parsing-urls-with-the-dom/
     */
    function parseUrl(url) {
	
	var parser = document.createElement('a'),
            searchObject = {},
            queries, split, i;
	// Let the browser do the work
	parser.href = url;
	// Convert query string to object
	queries = parser.search.replace(/^\?/, '').split('&');
	for( i = 0; i < queries.length; i++ ) {
            split = queries[i].split('=');
            searchObject[split[0]] = split[1];
	}
	return {
            protocol: parser.protocol,
            host: parser.host,
            hostname: parser.hostname,
            port: parser.port,
            pathname: parser.pathname,
            search: parser.search,
            searchObject: searchObject,
            hash: parser.hash
	};
    }
})(jQuery);
