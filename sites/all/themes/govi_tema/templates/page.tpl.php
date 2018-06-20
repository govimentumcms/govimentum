    <header id="encabezado">
      <section class="encabezado-a pure-g">
      <div class="contenedor">
        <?php if (!empty($page['encabezado_a_1'])): ?>
            <div class="encabezado-a-1 pure-u-sm-1 pure-u-md-1-2 pure-u-lg-1-2 pure-u-xl-1-2">
                <?php print render($page['encabezado_a_1']); ?>
            </div>
        <?php endif; ?>

        <?php if (!empty($page['encabezado_a_2'])): ?>
            <div class="encabezado-a-2 pure-u-sm-1 pure-u-md-1-2 pure-u-lg-1-2 pure-u-xl-1-2">
                <?php print render($page['encabezado_a_2']); ?>
            </div>
        <?php endif; ?>

        <?php if (!empty($page['encabezado_a_3'])): ?>
            <div class="encabezado-a-3 pure-u-sm-1 pure-u-md-1-2 pure-u-lg-1-3 pure-u-xl-1-2">
                <?php print render($page['encabezado_a_3']); ?>
            </div>
        <?php endif; ?>
        </div>
      </section>

      <section class="encabezado-b pure-g">
          <div class="contenedor">
            <?php if (!empty($page['header_entidad'])): ?>
            
			<?php if ($logo): ?>
				<div class="pure-u-sm-1 pure-u-md-1-5 pure-u-lg-1-5 pure-u-xl-1-5">
					<div class="logo_entidad">
						<img src="<?php print $logo ?>" alt="<?php print $site_name?>" title="<?php print $site_name?>" id="logo" />
					</div>
				</div>
            <?php endif; ?>
				
				
                <?php if (!empty($page['header_sector'])): ?>
                    <div class="encabezado-b-2 pure-u-sm-1 pure-u-md-3-5 pure-u-lg-3-5 pure-u-xl-3-5">
                        <h1 class="nombre-sitio">
                           <?php if (!empty($page['header_entidad'])): ?>
                           <?php endif; ?>
								<span><?php print $site_name?></span>   
								<?php endif; ?>
                        </h1>
						  <h2 class="nombre-sitio">
                           <?php if (!empty($page['header_entidad'])): ?>
						    <span><?php print render($page['header_sector']); ?></span>
                             
                        </h2>
                    </div>
                <?php endif; ?>
                <?php if (!empty($page['encabezado_b_1'])): ?>
                    <div class="encabezado-b-1 pure-u-sm-1 pure-u-md-1-5 pure-u-lg-1-5 pure-u-xl-1-5">
                        <?php print render($page['encabezado_b_1']); ?>
                    </div>
                <?php endif; ?>
            <?php else:?>
                <?php if (!empty($page['encabezado_b_1'])): ?>
                    <div class="encabezado-b-1 pure-u-sm-1 pure-u-md-1-5 pure-u-lg-1-5 pure-u-xl-1-5">
                        <?php print render($page['encabezado_b_1']); ?>
                    </div>
                <?php endif; ?>
                <?php if (!empty($page['header_sector'])): ?>
                    <div class="encabezado-b-2 pure-u-sm-1 pure-u-md-3-5 pure-u-lg-3-5 pure-u-xl-3-5">
                        <h1 class="nombre-sitio">
                           <?php print render($page['header_sector']); ?>
                        </h1>
                    </div>
                <?php endif; ?>
                <?php if (!empty($page['encabezado_b_3'])): ?>
                    <div class="encabezado-b-3 pure-u-sm-1 pure-u-md-1-5 pure-u-lg-1-5 pure-u-xl-1-5">
                        <?php print render($page['encabezado_b_3']); ?>
                    </div>
                <?php endif; ?> 
            <?php endif; ?>
            </div>
      </section>

      <section class="encabezado-c pure-g">
     
                <div class="encabezado-c-1 pure-u-sm-1 pure-u-md-1 pure-u-lg-1 pure-u-xl-1" role="navigation" aria-label="Menu">
                   
				    <a href="#" id="toggles" class="menu-toggle custom-toggle">&nbsp;<hr class="bar">
		<hr class="bar"></a>
					
                    <div id="menu-principal" class="pure-menu pure-menu-horizontal custom-can-transform menu-transform">
                        <?php print render($main_menu); ?>
                    </div>
                </div>   

      </section>

    </header>
    <?php print render($page['help']); ?>
    <!-- Espacio para mostrar los mensajes del sistema -->
    <?php if ($messages): ?>
	<div id="messages"><div class="section clearfix">
	    <?php print $messages; ?>
	</div></div> <!-- /.section, /#messages -->
    <?php endif; ?>


	<?php if ($is_front): ?>
        <section class="posicion-a pure-g">
          <?php if (!empty($page['posicion_a_1'])): ?>
            <div class="posicion-a-1 pure-u-sm-1 pure-u-md-1 pure-u-lg-1 pure-u-xl-1" >
                <?php print render($page['posicion_a_1']); ?>
            </div>
          <?php endif; ?>
        </section>
            <?php endif; ?>

             
<div class="contenedor">
 <div id="posicion"> 
 <?php if ($is_front): ?>
        <section class="posicion-b pure-g">
          <?php if (!empty($page['posicion_b_1'])): ?>
            <div class="posicion-b-1 pure-u-md-1 pure-u-sm-1" >
                <?php print render($page['posicion_b_1']); ?>
            </div>
          <?php endif; ?>
        </section>

        <section class="posicion-c pure-g">
          <?php if (!empty($page['posicion_c_1'])): ?>
            <div class="posicion-c-1 pure-u-sm-1 pure-u-md-1 pure-u-lg-1 pure-u-xl-1-3" >
                <?php print render($page['posicion_c_1']); ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($page['posicion_c_2'])): ?>
            <div class="posicion-c-2 pure-u-sm-1 pure-u-md-12-24 pure-u-lg-12-24 pure-u-xl-1-3">
                <?php print render($page['posicion_c_2']); ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($page['posicion_c_3'])): ?>
            <div class="posicion-c-3 pure-u-sm-1 pure-u-md-12-24 pure-u-lg-12-24 pure-u-xl-1-3">
                <?php print render($page['posicion_c_3']); ?>
            </div> 
          <?php endif; ?>
        </section>

        <section class="posicion-d pure-g">
            <?php if (!empty($page['posicion_d_1'])): ?>
              <div class="posicion-d-1 pure-u-sm-1 pure-u-md-1 pure-u-lg-1 pure-u-xl-1-3" >
                <?php print render($page['posicion_d_1']); ?>
              </div>
            <?php endif; ?>
            <?php if (!empty($page['posicion_d_2'])): ?>
              <div class="posicion-d-2 pure-u-sm-1 pure-u-md-12-24 pure-u-lg-12-24 pure-u-xl-1-3">
                <?php print render($page['posicion_d_2']); ?>
              </div>
            <?php endif; ?>
            <?php if (!empty($page['posicion_d_3'])): ?>
              <div class="posicion-d-3 pure-u-sm-1 pure-u-md-12-24 pure-u-lg-12-24 pure-u-xl-1-3">
                <?php print render($page['posicion_d_3']); ?>
              </div>
            <?php endif; ?>
        </section>

	<?php endif; ?>

   <section class="posicion-e pure-g">
	    <!-- Define marcado para el home -->
            <?php if (drupal_is_front_page()): ?>
              <?php if (!empty($page['posicion_e_1'])): ?>
		  <div class="posicion-e-1 pure-u-md-1 pure-u-sm-1 pure-u-lg-1 pure-u-xl-1-3" >
                    <?php print render($page['posicion_e_1']); ?>
		  </div>
              <?php endif; ?>
              <?php if (!empty($page['posicion_e_2'])): ?>
		  <div class="posicion-e-2 pure-u-md-1 pure-u-sm-1 pure-u-lg-12-24 pure-u-xl-1-3" >
                    <?php print render($page['posicion_e_2']);?>
		  </div>
	      <?php endif; ?>
              <?php if (!empty($page['posicion_e_3'])): ?>
		  <div class="posicion-e-3 pure-u-md-1 pure-u-sm-1 pure-u-lg-12-24 pure-u-xl-1-3" >
                    <?php print render($page['posicion_e_3']); ?>
		  </div>
              <?php endif; ?>
            <?php endif; ?>
	    
	    <!-- Define marcado para las páginas internas -->
            <?php if (!drupal_is_front_page()): ?>
              <?php if (!empty($breadcrumb) || !empty($page['posicion_e_1'])): ?>
		  <div class="posicion-e-1 pure-u-md-1 pure-u-sm-1 pure-u-lg-1 pure-u-xl-1 pure-u-lg- pure-u-xl-1" >
                      <div id="menu-segundo-nivel" class="pure-menu pure-menu-horizontal menu-transform">
                    <?php print render($page['posicion_e_1']); ?>
                      </div>
		      <div id="migas-de-pan">
                      <?php print $breadcrumb; ?>
		      </div>
		  </div>
              <?php endif; ?>

           
     <?php if (!empty($page['posicion_e_3'])): ?>
   <div class="posicion-e-2 pure-2-3 pure-u-md-2-3 pure-u-sm-1 pure-u-lg-2-3 pure-u-xl-2-3">
               <?php if (!empty($tabs['#primary'])): ?>
                  <div class="block-tabs">
                    <?php print render($tabs); ?>
                  </div>
                  <?php endif; ?>
                <?php print render($page['content']);?>
              </div>
  <?php endif; ?>
    <?php if (empty($page['posicion_e_3'])): ?>
   <div class="posicion-e-2 pure-2-3 pure-u-md-2-3 pure-u-sm-1 pure-u-lg-2-3 pure-u-xl-1">
               <?php if (!empty($tabs['#primary'])): ?>
                  <div class="block-tabs">
                    <?php print render($tabs); ?>
                  </div>
                  <?php endif; ?>
                <?php print render($page['content']);?>
              </div>
  <?php endif; ?>

              <?php if (!empty($page['posicion_e_3'])): ?>
		  <div class="posicion-e-3 pure-1-3 pure-u-md-1-3 pure-u-sm-1 pure-u-lg-1-3 pure-u-xl-1-3">
                <?php print render($page['posicion_e_3']); ?>
		  </div>
              <?php endif; ?>
            <?php endif; ?>
        </section>
      </div>
    </div>



    <footer id="pie">
        <section class="pie-a pure-g">
        <div class="contenedor">
            <?php if (!empty($page['pie_a_1'])): ?>
                <div class="pie-a-1 pure-u-md-1-4 pure-u-sm-1 pure-u-lg-1-4 pure-u-xl-1-4">
                    <?php print render($page['pie_a_1']); ?>
                </div>
            <?php endif; ?>
            <?php if (!empty($page['pie_a_2'])): ?>
                <div class="pie-a-2 pure-u-md-1-4 pure-u-sm-1 pure-u-lg-1-4 pure-u-xl-1-4">
                    <?php print render($page['pie_a_2']); ?>
                </div>
            <?php endif; ?>
            <?php if (!empty($page['pie_a_3'])): ?>
                <div class="pie-a-3 pure-u-md-1-4 pure-u-sm-1 pure-u-lg-1-4 pure-u-xl-1-4">
                    <?php print render($page['pie_a_3']); ?>
                </div>
            <?php endif; ?>
            <?php if (!empty($page['pie_a_4'])): ?>
                <div class="pie-a-4 pure-u-md-1-4 pure-u-sm-1 pure-u-lg-1-4 pure-u-xl-1-4">
                    <?php print render($page['pie_a_4']); ?>
                </div>
            <?php endif; ?>
            </div>
        </section>

        <section class="pie-b pure-g">
        <div class="contenedor">
            <?php if (!empty($page['pie_b_1'])): ?>
                <div class="pie-b-1 pure-u-2-3 pure-u-sm-2-3 pure-u-md-2-3 pure-u-lg-2-3 pure-u-xl-2-3">
                    <?php print render($page['pie_b_1']); ?>
                </div>
            <?php endif; ?>
            <?php if (!empty($page['pie_b_2'])): ?>
                <div class="pie-b-2 pure-u-1-3 pure-u-sm-1-3 pure-u-md-1-3 pure-u-lg-1-3 pure-u-xl-1-3">
                    <div class="container">
		                <?php if (!empty($page['header_entidad'])): ?>
                           <?php print render($page['header_sector']); ?>
		                <?php endif; ?>
                        <?php print render($page['pie_b_2']); ?>
                    </div>
                </div>
            <?php endif; ?>
            </div>
        </section>
        <section class="pie-c pure-g">
        <div class="contenedor">
            <?php if (!empty($page['pie_c_1'])): ?>
                <?php print render($page['pie_c_1']);?>
            <?php endif; ?>
             <div class="container required_links">
                <a title="Ir hacia arriba" href="#" class="scrollToTop pure-button">Ir hacia arriba</a>
                <div class="pie-c-1 pure-u-sm-1 pure-u-md-1 pure-u-lg-1 pure-u-xl-1">
                    <a href="#">Términos y Condiciones</a>
                    <a href="#">Políticas de Uso</a>
                    <span> Copyright &copy; 2016 Govimentum</span>
                </div>
                <a href="#" class="created_by">By Govimentum</a>
            </div>
            </div>
        </section>

        <section class="pie-d pure-g">
            <?php if (!empty($page['pie_d_1'])): ?>
                <div class="pie-d-1 pure-u-sm-1 pure-u-md-1 pure-u-lg-1 pure-u-xl-1">
                    <?php print render($page['pie_d_1']); ?>
                </div>
            <?php endif; ?>
        </section>

    </footer>
