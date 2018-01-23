<?php

/**
 * Implements hook_panels_layouts().
 */
// function omega_omega_12_twocol_8_4_panels_layouts() {
//   $items['kg_12_twocol_8_4'] = array(
//     'title' => t('Two Column 8-4'),
//     'category' => t('Omega: 12 Column Grid'),
//     'icon' => 'omega_12_twocol_8_4.png',
//     'theme' => 'omega_12_twocol_8_4',
//     'admin css' => '../omega_panels_admin_12.css',
//     'regions' => array(
//       'left' => t('Left side'),
//       'right' => t('Right side')
//     ),
//   );

//   return $items;
// }
$plugin = array(
  'title' => t('Two Column 8-4'),
  'category' => t('KG: 12 Column Grid'),
  'icon' => 'kg_12_twocol_8_4.png',
  'theme' => 'kg_12_twocol_8_4',
  'admin css' => '../omega_panels_admin_12.css',
  'regions' => array(
    'left' => t('Left side'),
    'right' => t('Right side')
  ),
);