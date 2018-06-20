<?php
/**
 * @file
 * govi_noticias.features.socialmedia_profile.inc
 */

/**
 * Implements hook_socialmedia_profile_defaults().
 */
function govi_noticias_socialmedia_profile_defaults() {
  $data = array(
    'facebook:0' => array(
      'url' => 'www.facebook.com/AltaConsejeriaTicBogota',
      'username' => 'AltaConsejeriaTicBogota',
      'userid' => 'AltaConsejeriaTicBogota',
      'inputs' => array(
        'url' => 'https://www.facebook.com/AltaConsejeriaTicBogota',
        'username' => 'AltaConsejeriaTicBogota',
      ),
      'uid' => 0,
      'platform' => 'facebook',
    ),
    'twitter:0' => array(
      'url' => 'twitter.com/consejeriatic',
      'username' => 'consejeriatic',
      'userid' => 'consejeriatic',
      'inputs' => array(
        'url' => 'http://twitter.com/consejeriatic',
        'username' => 'consejeriatic',
        'user_timeline_widget_id' => '',
      ),
      'uid' => 0,
      'platform' => 'twitter',
    ),
  );
  return $data;
}
