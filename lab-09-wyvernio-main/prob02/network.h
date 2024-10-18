// Please fill in below.
// <Sean DeFrank>
// <11/8/2023>
// <wyvernio@csu.fullerton.edu>
// <Wyvernio>
//
// Lab 9-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#pragma once

#include <map>
#include <memory>

#include "message.h"
#include "phone.h"

class Network {
  // ======================= YOUR CODE HERE =======================
  // Write the Network class here. Refer to the README for the member
  // variables, constructors, and member functions needed.
  //
  // If you were the "driver" for the Phone class, then switch roles
  // with your lab partner and act as the "navigator" for this class.
  // ===============================================================
 public:
  void AddPhone(std::shared_ptr<Phone> phone);
  void SendMessage(std::shared_ptr<Message> message,
                   const std::string& recipient);
  void SendMessage(std::shared_ptr<Message> message,
                   const std::vector<std::string>& recipients);

 private:
  std::map<std::string, std::shared_ptr<Phone>> phonebook_;
};