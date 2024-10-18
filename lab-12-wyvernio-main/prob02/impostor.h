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

#include "astronaut.h"
#include "crewmate.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef IMPOSTOR_H
#define IMPOSTOR_H

// ========================= YOUR CODE HERE =========================
// Define the Impostor class here, which inherits from the Astronaut
// base class. Refer to the README for instructions.
// ===================================================================
class Impostor : public Astronaut {
 public:
  Impostor(const std::string& name, const graphics::Color& color)
      : Astronaut{name, color} {}

  Impostor() : Impostor{"rogue", graphics::Color(1, 1, 1)} {}

  void Kill(Crewmate& cm) const {
    std::cout << Astronaut::GetName() << " killed " << cm.GetName()
              << std::endl;
    cm.SetIsAlive(false);
  }

 private:
};

#endif  // IMPOSTOR_H
