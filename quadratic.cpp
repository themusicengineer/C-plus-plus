#include <iostream>
#include <cmath>
using namespace std;

/* This program calculates the quadratic formula */

int main() {
  
  double a, b, c;
  double root1, root2;

  cout << "This program calculates the solution to the quadratic formula.\n\n";

  cout << "Enter a: \n";
  cin >> a;

  cout << "Enter b: \n";
  cin >> b;

  cout << "Enter c: \n";
  cin >> c;

  cout << "Calculating...\n\n";
  
  root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
  root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);

  // Outputting the solution
  cout << "Root 1 is " << root1 << "\n";
  cout << "Root 2 is " << root2 << "\n";

  return 0;
}