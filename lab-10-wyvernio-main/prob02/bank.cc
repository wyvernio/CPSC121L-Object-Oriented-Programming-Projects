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

// ========================= YOUR CODE HERE =========================
// This implementation file (bank.cc) is where you should implement
// the member functions declared in the header (bank.h), only
// if you didn't implement them inline within bank.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Bank class.
// ===================================================================

#include "bank.h"

#include <cstdlib>

int Bank::GenerateAccountId() const {
  return rand() % 9000 + 1000;
}

Bank::Bank(const std::string& bank_name) : bank_name_(bank_name) {
  std::srand(static_cast<unsigned>(time(0)));
}

const std::string& Bank::GetBankName() const {
  return bank_name_;
}

const std::map<int, Account>& Bank::GetAccounts() const {
  return accounts_;
}

int Bank::CreateAccount(const std::string& account_holder,
                        double initial_balance) {
  int account_id = GenerateAccountId();
  accounts_[account_id] = Account(account_holder, initial_balance);
  return account_id;
}

int Bank::TotalAccounts() const {
  return static_cast<int>(accounts_.size());
}

void Bank::DisplayBalances() const {
  std::cout << "Account Balances for " << bank_name_ << ":\n";
  for (const auto& [account_id, account] : accounts_) {
    std::cout << account.GetAccountHolder() << ": $" << account.GetBalance()
              << "\n";
  }
}

void Bank::DeactivateAccount(int account_id) {
  auto it = accounts_.find(account_id);
  if (it != accounts_.end()) {
    accounts_.erase(it);
    std::cout << "Account ID " << account_id << " deactivated.\n";
  } else {
    std::cout << "Account ID " << account_id << " not found.\n";
  }
}