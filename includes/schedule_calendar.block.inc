<?php

/**
 * Implements hook_block_info().
 */
function schedule_calendar_block_info() {
  $blocks['schedule_calendar'] = array(
    'info' => t('Schedule Calendar'),
    'status' => TRUE,
    'weight' => 0,
    'visibility' => 1,
    'region' => 'content',
  );
  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function schedule_calendar_block_view($delta = '') {
  switch ($delta) {
    case 'schedule_calendar':
      $block['subject'] = t('Schedule Calendar');
      $block['content'] = schedule_calendar_block_content($delta);
      return $block;
      break;
  }
}

function schedule_calendar_block_content($delta) {
  switch ($delta) {
    case 'schedule_calendar':


      return variable_get('schedule_calendar_time_min', 'hour') == 'hour' ? schedule_calendar_hour_calendar() : schedule_calendar_day_calendar();
  }

}