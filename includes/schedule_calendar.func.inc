<?php


function _all_hour_array() {
  $output = array();
  for ($i = 1; $i <= 24; $i++) {
    $output[$i] = $i;
  }
  return $output;

}

function _all_hour_array_reverse() {
  $output = array();
  for ($i = 1; $i <= 24; $i++) {
    $output[25 - $i] = 25 - $i;
  }
  return $output;

}

function _hour_array($from, $to) {
  $output = array();
  for ($i = $from; $i <= $to; $i++) {
    $output[$i] = $i;
  }
  return $output;

}

function _week_day_first_day($date) {
  $weekDay = date('D', $date);
  $arrayWeekDay = array(
    'Mon' => 1,
    'Tue' => 2,
    'Wed' => 3,
    'Thu' => 4,
    'Fri' => 5,
    'Sat' => 6,
    'Sun' => 7,
  );

  return $arrayWeekDay[$weekDay];


}

function _set_day_month_year_array($date) {
  $output = array();
  $output['day'] = date('l', $date);
  $output['month'] = date('n', $date);
  $output['year'] = date('Y', $date);
  return $output;


}

function _week_count($firstDayWeek, $countDay) {
  $output = 0;

//  dpm($countDay);
//  dpm($firstDayWeek);

  $output =  ($firstDayWeek+$countDay-1) /7;

  return ceil($output);
}