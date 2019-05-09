# Govimentum

Es la Distribución Distrital CMS de la Alcaldía Mayor de Bogotá basada en el CMS Drupal, que permite la gestión de contenidos digitales y posibilita el cumplimiento de la Ley de Transparencia y Acceso a la Información Pública, aporta a la estandarización de sitios web distritales y fomenta el Gobierno Electrónico a través de un modelo colaborativo y de software Libre.

# Requerimientos técnicos

Govimentum requiere como mínimo un ambiente de despliegue configurado con el stack de aplicaciones: Linux, (Apache/nGinx), PHP y MySQL. Usuarios del sistema opoerativo Windows pueden utilizar la herramienta XAMPP que empaqueta estas aplicaciones, aunque no se recomienda su uso en ambientes de producción. Las herramientas Git, Composer y Drush son opciones altamente recomendables puesto que facilitan la gestión de los repositorios Govimentum en la integración de funcionalidades y manejo de los sitios web con Drupal.

 * nGinx o Apache2
 * PHP versión 7.2.x
 * MariaDB
 * [Drush](docs.drush.org/en/master/install) versión 8.x
 * [Git](https://git-scm.com)
 * [Composer](https://getcomposer.org/)

# Obtener las fuentes

Govimentum cuenta con varias alternativas para obtener el core de Drupal, módulos contribuidos, librerías, parches y características funcionales de la Distribución. Todos estos archivos deben alojarse en el directorio _DocumentRoot_ configurado por el servidor web para procesar este tipo de aplicaciones.

## Usando Git

Clonar el repositorio _govimentum_semilla_ de la Distribución CMS:

`git clone git@gitlab.com:DDCMS_Govimentum/govimentum_semilla.git`

El repositorio govimentum_semilla está compuesto de [varios submodulos de Git](https://gitlab.com/DDCMS_Govimentum/govimentum_semilla/tree/7.x-1.x/www/sites/all/modules/features) por cada una de las _características funcionales_ de Govimentum, excepto por el contenido predeterminado, las cuales están localizadas en el directorio `sites/all/modules/features`. Los subdirectorios de estos módulos estarán vacíos luego de haber sido clonado este repositorio por primera vez como se observa a continuación:

```shell
 tree sites/all/modules/features
.
├── govi_contenido_predeterminado
│   ├── govi_contenido_predeterminado.features.content.inc
│   ├── govi_contenido_predeterminado.info
│   └── govi_contenido_predeterminado.module
├── govi_contratacion
├── govi_control
├── govi_directorio_funcionarios
├── govi_encabezado_institucional
├── govi_eventos
├── govi_informaci_n_institucional
├── govi_informacion_interes
├── govi_instrumentos_gestion_info
├── govi_links_destacados
├── govi_marco_legal
├── govi_mecanismos_contacto
├── govi_noticias
├── govi_planeacion
├── govi_presupuesto
├── govi_servicio_al_ciudadano
├── govi_slideshow_principal
├── govi_tramites_servicios
└── govi_transparencia
```


Para obtener el código de las _características funcionales_ se deben clonar de manera recursiva a través de submodulos de Git (Esta operación solicitará las credenciales de autenticación del usuario por cada uno de los submodulos):

`git submodule update --remote --recursive --init`

Para evitar que el usuario ingrese sus credenciales para cada uno de los submodulos, se debe configurar Git para almacenar en un cache temporal su nombre de usuario y contraseña, las cuales son utilizadas en las peticiones via https con Gitlab.

`git config credential.helper 'cache --timeout=300'`

## Usando Drush

Construir Govimentum mediante la descarga de sus componentes en el directorio `www` 

`drush make https://gitlab.com/DDCMS_Govimentum/govimentum_semilla/raw/7.x-1.x/govimentum_https.make www`

Construir Govimentum sobre una instalación de Drupal existente en el directorio `www`

`drush make https://gitlab.com/DDCMS_Govimentum/govimentum_semilla/raw/7.x-1.x/govimentum_https.make www  --no-core`

# Instalación

La instalación de Govimentum es un proceso guiado de 6 pasos que facilita al webmaster de cada Entidad la implementación de un sitio web institucional. Este componente automatiza la configuración de módulos contribuidos, características funcionales, interfaces gráficas y demás componentes de la Distribución. 

* Paso 1: Configuración de la conexión con la base de datos
* Paso 2: Instalación de la línea base de Drupal con los módulos del perfil de instalación Standard
* Paso 3: Configuración de la información del sitio web, ej: Nombre del sitio, usuario administrador, localización y zona horaria, contenido de ejemplo (Opcional), parámetros de conexión a través de proxy (Opcional).
* Paso 4: Selección del sector administrativo al cual pertenece el sitio web inistitucional
* Paso 5: Instalación de los módulos y dependencias de las característicasd funcionales de Govimentum
* Paso 6: Instalación de las características funcionales de Govimentum

# Documentación del proyecto

* En la [Wiki](https://gitlab.com/distribucion_distrital_cms/govimentum_semilla/wikis/inicio) de Govimentum se encuentra información detallada sobre el proyecto, sus características funcionales, herramientas de desarrollo recomendadas, solución de problemas y canales de comunicación.

* Asimismo, el [Sitio Web](http://govimentum.bogota.gov.co) del proyecto contiene material de consulta útil para facilitar el despliegue de Govimentum, su personalizacón y gestión de contenidos.

# Licencia

* [GNU/GPL v3](https://gitlab.com/DDCMS_Govimentum/govimentum_semilla/blob/7.x-1.x/LICENSE)
 

