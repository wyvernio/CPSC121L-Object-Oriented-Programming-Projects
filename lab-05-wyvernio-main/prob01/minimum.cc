// Please fill in below.
// <Sean DeFrank>
// <CPSC 121L-13> (e.g. CPSC 121L-01)
// <9/21/2023>
// <wyvernio@csu.fullerton.edu>
// <wyvernio>
//
// Lab 5-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "minimum.h"

int IndexOfMinimumElement(std::vector<double> &input) {
  // ==================== YOUR CODE HERE ====================
  // Find the index of the smallest element in the input
  // vector, and return it. If the input vector is empty,
  // return -1.
  // ========================================================

  if (input.empty()) {
    return -1;
  }
  // {7,-4,2} -> 1
  //  0  1 2
  // Start with the first number in the vector, assume its minimum. min_index =
  // 0 Compare next number with the minimum number we found. Decide which one is
  // smaller from them both, If the new one is smaller, update min_index. repeat
  // 2 and 3 until end of vector. (loop)

  int min_index = 0;

  for (int i = 1; i < input.size(); i++) {
    // Compare next number with the minimum number we found.
    // Decide which one is smaller from them both, If the new one is smaller,
    // update min_index.
    if (input.at(min_index) > input.at(i)) {
      min_index = i;
    }
  }
  // return mn_index
  return min_index;
}
