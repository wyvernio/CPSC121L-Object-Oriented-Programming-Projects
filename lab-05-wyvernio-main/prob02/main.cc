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

int main() {
  int num_students = 0;
  std::cout << "How many students are in your class? ";
  std::cin >> num_students;

  if (num_students <= 0) {
    std::cout << "You have no students!\n";
  } else {
    // ===================== YOUR CODE HERE =====================
    // Construct a vector whose size is the same as the
    // given number of students in the class, based on the
    // `num_students` variable. Don't forget to #include <vector>.
    // ==========================================================
    std::vector<double> students(num_students);
    std::cout << "Enter the GPA for the students in your class (0.0 - 4.0)\n";
    for (int i = 0; i < num_students; i++) {
      // ============ YOUR CODE HERE ============
      // Store the input GPA from cin into
      // the corresponding index in the vector.
      // ========================================
      double value = 0;
      std::cout << "Enter the GPA for student #" << i + 1 << ": ";
      std::cin >> value;
      students.at(i) = value;
    }

    // ===================== YOUR CODE HERE =====================
    // Call your CalculateAverage function and provide any
    // necessary parameters. Then, store the results in the average
    // variable. Make sure to #include "calculate_avg.h" before you
    // use the CalculateAverage function.
    // ==========================================================
    double average = CalculateAverage(students);
    std::cout << "Class average: " << std::setprecision(2) << std::fixed
              << average << "\n";
  }

  return 0;
}
