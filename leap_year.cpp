#include <iostream>
using namespace std;

/* This program determines if a year is a leap year or not */

int main() {
  
  int year;

  cout << "Please enter a year.\n";
  cin >> year;
  
  if (year >= 1000 || year <= 9999) {
    if (year % 4 == 0) {
      cout << "Leap year.\n";
    }
    else if ((year % 100 == 0) && !(year % 400 == 0)) {
      cout << "Not a leap year.\n";
    }
    else if (year % 400 == 0) {
      cout << "Leap year.\n";
    }
  }
  else {
    cout << "Not a four-digit number.\n";
  }
}