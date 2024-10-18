
// <Sean DeFrank>
// <CPSC 121L-13> (e.g. CPSC 121L-01)
// <8/31/2023>
// <wyvernio.csu.fullerton.edu>
// <wyvernio>
//
// Lab 2-1
// If it is a pair programming lab please specify partner below.
// Partner: @

#include <iostream>

int main() {
  
  int height;
  std::cout << "You must be atleast 55 inches tall to ride the TuffyTwister." << std::endl;
  std::cout << "Please enter your height in inches: ";
  std::cin >> height;

  if (height >= 55) {
    std::cout << "Congratulations! You are tall enough to ride!" << std::endl;
  } else {
    std::cout << "Safety is our first priority, unfortunately, we cannot let you ride yet." << std::endl;
  }
  return 0;
}
