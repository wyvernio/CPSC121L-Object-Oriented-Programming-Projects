// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 12-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater



  // =================== YOUR CODE HERE ===================
  // Write a loop to allow the user to create `num` stars.
  // Each iteration of the loop should ask the user for the
  // star's name and solar radius, and use that to construct
  //  a `Star` object.
  //
  // After you create the `Star`, print "Created star " with
  // its name, to announce the birth of a new star.
  //
  // Notice that we don't need to explicitly call the
  // destructor since it automatically gets called when the
  // Star goes out of scope, at the end of each iteration.
  // =======================================================


#include <iostream>
#include <string>

#include "star.h"

int main() {
  int num = 0;
  std::cout << "How many stars? ";
  std::cin >> num;

  for (int i = 0; i < num; ++i) {
    std::string name;
    double solarRadius;

    std::cout << "Enter star " << i << "'s name: ";
    std::cin >> name;

    std::cout << "What is the solar radius? ";
    std::cin >> solarRadius;

    Star my_star(name, solarRadius);
    std::cout << "Created star " << my_star.GetName() << std::endl;
  }

  return 0;
}
