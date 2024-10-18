// Please fill in below.
// <Sean DeFrank>
// <CPSC 121L-13> (e.g. CPSC 121L-01)
// <10/16/2023>
// <wyvernio@csu.fullerton.edu>
// <wyvernio>
//
// Lab 8-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>
#include <string>
#include <vector>

#include "chirp.h"

int main() {
  std::string input;
  const std::string prompt =
      "\nYou can \"chirp\" a new message to Chirper, "
      "\"like\" an existing chirp, or \"exit\". What do you want to do? ";
  std::cout << prompt;
  std::getline(std::cin, input);

  // ============= YOUR CODE HERE =============
  // 1. Create a vector to hold your chirps.
  // Don't forget to #include <vector> and
  // the header file for the Chirp class.
  // ==========================================
  std::vector<Chirp> chirps;
  int index = 0;
  while (input != "exit") {
    if (input == "chirp") {
      std::string user_message;
      std::cout << "What's your message? ";
      std::getline(std::cin, user_message);

      // =================== YOUR CODE HERE ===================
      // 2. Create a new Chirp object and set the message to
      // user_message. Add the new chirp to the vector.
      // ======================================================
      Chirp chirp;
      chirp.SetMessage(user_message);
      chirps.push_back(chirp);
    } else if (input == "like") {
      std::string user_index_string;
      std::cout << "Which index do you want to like? ";
      std::getline(std::cin, user_index_string);
      int user_index = std::stoi(user_index_string);

      // =================== YOUR CODE HERE ===================
      // 3. Add a like to the Chirp object at index user_index
      // in the vector. You will need to offset user_index
      // to the zero-based indexing that matches your vector.
      // ======================================================
      chirps[user_index - 1].AddLike();
    }
    // ===================== YOUR CODE HERE =====================
    // 4. Print the contents of the chirp vector. You will need
    // to loop through the entries in the vector.
    // Check your formatting matches the README:
    // Show the user indices starting at 1 instead of 0,
    // and include the number of likes.
    // ==========================================================
    // iterate through the chirps list
    index += 1;
    std::cout << "Chirper has " << chirps.size() << " chirps:" << std::endl;
    for (int ch = 0; ch < chirps.size(); ch++) {
      std::cout << (ch + 1) << ". " << chirps[ch].GetMessage() << " ("
                << chirps[ch].GetLikes() << " likes)" << std::endl;
    }
    std::cout << prompt;
    std::getline(std::cin, input);
    if (input == "exit") {
      std::cout << "Goodbye!" << std::endl;
    }
  }
  return 0;
}
