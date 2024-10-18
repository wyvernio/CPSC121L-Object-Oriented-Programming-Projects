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



// ========================= YOUR CODE HERE =========================
// This implementation file (star.cc) is where you should implement
// the member functions declared in the header (star.h), only
// if you didn't implement them inline within star.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Star class.
// ===================================================================

#include "star.h"

Star::Star(const std::string& name, double solarRadius) : name(name), solarRadius(solarRadius) {
  std::cout << "The star " << name << " was born." << std::endl;
}

Star::~Star() {
  std::cout << "The star " << name << " has gone supernova. It was "
            << std::fixed << std::setprecision(2) << CalculateVolume() << " times the volume of our sun." << std::endl;
}

std::string Star::GetName() const {
  return name;
}

double Star::CalculateVolume() const {
  // Calculate the volume of the star in terms of the solar radius
  return solarRadius * solarRadius * solarRadius;
}


