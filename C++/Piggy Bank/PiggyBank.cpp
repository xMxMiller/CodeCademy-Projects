#include <iostream>

int main() {
  
  int peso;
  int reais;
  int soles;
  int dollars;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> peso;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >>  soles;

  dollars = (0.00025 * peso) + (0.18 * reais) + (0.26 * soles);

  std::cout << "US Dollars = $" << dollars << "\n";
  
}