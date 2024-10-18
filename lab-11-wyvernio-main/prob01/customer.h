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

#include <memory>
#include <string>

class Customer {
 public:
  // ====================== YOUR CODE HERE ======================
  // 1. Define a constructor using member initializer list syntax
  //    according to the README.
  // 2. Define the accessor functions (i.e. the getter functions)
  //    `GetName`, `GetProductCount`, and `GetNextCustomer`.
  //    You do not need to create mutator functions (setters).
  // 3. Define the recursive functions specified in the README.
  // ============================================================
  Customer(const std::string& name, int prod_count,
           std::shared_ptr<Customer> next)
      : name_(name), product_count_(prod_count), next_customer_(next) {}
  std::string GetName() const {
    return name_;
  }
  int GetProductCount() const {
    return product_count_;
  }
  std::shared_ptr<Customer> GetNextCustomer() const {
    return next_customer_;
  }

  int TotalCustomersInLine() const;
  int TotalProductsInLine() const;
  std::string FirstAlphabeticalCustomerInLine() const;

 private:
  std::string name_;
  int product_count_;
  std::shared_ptr<Customer> next_customer_;
};
