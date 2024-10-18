// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 10-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

// ======================= YOUR CODE HERE =======================
// Write the Bank class here. Refer to the README for the member
// variables, constructors, and member functions needed.
//
// Note: mark functions that do not modify the member variables
// as const, by writing `const` after the parameter list.
// Pass objects by const reference when appropriate.
// Remember that std::string is an object!
// ===============================================================

#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <map>
#include <string>

#include "account.h"

class Bank {
 private:
  std::string bank_name_;
  std::map<int, Account> accounts_;

  int GenerateAccountId() const;

 public:
  Bank(const std::string& bank_name);

  const std::string& GetBankName() const;
  const std::map<int, Account>& GetAccounts() const;

  int CreateAccount(const std::string& account_holder, double initial_balance);

  int TotalAccounts() const;

  void DisplayBalances() const;

  void DeactivateAccount(int account_id);
};

#endif