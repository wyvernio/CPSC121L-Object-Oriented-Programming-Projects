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

#include <string>

#include "cpputils/graphics/image.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef ASTRONAUT_H
#define ASTRONAUT_H

// ========================= YOUR CODE HERE =========================
// Define the Astronaut class here. Refer to the README for instructions.
// ===================================================================
class Astronaut {
 public:
  Astronaut(const std::string& name, const graphics::Color& color)
      : name_(name), color_(color) {}

  std::string GetName() const { return name_; }
  graphics::Color GetColor() const { return color_; }
  std::string GetIconFilename() const { return "astronaut.bmp"; }

 private:
  std::string name_;
  graphics::Color color_;
};

#endif  // ASTRONAUT_H
