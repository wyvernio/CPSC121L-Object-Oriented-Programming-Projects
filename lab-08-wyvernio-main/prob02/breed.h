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
// ======================= YOUR CODE HERE =======================
// Write the Breed class here. Refer to the README for the member
// variables, constructors, and member functions needed.
//
// Note: you may define all functions inline in this file.
// ===============================================================

class Breed {
public:
  Breed() : species("Dog"), breedname("Pug"), color("Fawn") {}
  Breed(const std::string& species, const std::string& breed, const std::string& color)
      : species(species), breedname(breed), color(color) {}

  std::string Species() const { return species; }
  void SetSpecies(const std::string& species) { this->species = species; }

  std::string BreedName() const { return breedname; }
  void SetBreedName(const std::string& breed) { this->breedname = breed; }

  std::string Color() const { return color; }
  void SetColor(const std::string& color) { this->color = color; }

private:
  std::string species;
  std::string breedname;
  std::string color;
};
