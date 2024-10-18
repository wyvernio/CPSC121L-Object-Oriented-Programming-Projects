
// <Sean DeFrank>
// <CPSC121L> (e.g. CPSC 121L-01)
// <Sep 7th,2023>
// <wyvernio@csu.fullerton.edu>
// <wyvernio>
//
// Lab 2-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>

int main() {

  int credit_score;
  std::cout << "Thank you for applying for the Tuffy Credit card.\n"
            << "Please enter your credit score.";
  std::cout << "Credit Score: ";
  std::cin >> credit_score;


  if (credit_score >= 0 && credit_score <= 579) {
    std::cout << "Unfortunately, you are ineligible for Tuffy credit cards at the moment. Please try again at a later date."
                  "because you are below 580. \n"
              << "Please try again at a later date." << std::endl
              << "Thank you for using our program, please come again!\n";
  } else if (credit_score <= -1) {
    std::cout << "A negative credit score is invalid. " << std::endl;
  }
    else if (credit_score >= 851) {
    std::cout << "That is an invalid credit score. "
              << "Please run the program again and provide a valid credit score.";
  }
    else if (credit_score == 580 || credit_score <= 669) {
    std::cout << "You are eligible for the Silver Tuffy Card." << std::endl
              << "Thank you for using our program, please come again!\n";
  }
   else if (credit_score == 670 || credit_score <= 799) {
    std::cout << "You are eligible for the Gold Tuffy Card." << std::endl
              << "Thank you for using our program, Please come again!\n";
  }
   else if (credit_score == 800 || credit_score <= 850) {
    std::cout << "You are eligible for the Platinum Tuffy Card." << std::endl
              <<"Thank you for using our program, please come again! \n";
  }

  return 0;
}
