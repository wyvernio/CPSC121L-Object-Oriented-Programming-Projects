// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 11-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "customer.h"

// ========================= YOUR CODE HERE =========================
// This implementation file (customer.cc) is where you should implement
// the member functions declared in the header (customer.h), only
// if you didn't implement them inline within customer.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Customer class.
// ===================================================================

int Customer::TotalCustomersInLine() const {
  // base case
  if (next_customer_ == nullptr) {
    return 1;
  } else {
    // recursive case
    int total_cust_behind_me = next_customer_->TotalCustomersInLine();
    return total_cust_behind_me + 1;
  }
}

int Customer::TotalProductsInLine() const {
  if (next_customer_ == nullptr) {
    return product_count_;
  } else {
    int total_prod_behind_me = next_customer_->TotalProductsInLine();
    return total_prod_behind_me + product_count_;
  }
}

std::string Customer::FirstAlphabeticalCustomerInLine() const {
  if (next_customer_ == nullptr) {
    return name_;

  } else {
    std::string first_alphabetical_name_behind_me =
        next_customer_->FirstAlphabeticalCustomerInLine();
    if (name_ < first_alphabetical_name_behind_me) {
      return name_;
    } else {
      return first_alphabetical_name_behind_me;
    }
  }
}