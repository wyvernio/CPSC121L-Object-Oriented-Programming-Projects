// <Sean DeFrank>
// <CPSC 121L-01> (e.g. CPSC 121L-01)
// <9/13/2023>
// <wyvernio@csu.fullerton.edu>
// <wyvernio>
//
// Lab 3-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iomanip>
#include <iostream>
#include <string>

#include "salary.h"

int main() {
  // Then, include the header file at the top of this file so you can
  // call your function that computes a salary based on these inputs.
  // Don't forget to check for invalid inputs!

  float hourly_wage;
  float hours_worked;

  std::cout << std::setprecision(2) << std::fixed;
  std::cout << "Hourly Wage: ";
  std::cin >> hourly_wage;
  std::cout << "Hours Worked: ";
  std::cin >> hours_worked;
  float salary_owed = salaryCalc(hourly_wage, hours_worked);

  if (hours_worked < 0 || hourly_wage < 0) {
    std::cout << "Invalid\n";
  }

  std::cout << "Salary owed: " << salary_owed << std::endl;

  return 0;
}
