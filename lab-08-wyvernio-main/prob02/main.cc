// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 8-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>
#include <vector>
#include "pet.h"

int main() {
  std::vector<Pet> pets;

  std::string name;
  std::string breed_name;
  std::string species;
  std::string color;
  double weight = 0.0;

  do {
    std::cout << "Please enter the pet's name (q to quit): ";
    std::getline(std::cin, name);

    if (name != "q") {
      std::cout << "Please enter the pet's species: ";
      std::getline(std::cin, species);
      std::cout << "Please enter the pet's breed: ";
      std::getline(std::cin, breed_name);
      std::cout << "Please enter the pet's color: ";
      std::getline(std::cin, color);
      std::cout << "Please enter the pet's weight (lbs): ";
      std::cin >> weight;
      std::cin.ignore(); // Consume the newline character left in the buffer.

      // Create a Pet object using the input from the user and store it in the vector.
      Pet pet(name, species, breed_name, color, weight);
      pets.push_back(pet);
    }
  } while (name != "q");

  std::cout << "Printing Pets:\n";

  // Print information about each pet in the `pets` vector by iterating through it.
  for (const Pet& pet : pets) {
    pet.Print();
    std::cout << "\n"; // Add a line break for separation.
  }

  return 0;
}
