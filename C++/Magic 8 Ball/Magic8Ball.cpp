#include <iostream>
#include <cstdlib>

int main(){

  srand(time(NULL));
  int answer = std::rand() % 10;

  std::cout << "MAGIC 8.BALL:\n";

  switch (answer){
    case 0:
      std::cout << "It is certain.";
      break;
    case 1:
      std::cout << "1";
      break;
    case 2:
      std::cout << "2";
      break;
    case 3:
      std::cout << "3";
      break;
    case 4:
      std::cout << "4";
      break;
    case 5:
      std::cout << "5";
      break;
    case 6:
      std::cout << "6";
      break;
    case 7:
      std::cout << "7";
      break;
    case 8:
      std::cout << "8";
      break;
    case 9:
      std::cout << "9";
      break;
    case 10:
      std::cout << "Very doughtful.";
      break;
  }
    
}