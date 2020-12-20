<?php
/**
 * @file
 * dining_common_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function dining_common_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: dining_blog_slideshow_thumbnail.
  $styles['dining_blog_slideshow_thumbnail'] = array(
    'label' => 'Blog Slideshow Thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'dining_blog_slideshow_thumbnail',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: dining_extra_large.
  $styles['dining_extra_large'] = array(
    'effects' => array(
      11 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 860,
          'height' => 300,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'dining_extra_large',
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'dining_extra_large',
  );

  // Exported image style: dining_fancybox.
  $styles['dining_fancybox'] = array(
    'label' => 'FancyBox 800',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: dining_masthead.
  $styles['dining_masthead'] = array(
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 860,
          'height' => 180,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'dining_masthead',
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'dining_masthead',
  );

  // Exported image style: dining_small.
  $styles['dining_small'] = array(
    'effects' => array(
      10 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 160,
          'height' => 120,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'dining_small',
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'dining_small',
  );

  // Exported image style: location_slideshow.
  $styles['location_slideshow'] = array(
    'label' => 'location_slideshow',
    'effects' => array(
      6 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 450,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'location_slideshow',
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: location_teaser.
  $styles['location_teaser'] = array(
    'label' => 'Location Teaser',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 700,
          'height' => 220,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'location_teaser',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: person_square.
  $styles['person_square'] = array(
    'label' => 'Person square',
    'effects' => array(
      2 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 600,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: promotion_slideshow.
  $styles['promotion_slideshow'] = array(
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 300,
          'height' => 300,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'promotion_slideshow',
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'promotion_slideshow',
  );

  return $styles;
}
