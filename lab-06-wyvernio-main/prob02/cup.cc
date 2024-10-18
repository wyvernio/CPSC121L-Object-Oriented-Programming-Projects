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

#include "cup.h"

#include <iostream>

//========================== YOUR CODE HERE ==========================
// Implement the member functions for the Cup class in this
// file.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Cup class.
//====================================================================

Cup::Cup(const std::string& drink_type, double(fluid_oz))
    : drink_type_(drink_type), fluid_oz_(fluid_oz){}

void Cup::Drink(double amount) {
    if (amount >= fluid_oz_) {
        fluid_oz_ = 0.0;
    } else {
        fluid_oz_ -= amount;
    }
}

void Cup::Refill(double amount) { fluid_oz_ += amount;}

void Cup::NewDrink(std::string new_drink,double new_amount){
    drink_type_ = std::move(new_drink);
    fluid_oz_ = new_amount;
}

void Cup::Empty() {
    drink_type_ = "nothing";
    fluid_oz_ = 0.0;
}

std::string Cup::GetDrinkType() const { return drink_type_;}
double Cup::GetFluidOz() const { return fluid_oz_;}
