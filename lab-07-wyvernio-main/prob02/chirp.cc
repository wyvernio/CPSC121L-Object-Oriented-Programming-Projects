// Please fill in below.
// <Sean DeFrank>
// <CPSC 121L-13> (e.g. CPSC 121L-01)
// <10/16/2023>
// <wyvernio@csu.fullerton.edu>
// <wyvernio>
//
//
// Lab 8-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "chirp.h"
// ========================= YOUR CODE HERE =========================
// This implementation file (chirp.cc) is where you should implement
// the member functions declared in the header (chirp.h), only
// if you didn't implement them inline within chirp.h:
//   1. SetMessage
//   2. GetMessage
//   3. The two AddLike member function overloads.
//   4. GetLikes
//   5. The three Chirp constructor overloads.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Chirp class.
// ===================================================================

Chirp ::Chirp() {
  message = "";
  likes = 0;
}

Chirp ::Chirp(std::string message) {
  this->message = message;
  likes = 0;
}

Chirp ::Chirp(std::string message, int likes) {
  this->message = message;
  this->likes = likes;
}

std::string Chirp ::GetMessage() const {
  return message;
}
// getter of likes
int Chirp ::GetLikes() const {
  return likes;
}

void Chirp ::SetMessage(std::string message) {
  this->message = message;
}

void Chirp ::SetLikes(int likes) {
  this->likes = likes;
}

void Chirp ::AddLike() {
  this->likes += 1;
}
void Chirp ::AddLike(int likes) {
  this->likes += likes;
}