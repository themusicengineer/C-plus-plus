#include <iostream>
using namespace std;

int main() {
  
  double height, weight, bmi;
  
  cout << "This program calculates your BMI.\n\n";
  // Ask user for their height
  
  cout << "Type in your height (m): \n";
  cin >> height;
  
  // Now ask the user for their weight and calculate BMI
  cout << "Type in your weight (kg): \n";
  cin >> weight;

  bmi = weight / (height * height);
  
  cout << "Your BMI is: " << bmi << ".";
  
  return 0;

}