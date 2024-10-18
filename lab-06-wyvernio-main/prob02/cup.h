// Please fill in below.
// <Sean DeFrank>
// <CPSC 121L-13> (e.g. CPSC 121L-01)
// <9/28/2023>
// <wyvernio@csu.fullerton.edu>
// <wyvernio>
//
// Lab 6-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>

//====================== YOUR CODE HERE ======================
// Declare the Cup class in this file, with the member
// variables and member functions as described in the README.
//============================================================
class Cup {
 public:
  //================== YOUR CODE HERE ==================
  // Add the member function declarations here.
  //====================================================
  Cup() : drink_type_("Water") {}
  Cup(const std::string& drink_type_, double(fluid_oz_));

  void Drink(double amount);
  void Refill(double amount);
  void NewDrink(std::string new_drink,double new_amount);
  void Empty();
  std::string GetDrinkType() const;
  double GetFluidOz() const;

 private:
  //================== YOUR CODE HERE ==================
  // Add the member variable declarations here.
  //====================================================
    std::string drink_type_;
    double fluid_oz_{16.0};

};
