; Makefile Govimentum
; Ejecute el archivo de govimentum_update.make para incluir módulos, parches y
; actualizaciones a la instalación de drupal
;
; ej:
; Instalación nueva:
;    drush make govimentum.make
; Actualización de dépendencias durante desarrollo

core = 7.x
api = 2

; Drupal Core

projects[drupal][type] = "core"
projects[drupal][version] = "7.57"

; Perfil de instalación
;
; Seleccione el tipo de descarga, descomentando las líneas
; type y url dependiendo el ambiente de trabajo

projects[govi_perfil][type] = "profile"
;
; Descarga remota

projects[govi_perfil][download][type] = "git"
projects[govi_perfil][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_perfil.git"
;projects[govi_perfil][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_perfil.git"
projects[govi_perfil][download][branch] = "master"
;
; Descarga local

;projects[govi_perfil][download][type] = "get"
;projects[govi_perfil][download][url] = "../profiles/profile_pdtic.tar"

projects[govi_perfil][directory_name] = "govi"

; Tema base Govimentum
projects[govi_tema][type] = "theme"
projects[govi_tema][download][type] = "git"
projects[govi_tema][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_tema.git"
;projects[govi_tema][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_tema.git"
projects[govi_tema][download][branch] = "master"

; Módulo de desarrollo

projects[devel][subdir] = "dev"

; Módulos contribuidos proyectos drupal.org

projects[features][subdir] = "contrib"
projects[libraries][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[menu_token][subdir] = "contrib"
projects[ctools][subdir] = "contrib"
projects[views][subdir] = "contrib"
projects[views_slideshow][subdir] = "contrib"
projects[views_fieldsets][subdir] = "contrib"
projects[views_responsive_grid][subdir] = "contrib"
projects[link][subdir] = "contrib"
projects[date][subdir] = "contrib"
projects[variable][subdir] = "contrib"
projects[easy_social][subdir] = "contrib"
projects[calendar][subdir] = "contrib"
projects[event_calendar][subdir] = "contrib"
projects[entity][subdir] = "contrib"
projects[entityreference][subdir] = "contrib"
projects[scrollbar][subdir] = "contrib"
projects[jcarousel][subdir] = "contrib"
projects[defaultcontent][subdir] = "contrib"
projects[field_slideshow][subdir] = "contrib"
projects[menu_attributes][subdir] = "contrib"
projects[uuid][subdir] = "contrib"
projects[context][subdir] = "contrib"
projects[field_validation][subdir] = "contrib"
projects[field_group][subdir] = "contrib"
projects[conditional_fields][subdir] = "contrib"
projects[colorbox][subdir] = "contrib"
projects[colorbox_node][subdir] = "contrib"
projects[wsclient][subdir] = "contrib"
projects[http_client][subdir] = "contrib"
projects[rules][subdir] = "contrib"
projects[path_breadcrumbs][subdir] = "contrib"
projects[pathauto][subdir] = "contrib"
projects[color_field][subdir] = "contrib"
projects[maxlength][subdir] = "contrib"
projects[print][subdir] = "contrib"
projects[cami][subdir] = "contrib"
projects[captcha][subdir] = "contrib"
projects[recaptcha][subdir] = "contrib"
projects[smtp][subdir] = "contrib"
projects[youtube][subdir] = "contrib"

; Módulos contribuidos miembros del equipo de la Distribución Distrital CMS

projects[es_custom_widgets][type] = "module"
projects[es_custom_widgets][subdir] = "contrib"
projects[es_custom_widgets][download][type] = "git"
projects[es_custom_widgets][download][url] = "https://gitlab.com/snaphuman/es_custom_widgets.git"
;projects[es_custom_widgets][download][url] = "git@gitlab.com:snaphuman/es_custom_widgets.git"
projects[es_custom_widgets][download][branch] = "master"
projects[es_custom_widgets][directory_name] = "custom_widgets"

projects[barra_institucional][type] = "module"
projects[barra_institucional][subdir] = "contrib"
projects[barra_institucional][download][type] = "git"
projects[barra_institucional][download][url] = "https://gitlab.com/distribucion_distrital_cms/barra_institucional.git"
;projects[barra_institucional][download][url] = "git@gitlab.com:distribucion_distrital_cms/barra_institucional.git"
projects[barra_institucional][download][branch] = "master"

projects[govi_sdqs][type] = "module"
projects[govi_sdqs][subdir] = "contrib"
projects[govi_sdqs][download][type] = "git"
projects[govi_sdqs][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_sdqs.git"
;projects[govi_sdqs][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_sdqs.git"
projects[govi_sdqs][download][branch] = "master"

; Características Funcionales contribuidas por grupo desarrollo
; de la Distribucion Distrital CMS

projects[govi_contenido_predeterminado][type] = "module"
projects[govi_contenido_predeterminado][subdir] = "features"
projects[govi_contenido_predeterminado][download][type] = "git"
projects[govi_contenido_predeterminado][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_contenido_predeterminado.git"
;projects[govi_contenido_predeterminado][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_contenido_predeterminado.git"
projects[govi_contenido_predeterminado][download][branch] = "master"

projects[govi_links_destacados][type] = "module"
projects[govi_links_destacados][subdir] = "features"
projects[govi_links_destacados][download][type] = "git"
projects[govi_links_destacados][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_links_destacados.git"
;projects[govi_links_destacados][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_links_destacados.git"
projects[govi_links_destacados][download][branch] = "master"

projects[govi_noticias][type] = "module"
projects[govi_noticias][subdir] = "features"
projects[govi_noticias][download][type] = "git"
projects[govi_noticias][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_noticias.git"
;projects[govi_noticias][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_noticias.git"
projects[govi_noticias][download][branch] = "master"

projects[govi_slideshow_principal][type] = "module"
projects[govi_slideshow_principal][subdir] = "features"
projects[govi_slideshow_principal][download][type] = "git"
projects[govi_slideshow_principal][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_slideshow_principal.git"
;projects[govi_slideshow_principal][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_slideshow_principal.git"
projects[govi_slideshow_principal][download][branch] = "master"

projects[govi_encabezado_institucional][type] = "module"
projects[govi_encabezado_institucional][subdir] = "features"
projects[govi_encabezado_institucional][download][type] = "git"
projects[govi_encabezado_institucional][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_encabezado_institucional.git"
;projects[govi_encabezado_institucional][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_encabezado_institucional.git"
projects[govi_encabezado_institucional][download][branch] = "master"

projects[govi_informaci_n_institucional][type] = "module"
projects[govi_informaci_n_institucional][subdir] = "features"
projects[govi_informaci_n_institucional][download][type] = "git"
projects[govi_informaci_n_institucional][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_informaci_n_institucional.git"
;projects[govi_informaci_n_institucional][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_informaci_n_institucional.git"
projects[govi_informaci_n_institucional][download][branch] = "master"

projects[govi_directorio_funcionarios][type] = "module"
projects[govi_directorio_funcionarios][subdir] = "features"
projects[govi_directorio_funcionarios][download][type] = "git"
projects[govi_directorio_funcionarios][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_directorio_funcionarios.git"
;projects[govi_directorio_funcionarios][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_directorio_funcionarios.git"
projects[govi_directorio_funcionarios][download][branch] = "master"

projects[govi_marco_legal][type] = "module"
projects[govi_marco_legal][subdir] = "features"
projects[govi_marco_legal][download][type] = "git"
projects[govi_marco_legal][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_marco_legal.git"
;projects[govi_marco_legal][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_marco_legal.git"
projects[govi_marco_legal][download][branch] = "master"

projects[govi_contratacion][type] = "module"
projects[govi_contratacion][subdir] = "features"
projects[govi_contratacion][download][type] = "git"
projects[govi_contratacion][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_contratacion.git"
;projects[govi_contratacion][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_contratacion.git"
projects[govi_contratacion][download][branch] = "master"

projects[govi_instrumentos_gestion_info][type] = "module"
projects[govi_instrumentos_gestion_info][subdir] = "features"
projects[govi_instrumentos_gestion_info][download][type] = "git"
projects[govi_instrumentos_gestion_info][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_instrumentos_gestion_info.git"
;projects[govi_instrumentos_gestion_info][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_instrumentos_gestion_info.git"
projects[govi_instrumentos_gestion_info][download][branch] = "master"

projects[govi_presupuesto][type] = "module"
projects[govi_presupuesto][subdir] = "features"
projects[govi_presupuesto][download][type] = "git"
projects[govi_presupuesto][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_presupuesto.git"
;projects[govi_presupuesto][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_presupuesto.git"
projects[govi_presupuesto][download][branch] = "master"

projects[govi_gestion_institucional][type] = "module"
projects[govi_gestion_institucional][subdir] = "features"
projects[govi_gestion_institucional][download][type] = "git"
projects[govi_gestion_institucional][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_gestion_institucional.git"
;projects[govi_gestion_institucional][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_gestion_institucional.git"
projects[govi_gestion_institucional][download][branch] = "master"

projects[govi_eventos][type] = "module"
projects[govi_eventos][subdir] = "features"
projects[govi_eventos][download][type] = "git"
projects[govi_eventos][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_eventos.git"
;projects[govi_eventos][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_eventos.git"
projects[govi_eventos][download][branch] = "master"

projects[govi_servicio_al_ciudadano][type] = "module"
projects[govi_servicio_al_ciudadano][subdir] = "features"
projects[govi_servicio_al_ciudadano][download][type] = "git"
projects[govi_servicio_al_ciudadano][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_servicio_al_ciudadano.git"
;projects[govi_servicio_al_ciudadano][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_servicio_al_ciudadano.git"
projects[govi_servicio_al_ciudadano][download][branch] = "master"

projects[govi_pie_de_pagina_institucional][type] = "module"
projects[govi_pie_de_pagina_institucional][subdir] = "features"
projects[govi_pie_de_pagina_institucional][download][type] = "git"
projects[govi_pie_de_pagina_institucional][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_pie_de_pagina_institucional.git"
;projects[govi_pie_de_pagina_institucional][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_pie_de_pagina_institucional.git"
projects[govi_pie_de_pagina_institucional][download][branch] = "master"

projects[govi_planeacion][type] = "module"
projects[govi_planeacion][subdir] = "features"
projects[govi_planeacion][download][type] = "git"
projects[govi_planeacion][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_planeacion.git"
;projects[govi_planeacion][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_planeacion.git"
projects[govi_planeacion][download][branch] = "master"

projects[govi_tramites_servicios][type] = "module"
projects[govi_tramites_servicios][subdir] = "features"
projects[govi_tramites_servicios][download][type] = "git"
projects[govi_tramites_servicios][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_tramites_servicios.git"
;projects[govi_tramites_servicios][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_tramites_servicios.git"
projects[govi_tramites_servicios][download][branch] = "master"

projects[govi_transparencia][type] = "module"
projects[govi_transparencia][subdir] = "features"
projects[govi_transparencia][download][type] = "git"
projects[govi_transparencia][download][url] = "https://gitlab.com/distribucion_distrital_cms/govi_transparencia.git"
;projects[govi_transparencia][download][url] = "git@gitlab.com:distribucion_distrital_cms/govi_transparencia.git"
projects[govi_transparencia][download][branch] = "master"

; Modulos forks

projects[site_map][type] = "module"
projects[site_map][subdir] = "contrib"
projects[site_map][download][type] = "git"
projects[site_map][download][url] = "https://gitlab.com/trdavid/site_map.git"
;projects[site_map][download][url] = "git@gitlab.com:trdavid/site_map.git"
projects[site_map][download][branch] = "master"

; Librerias externas

libraries[jQueryCycle][download][type] = "get"
libraries[jQueryCycle][download][url] = "http://malsup.github.io/jquery.cycle.all.js"
libraries[jQueryCycle][destination] = "libraries"
libraries[jQueryCycle][directory_name] = "jquery.cycle"

libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.x.zip"
libraries[colorbox][destination] = "libraries"
libraries[colorbox][directory_name] = "colorbox"

; Parches

projects[views_slideshow][patch][] = "https://www.drupal.org/files/theme_prev_next-1949118-1.patch"

projects[wsclient][patch][] = "https://gitlab.com/snaphuman/wsclient/raw/master/patches/0004-avoid-cant-use-method-return-value-in-write-context.patch"

;projects[menu_token][patch][] = "https://www.drupal.org/files/issues/2063113-menu_token_active_trail-7.patch"

projects[print][patch][] = "https://gitlab.com/trdavid/print/raw/master/patches/001-establece-seleccion-icono-formato.patch"
