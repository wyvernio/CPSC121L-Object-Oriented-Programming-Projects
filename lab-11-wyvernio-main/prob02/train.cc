// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 11-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

// ========================= YOUR CODE HERE =========================
// This implementation file (train.cc) is where you should implement
// the member functions declared in the header (train.h), only
// if you didn't implement them inline within train.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Train class.
// ===================================================================

#include "train.h"

int Train::TotalTrainPassengers() const {
  if (!next_carriage_) {
    return passenger_count_;
  }
  return passenger_count_ + next_carriage_->TotalTrainPassengers();
}

int Train::MaxCarriagePassengers() const {
  if (!next_carriage_) {
    return passenger_count_;
  }
  int max_in_rest = next_carriage_->MaxCarriagePassengers();
  return (passenger_count_ > max_in_rest) ? passenger_count_ : max_in_rest;
}

bool Train::IsTrainFull() const {
  if (!next_carriage_) {
    return passenger_count_ == seat_count_;
  }
  return passenger_count_ == seat_count_ && next_carriage_->IsTrainFull();
}

void Train::AddCarriageToEnd(std::shared_ptr<Train> new_carriage) {
  if (!next_carriage_) {
    next_carriage_ = new_carriage;
  } else {
    next_carriage_->AddCarriageToEnd(new_carriage);
  }
}
