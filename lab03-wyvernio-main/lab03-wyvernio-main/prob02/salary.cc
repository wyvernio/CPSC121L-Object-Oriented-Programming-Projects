// <Sean DeFrank>
// <CPSC 121L-01> (e.g. CPSC 121L-01)
// <9/13/2023>
// <wyvernio@csu.fullerton.edu>
// <wyvernio>
//
// Lab 3-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

// TODO: implement the function defined in salary.h here.

#include "salary.h"

#include <iomanip>
#include <iostream>

float salaryCalc(float hourly_wage, float hours_worked) {
  float salary_owed;
  if (hours_worked <= 40 && hours_worked >= 0) {
    salary_owed = hourly_wage * hours_worked;
  } else if (hours_worked > 40 && hours_worked <= 65) {
    salary_owed =
        (hourly_wage * 40) + (hours_worked - 40) * (hourly_wage * 1.5);
  } else if (hours_worked > 65) {
    salary_owed = (hourly_wage * 40) + (hourly_wage * 1.5) * 25 +
                  (hours_worked - 65) * hourly_wage * 2;
  }
  return salary_owed;
}
