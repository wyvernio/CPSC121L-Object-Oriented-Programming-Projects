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

#include "date.h"
#include "vehicleid.h"

// ======================= YOUR CODE HERE =======================
// Write the Car class here, containing two member variables:
// id_ to store the vehicle identity info and release_date_
// to store the car's release date.
//
// Then, define the following constructor overloads:
// 1. A default constructor, left empty. The id_ and release_date
//    will be initialized to their default values automatically.
// 2. A non-default constructor, which accepts a VehicleId object.
// 3. A non-default constructor, which accepts a Date object.
// 4. A non-default constructor, which accepts a VehicleId and Date
//    object (in that order).
//
// Finally, define the following member functions:
// 1. The accessor (getter) function for the id_.
// 2. The mutator (setter) function for the id_.
// 3. The accessor (getter) function for the release_date_.
// 4. The mutator (setter) function for the release_date_.
// 5. The Print member function.
//
// Note: mark functions that do not modify the member variables
// as const, by writing `const` after the parameter list.
// Pass objects by const reference, e.g. for the Date object
// passed in as input to SetReleaseDate.
// ===============================================================

class Car {
 public:
  Car() {}
  Car(const VehicleId& vehicle_id) : id_{vehicle_id} {}
  Car(const Date& date) : release_date_{date} {}
  Car(const VehicleId& vehicle_id, const Date& date)
      : id_{vehicle_id}, release_date_{date} {}

  const VehicleId& Id() const {
    return id_;
  }
  const Date& ReleaseDate() const {
    return release_date_;
  }
  void SetReleaseDate(const Date& release_date) {
    release_date_ = release_date;
  }
  void SetId(const VehicleId& id) {
    id_ = id;
  }

  void Print() const {
    std::cout << "The model of the car is: " << id_.Model() << std::endl;
    std::cout << "The VIN of the car is: " << id_.Vin() << std::endl;
    std::cout << "The license plate of the car is: " << id_.LicensePlate()
              << std::endl;
    std::cout << "The release date of the car is: " << release_date_.Month()
              << "/" << release_date_.Day() << "/" << release_date_.Year()
              << std::endl;
  }

 private:
  VehicleId id_;
  Date release_date_;
};