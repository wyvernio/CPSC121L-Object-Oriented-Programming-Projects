// Please fill in below.
// <Sean DeFrank>
// <CPSC 121L-13> (e.g. CPSC 121L-01)
// <10/19/2023>
// <Wyvernio@csu.fullerton.edu>
// <wyvernio>
//
// Lab 8-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <string>
#include "breed.h"
// ======================= YOUR CODE HERE =======================
// Write the Pet class here. Refer to the README for the member
// variables, constructors, and member functions needed.
//
// Note: mark functions that do not modify the member variables
// as const, by writing `const` after the parameter list.
// Pass objects by const reference when appropriate.
// Remember that std::string is an object!
// ===============================================================


class Pet {
public:
  Pet() : Pet("Doug", Breed(), 15.6) {}

  Pet(std::string name, Breed breed, double weight)
      : name(std::move(name)), breed(breed), weight(weight) {}

  Pet(std::string name, std::string species, std::string breedname,
      std::string color, double weight)
      : name(std::move(name)),
        breed(species, breedname, color),
        weight(weight) {}

  std::string Name() { return name; }
  
  void SetName(std::string name) { this->name = std::move(name); }

  Breed GetBreed() { return breed; }

  void SetBreed(Breed breed) { this->breed = breed; }

  double Weight() const { return weight; }

  void SetWeight(double weight) { this->weight = weight; }

  void SetBreed(std::string species, std::string name, std::string color) {
    breed = Breed(species, name, color);
  }

  void Print() const;

private:
  std::string name;
  Breed breed;
  double weight;
};
