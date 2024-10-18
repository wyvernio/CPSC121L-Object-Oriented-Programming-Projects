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

#include <iostream>

#include "rectangle.h"

int main() {
  std::cout << "====== Rectangle 1 ======" << std::endl;
  // ===================== YOUR CODE HERE ========================
  // Accept user input for the length and width of rectangle 1,
  // and instantiate a new Rectangle object with these inputs.
  // =============================================================
  unsigned int length = 0;
  std::cout << "Please enter the length: ";
  std::cin >> length;

  unsigned int width = 0;
  std::cout << "Please enter the width: ";
  std::cin >> width;

  Rectangle one_rectangle{};
  one_rectangle.SetLength(length);
  one_rectangle.SetWidth(width);
  std::cout << "Rectangle 1 created with length " << length << " and width "
            << width << std::endl;
  std::cout << "The area of Rectangle 1 is: " << one_rectangle.Area()
            << std::endl;
  std::cout << "The perimeter of Rectangle 1 is: " << one_rectangle.Perimeter()
            << std::endl;

  std::cout << "====== Rectangle 2 ======" << std::endl;
  // ===================== YOUR CODE HERE ========================
  // Accept user input for the length and width of rectangle 2,
  // and instantiate a new Rectangle object with these inputs.
  // =============================================================
  unsigned int two_length = 0;
  std::cout << "Please enter the length: ";
  std::cin >> two_length;

  unsigned int two_width = 0;
  std::cout << "Please enter the width: ";
  std::cin >> two_width;

  Rectangle two_rectangle{};
  two_rectangle.SetLength(two_length);
  two_rectangle.SetWidth(two_width);
  std::cout << "Rectangle 2 created with length " << two_length << " and width "
            << two_width << std::endl;
  std::cout << "The area of Rectangle 2 is: " << two_rectangle.Area()
            << std::endl;
  std::cout << "The perimeter of Rectangle 2 is: " << two_rectangle.Perimeter()
            << std::endl;
  // ===================== YOUR CODE HERE ========================
  // Call LargestRectangleByArea to determine which rectangle
  // is larger, and print out its length, width, and area.
  // Follow the README for formatting.
  // =============================================================



  Rectangle bigger_rectangle =
      LargestRectangleByArea(one_rectangle, two_rectangle);

  std::cout << "The largest rectangle has a length of "
            << bigger_rectangle.GetLength() << ", a width of "
            << bigger_rectangle.GetWidth() << ", and an area of "
            << bigger_rectangle.Area() << std::endl;

  return 0;
}
