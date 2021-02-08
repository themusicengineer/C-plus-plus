#include <iostream>
using namespace std;

int main() {
  
  double pesos, reais, soles;
  double dollars;
  
  cout << "Enter number of Colombian Pesos: " << "\n";
  cin >> pesos;

  cout << "Enter number of Brazilian Reais: " << "\n";
  cin >> reais;

  cout << "Enter number of Peruvian Soles: " << "\n";
  cin >> soles;

  // Conversion rates 10:54 am 02/08/21 PST

  // 1 Peso = 0.050 USD
  // 1 Real = 0.19 USD
  // 1 Sol = 0.27 USD

  // 20.16 Peso = 1 USD
  // 5.36 Real = 1 USD
  // 3.64 Sol = 1 USD

  dollars = 0.050 * pesos + 0.19 * reais + 0.27 * soles;

  cout << "US Dollars = $" << dollars << "\n";

  return 0;
}