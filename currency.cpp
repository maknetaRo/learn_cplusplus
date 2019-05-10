#include <iostream>

int main() 
{
  double p, q, c;
  double dollars;
  std::cout << "Enter number of Mexican Pesos: \n";
  std::cin >> p;
  std::cout << "Enter number of Guatemalan Quetzals: \n";
  std::cin >> q;
  std::cout << "Enter number of Salvadoran Colóns: \n";
  std::cin >> c;
  // from pesos to USD 1p = $0.049
  // from quetzals to USD 1q = $0.13 
  // from colons to USD 1q = $0.0016
  dollars = p * 0.049 + q * 0.13 + c * 0.00167;
  std::cout << "Us Dollars = $" << dollars <<"\n"; 
 
}