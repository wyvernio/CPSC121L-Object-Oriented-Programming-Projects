// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 12-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "crewmate.h"

#include <iostream>

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement the member
// functions declared in the header, only if you didn't implement
// them inline in the header.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Crewmate class.
// ===================================================================

graphics::Color Crewmate::GetColor() const {
  if (is_alive_) {
    return Astronaut::GetColor();
  }
  graphics::Color color = Astronaut::GetColor();
  graphics::Color shifted((color.Red() + 256) / 2, (color.Green() + 256) / 2,
                          (color.Blue() + 256) / 2);
  return shifted;
}

std::string Crewmate::GetIconFilename() const {
  if (is_alive_) {
    return Astronaut::GetIconFilename();
  }
  return "ghost.bmp";
}