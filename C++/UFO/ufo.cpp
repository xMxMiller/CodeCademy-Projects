#include <iostream>
#include "ufo_functions.hpp"
#include <string>
#include <vector>

int main() {

  greet();

  std::string codeword = "codecademy";
  std::string answer = "__________";
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  char letter;


  while ((misses < 7) && (answer != codeword)){

    std::cout << "Please enter your guess: ";
    std::cin >> letter;

    for (int i = 0; i < codeword.length(); i++){
      if (letter == codeword[i]){
        answer[i] = letter;
        guess = true;
      }
    }

    if (guess == true){
      std::cout << "Correct";
    }
    else{
      std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses ++;
    }
    display_misses(misses);
    
    display_status(answer, incorrect);
    guess = false;

  }
  end_game(answer,codeword);
  
}