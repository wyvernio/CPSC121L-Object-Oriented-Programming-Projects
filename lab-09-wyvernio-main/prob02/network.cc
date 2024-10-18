// Please fill in below.
// <Sean DeFrank>
// <11/8/2023>
// <wyvernio@csu.fullerton.edu>
// <Wyvernio>
//
// Lab 9-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

// ========================= YOUR CODE HERE =========================
// This implementation file (network.cc) is where you should implement
// the member functions declared in the header (network.h), only
// if you didn't implement them inline within network.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Network class.
// ===================================================================

#include "network.h"

void Network::AddPhone(std::shared_ptr<Phone> phone) {
  phonebook_[phone->GetOwner()] = phone;
}

void Network::SendMessage(std::shared_ptr<Message> message,
                          const std::string& recipient) {
  if (phonebook_.find(recipient) != phonebook_.end()) {
    phonebook_[recipient]->AcceptMessage(message);
  }
}

void Network::SendMessage(std::shared_ptr<Message> message,
                          const std::vector<std::string>& recipients) {
  for (const std::string& recipient : recipients) {
    if (phonebook_.find(recipient) != phonebook_.end()) {
      phonebook_[recipient]->AcceptMessage(message);
    }
  }
}