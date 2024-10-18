// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 8-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "bubble.h"
// ========================= YOUR CODE HERE =========================
// This implementation file (bubble.cc) is where you should implement
// the member functions declared in the header (bubble.h), only
// if you didn't implement them inline within bubble.h:
//   1. GetRadius
//   2. SetRadius
//   3. CalculateVolume
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Bubble class.
// ===================================================================
double Bubble::GetRadius() const{return radius_;}

void Bubble::SetRadius(double radius) { radius_ = radius;}

double Bubble::CalculateVolume() const{
        const double k_pi = 3.1415;
        return 4.0/ 3.0 * k_pi * radius_ * radius_ * radius_;}

// ========================= YOUR CODE HERE =========================
// Implement the CombineBubbles function you declared in bubble.h
//
// Since CombineBubbles is NOT in the Bubble class, you should not
// specify the name of the class with the :: format.
// ===================================================================
Bubble CombineBubbles(const Bubble& bubble1, const Bubble& bubble2){
    Bubble result {};
    //Set the radius of result equal to the sum of radii of bubble1 and bubble2
    double combined_radius = bubble1.GetRadius() + bubble2.GetRadius();
    result.SetRadius(combined_radius);
    return result;
}