// Please fill in below.
// <Sean DeFrank>
// <CPSC 121L-13> (e.g. CPSC 121L-01)
// <9/21/2023>
// <wyvernio@csu.fullerton.edu>
// <wyvernio>
//
// Lab 5-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "calculate_avg.h"

double CalculateAverage(const std::vector<double> &student_grades) {
  // ================= YOUR CODE HERE =================
  // Compute and return the average grade
  // based on the input vector containing student GPAs.
  // Hint: you may want to use a range based loop!
  // ==================================================

  if (student_grades.empty()) {
    return 0.0;
  }

  double total = 0;
  for (double i : student_grades) {
    total = total + i;
  }
  total = total / student_grades.size();

  return total;
}
