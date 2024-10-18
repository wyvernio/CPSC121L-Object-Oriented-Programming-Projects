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
#ifndef CHIRP_H
#define CHIRP_H

#include <string>
// ======================= YOUR CODE HERE =======================
// Write the Chirp class here, containing two member variables:
// one to store the message and one to track the number of likes.
// Then, define the following constructor overloads:
// 1. A default constructor, which initializes the message to the
// empty string "", and initializes the number of likes to 0.
// 2. A non-default constructor, which accepts a message as input
// and initializes the message to that input, and sets the
// number of likes to 0.
// 3. A non-default constructor, which accepts a message as input
// and initializes the message to that input, and also accepts
// a like count as input, and initializes the like count to that.
//
// Finally, define the following member functions:
// 1. The accessor (getter) function for the message.
// 2. The mutator (setter) function for the message.
// 3. The two AddLike member function overloads.
// 4. The GetLikes member function.
//
// Note: mark functions that do not modify the member variables
// as const, by writing `const` after the parameter list.
// ===============================================================
class Chirp {
 private:
  std::string message;
  int likes;

 public:
  Chirp();
  Chirp(std::string message);
  Chirp(std::string message, int likes);

  std::string GetMessage() const;
  int GetLikes() const;

  void SetMessage(std::string message);
  void SetLikes(int likes);

  void AddLike();
  void AddLike(int likes);
};
#endif
