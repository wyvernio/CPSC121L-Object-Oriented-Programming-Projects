// Please fill in below.
// <Sean DeFrank>
// <CPSC 121L> (e.g. CPSC 121L-01)
// <9/20/2023>
// <wyvernio@csu.fullerton.edu email>
// <wyvernio>
//
// Lab 4-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "rectangle.h"

unsigned int Rectangle::Area() const {
  // ===================== YOUR CODE HERE ========================
  // Compute the area of this rectangle object.
  // Remember that member functions can access the member variables of the
  // class. Hint: look at `rectangle.h` to see the member variables you can
  // access.
  // =============================================================

  unsigned int length_one = GetLength();
  unsigned int width_one = GetWidth();

  unsigned int area = length_one * width_one;

  return area;
}

unsigned int Rectangle::Perimeter() const {
  // ===================== YOUR CODE HERE ========================
  // Compute the perimeter of this rectangle object.
  // =============================================================

  unsigned int length_two = GetLength();
  unsigned int width_two = GetWidth();

  unsigned int perimeter = (length_two + width_two) * 2;
  return perimeter;
}

Rectangle LargestRectangleByArea(const Rectangle &r1, const Rectangle &r2) {
  // ===================== YOUR CODE HERE ========================
  // Compare the areas of the two given rectangles, and return
  // the Rectangle whose area is larger.
  // =============================================================

  if (r1.Area() > r2.Area()) {
    return r1;
  }
  return r2;
}
