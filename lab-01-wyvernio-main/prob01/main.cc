#include <iomanip>
#include <iostream>

int main() {
  double meal_cost;
  double tip;
  double taxes;
  double taken_tip;
  double new_tip;
  double total_cost;

  std::cout << "Please input meal cost: ";
  std::cin >> meal_cost;
  std::cout << "Please input tip percentage: ";
  std::cin >> tip;

  taxes = meal_cost * .075;
  new_tip = tip / 100;
  taken_tip = meal_cost * new_tip;
  total_cost = meal_cost + taken_tip + taxes;

  std::cout << "\nRestaurant Bill\n" << "====================" << std::endl;
  std::cout << "Subtotal: $" << meal_cost << std::endl;
  std::cout << "Taxes: $" << std::fixed << std::setprecision(2) << taxes << std::endl;
  std::cout << "Tip: $" << std::fixed << std::setprecision(2) << taken_tip << std::endl;
  std::cout << "====================\n" << "Total: $" << total_cost << std::endl;
  


  return 0;
}
