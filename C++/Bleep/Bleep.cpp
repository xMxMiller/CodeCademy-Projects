#include <iostream>
#include <vector>
#include <string>
#include "functions.hpp"

int main(){
  std::string word = "broccoli";

  std::string text = "This contains the word broccoli, and it also contains broccoli";

  bleep(text, word);

  std::cout << text << "\n";
}