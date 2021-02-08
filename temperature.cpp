#include <iostream>
using namespace std;

int main() {
  
// New York City 31 degrees F on 02/07/2021 at 06:20 PM

double tempf = 31.0;
double tempc;  
  
tempc = (tempf - 32)/1.8;

cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}