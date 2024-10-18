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

#include <iostream>
#include <map>
#include <vector>

#include "bank.h"

int main() {
  // =================== YOUR CODE HERE ===================
  // 1. Create a Bank object, name it anything you'd like :)
  // =======================================================
  Bank objBank("Insecure Bank");
  // =================== YOUR CODE HERE ===================
  // 2. Create 3 new accounts in your bank.
  //    * The 1st account should belong to "Tuffy", with
  //      a balance of $121.00
  //    * The 2nd account should belong to "Frank", with
  //      a balance of $1234.56
  //    * The 3nd account should belong to "Oreo", with
  //      a balance of $140.12
  // =======================================================
  int account1 = objBank.CreateAccount("Tuffy", 121.00);
  int account2 = objBank.CreateAccount("Frank", 1234.56);
  int account3 = objBank.CreateAccount("Oreo", 140.12);

  // =================== YOUR CODE HERE ===================
  // 3. Deactivate Tuffy's account.
  // =======================================================
  objBank.DeactivateAccount(account1);

  // =================== YOUR CODE HERE ===================
  // 4. Call DisplayBalances to print out all *active*
  //    account balances.
  // =======================================================
  objBank.DisplayBalances();

  return 0;
}
