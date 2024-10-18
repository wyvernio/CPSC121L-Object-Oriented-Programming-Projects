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

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef CREWMATE_H
#define CREWMATE_H

// ========================= YOUR CODE HERE =========================
// Define the Crewmate class here, which inherits from the Astronaut
// base class. Refer to the README for instructions.
// ===================================================================

class Crewmate : public Astronaut {
 public:
  Crewmate(const std::string& name, const graphics::Color& color)
      : Astronaut{name, color}, is_alive_(true), task_count_(0) {}

  Crewmate() : Crewmate{"no name", graphics::Color(0, 0, 0)} {}

  bool GetIsAlive() const { return is_alive_; }
  void SetIsAlive(bool is_alive) { is_alive_ = is_alive; }

  int GetTaskCount() const { return task_count_; }

  void DoTask(const std::string& task_name) {
    task_count_++;
    std::cout << Astronaut::GetName() << " is doing " << task_name << std::endl;
  }

  graphics::Color GetColor() const;
  std::string GetIconFilename() const;

 private:
  bool is_alive_;
  int task_count_;
};

#endif  // CREWMATE_H
