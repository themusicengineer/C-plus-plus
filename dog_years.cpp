#include <iostream>
using namespace std;

/* This program calculates the number of human years a dog has lived. */

int main() {
  
  string dog_name;
  // number in years of Buddy's age
  int dog_age;
  // dog's first 2 years = 21 human years
  int early_years = 21;
  // dog's later years
  int later_years;
  // dog's total human years
  int human_years;

  cout << "Enter dog's name: \n";
  cin >> dog_name;

  cout << "Enter dog's age: \n";
  cin >> dog_age;

  later_years = (dog_age - 2) * 4;
  // Buddy's age in human years
  human_years = early_years + later_years;

  cout << "My name is " << dog_name << "! Ruff ruff, I am " << human_years << ".\n";

  return 0;

}