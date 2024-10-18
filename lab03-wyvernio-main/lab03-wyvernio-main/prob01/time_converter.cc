
// <Sean DeFrank>
// <CPSC121L> (e.g. CPSC 121L-01)
// <Sep7th2023>
// <wyvernio@csu.fullerton.edu>
// <wyvernio>
//
// Lab 3-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "time_converter.h"

#include <iostream>
#include <string>

std::string MilitaryToRegularTime(int military_time) {
  // Hint: std::to_string() converts a given integer to a string.

  // 2249 -> 10:49 pm
  // 842 -> 8:42 am

  // 1. Split military time into hours and minutes.
  // 2249 should be 22 and 49
  int hours = military_time / 100;
  int minutes = military_time % 100;
  // 2. Use minutes as is.
  std::string min_str = std::to_string(minutes);
  if (minutes < 10) {
    min_str = "0" + min_str;
  }
  // 3. If hours >= 12, Its pm, else, am.
  std::string am_pm;
  if (hours > 11) {
    am_pm = "pm";
  } else {
    am_pm = "am";
  }
  // 4. If hours > 12, subtract 12.

  if (hours > 12) {
    hours -= 12;
  }
  // 5. Assemble hours, minutes, and am/pm and return.
  return std::to_string(hours) + ":" + min_str + " " + am_pm;
}
