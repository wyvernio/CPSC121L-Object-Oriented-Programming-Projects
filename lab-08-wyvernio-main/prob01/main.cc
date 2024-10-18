// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 8-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>

#include "car.h"

int main() {
  // =================== YOUR CODE HERE ===================
  // 1. Create a Car object called `c1` using the default
  //    constructor.
  //    Call its Print member function.
  // ======================================================
  Car c1{};
  c1.Print();
  std::cout << "\n";

  // =================== YOUR CODE HERE ===================
  // 2. Create a `VehicleId` object with the following info:
  //    Model: Honda, ID: 3, License plate: 7B319X4
  //    Create a `Car` object `c2` using the constructor that
  //    accepts a `VehicleId` and  pass in the `VehicleId`
  //    object you just made.
  //    Call its Print member function.
  // ======================================================
  VehicleId id("Honda", 3, "7B319X4");
  Car c2{id};
  c2.Print();
  std::cout << "\n";

  // =================== YOUR CODE HERE ===================
  // 3. Create a `Date` object with the following info:
  //    Day: 4, Month: 11, Year: 2018
  //    Create a `Car` object `c3` using the constructor that
  //    accepts a `Date` object and pass in the `Date` object
  //    you just made.
  //    Call its Print member function.
  // ======================================================
  Date date{4, 11, 2018};
  Car c3{date};
  c3.Print();
  std::cout << "\n";

  // =================== YOUR CODE HERE ===================
  // 4. Create a `Car` object `c4` using the constructor that
  //    accepts a `VehicleId` and `Date` object and pass in
  //    the `VehicleId` and `Date` objects you created in
  //    steps 2 and 3 above.
  //    Call its Print member function.
  // ======================================================
  Car c4{id, date};
  c4.Print();

  // 5. Create an instance of `VehicleId` using the default constructor.
  VehicleId default_id{};

  // 6. Create an instance of `Date` using the default constructor.
  Date default_date{};

  // 7. Call the `SetId` member function on `c4` and pass
  //    in the VehicleId you just created.
  c4.SetId(default_id);

  // 8. Call the `SetReleaseDate` member function on `c4`
  //    and pass in the VehicleId you just created.
  c4.SetReleaseDate(default_date);

  // 9. Finally, call the print member function for `c4`.
  std::cout << std::endl;
  c4.Print();

  return 0;
}
