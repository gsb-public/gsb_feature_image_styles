<?php
/**
 * @file
 * gsb_feature_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function gsb_feature_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 145x_variable.
  $styles['145x_variable'] = array(
    'effects' => array(
      33 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 145,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '145x_variable',
  );

  // Exported image style: 1630x_variable.
  $styles['1630x_variable'] = array(
    'label' => '1630x_variable',
    'effects' => array(
      21 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1630,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 170x100.
  $styles['170x100'] = array(
    'effects' => array(
      29 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 100,
        ),
        'weight' => 0,
      ),
    ),
    'label' => '170x100',
  );

  // Exported image style: 170x170.
  $styles['170x170'] = array(
    'effects' => array(
      18 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 170,
        ),
        'weight' => 0,
      ),
    ),
    'label' => '170x170',
  );

  // Exported image style: 270x158.
  $styles['270x158'] = array(
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 158,
        ),
        'weight' => 0,
      ),
    ),
    'label' => '270x158',
  );

  // Exported image style: 270x158_video.
  $styles['270x158_video'] = array(
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 158,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '270x158_video',
  );

  // Exported image style: 310px.
  $styles['310px'] = array(
    'label' => '310px',
    'effects' => array(
      3 => array(
        'name' => 'tinypng',
        'data' => array(),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 44x44.
  $styles['44x44'] = array(
    'effects' => array(
      30 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 44,
          'height' => 44,
        ),
        'weight' => 0,
      ),
    ),
    'label' => '44x44',
  );

  // Exported image style: 450x253_video.
  $styles['450x253_video'] = array(
    'label' => '450x253_video',
    'effects' => array(
      156 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 253,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 450x263.
  $styles['450x263'] = array(
    'effects' => array(
      22 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 450,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      23 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 450,
          'height' => 263,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
    'label' => '450x263',
  );

  // Exported image style: 450x263_video.
  $styles['450x263_video'] = array(
    'effects' => array(
      24 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 450,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      25 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 450,
          'height' => 263,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
    'label' => '450x263_video',
  );

  // Exported image style: 536x_variable.
  $styles['536x_variable'] = array(
    'label' => '536x_variable',
    'effects' => array(
      16 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 536,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 566x396.
  $styles['566x396'] = array(
    'effects' => array(
      31 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 566,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      32 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 566,
          'height' => 396,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
    'label' => '566x396',
  );

  // Exported image style: 566x_variable.
  $styles['566x_variable'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 566,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '566x_variable',
  );

  // Exported image style: 600x440.
  $styles['600x440'] = array(
    'effects' => array(
      27 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 440,
        ),
        'weight' => 0,
      ),
    ),
    'label' => '600x440',
  );

  // Exported image style: 627x367.
  $styles['627x367'] = array(
    'effects' => array(
      28 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 627,
          'height' => 367,
        ),
        'weight' => 0,
      ),
    ),
    'label' => '627x367',
  );

  // Exported image style: 816x_variable.
  $styles['816x_variable'] = array(
    'label' => '816x_variable',
    'effects' => array(
      26 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 816,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: program_display_image.
  $styles['program_display_image'] = array(
    'label' => 'Program Display Image',
    'effects' => array(
      5 => array(
        'name' => 'kraken_optimize',
        'data' => array(),
        'weight' => -10,
      ),
    ),
  );

  // Exported image style: resource_preview_image.
  $styles['resource_preview_image'] = array(
    'label' => 'Resource Preview Image',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 3,
      ),
    ),
  );

  return $styles;
}
