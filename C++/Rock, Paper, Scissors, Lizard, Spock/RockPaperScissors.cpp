#include <iostream>
#include <stdlib.h>

int main() {

  int user;
  srand (time(NULL));
  int computer = rand()%3+1;
  
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) lizard\n";
  std::cout << "5) spock\n";
  std::cout << "shoot! ";

  std::cin >> user;

  switch (computer){
    case 1:
      std::cout << "Comuter uses rock\n";
      break;
    case 2:
      std::cout << "Computer uses paper\n";
      break;
    case 3:
      std::cout << "Computer uses scissors\n";
      break;
    case 4:
      std::cout << "Computer uses lizard";
      break;
    case 5:
      std::cout << "Computer uses spock";
      break;
  }

  switch (user){
    case 1:
      switch (computer){
        case 1:
          std::cout << "TIE\n";
          break;
        case 2:
          std::cout << "Computer Wins\n";
          break;
        case 3:
          std::cout << "User Wins\n";
          break;
        case 4:
          std::cout << "User Wins";
          break;
        case 5:
          std::cout << "Computer Wins";
          break;
        default:
          std::cout << "Invalid Input\n";
          break;
      }
      break;
    
    case 2:

    switch (computer){
      case 1:
          std::cout << "User Wins\n";
          break;
        case 2:
          std::cout << "TIE\n";
          break;
        case 3:
          std::cout << "Computer Wins\n";
          break;
        case 4:
          std::cout << "Computer Wins\n";
          break;
        case 5:
          std::cout << "User Wins\n";
          break;
        default:
          std::cout << "Invalid Input\n";
          break;
      }
      break;

    case 3:
      switch (computer) {
        case 1:
          std::cout << "Computer Wins\n";
          break;
        case 2:
          std::cout << "User Wins\n";
          break;
        case 3:
          std::cout << "TIE\n";
          break;
        case 4:
          std::cout << "User Wins\n";
          break;
        case 5:
          std::cout << "Computer Wins\n";
          break;
        default:
          std::cout << "Invalid Input\n";
          break;
      }
      break;

    case 4:

      switch (computer){
        case 1:
          std::cout << "Computer Wins\n";
          break;
        case 2:
          std::cout << "User Wins\n";
          break;
        case 3:
          std::cout << "Computer Wins\n";
          break;
        case 4:
          std::cout << "TIE\n";
          break;
        case 5:
          std::cout << "User Wins\n";
          break;
        default:
          std::cout << "Invalid Input\n";
          break;
      }
      break;

    case 5:

      switch (computer){
        case 1:
          std::cout << "User Wins\n";
          break;
        case 2:
          std::cout << "Computer Wins\n";
          break;
        case 3:
          std::cout << "User Wins\n";
          break;
        case 4:
          std::cout << "Computer Wins\n";
          break;
        case 5:
          std::cout << "TIE\n";
          break;
        default:
          std::cout << "Invalid Input\n";
          break;
      }
      break;
  }
}