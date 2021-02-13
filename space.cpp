#include <iostream>
using namespace std;

int main() {
  
  double earthWeight;
  double conversionWeight;
  int planetNumber;
  
  cout << "What is your Earth weight in pounds?\n";
  cin >> earthWeight;

  cout << "1. Mercury | 0.38\n";
  cout << "2. Venus   | 0.91\n";
  cout << "3. Mars    | 0.38\n";
  cout << "4. Jupiter | 2.34\n";
  cout << "5. Saturn  | 1.06\n";
  cout << "6. Uranus  | 0.92\n";
  cout << "7. Neptune | 1.19\n";
  
  cout << "Enter the number for the planet you want to fight on.\n";
  cin >> planetNumber;

  switch(planetNumber) {
    case 1: conversionWeight = earthWeight * 0.38;
    break;
    case 2: conversionWeight = earthWeight * 0.91;
    break;
    case 3: conversionWeight = earthWeight * 0.38;
    break;
    case 4: conversionWeight = earthWeight * 2.34;
    break;
    case 5: conversionWeight = earthWeight * 1.06;
    break;
    case 6: conversionWeight = earthWeight * 0.92;
    break;
    case 7: conversionWeight = earthWeight * 1.19;
    break;
  }
  
  cout << "Your new weight is " << conversionWeight << ".\n";
  
}