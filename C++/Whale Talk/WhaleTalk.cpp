#include <iostream>
#include <vector>
#include <string>

int main() {

  std::string input = "hi, human";

  std::vector<char> vowels = {'a','e','i','o','u'};

  std::vector<char> result;

    for (int i = 0;i < input.length(); i++){
      for (int c = 0; c < vowels.size(); c++){
        if (input[i] == vowels[c]){
          if (input[i] == 'e' || input[i] == 'u'){
            result.push_back(input[i]);
            result.push_back(input[i]);
          }
          else{
            result.push_back(input[i]);
          }
        }
      }
    }

    for (int b = 0; b < result.size(); b++){
      std::cout << result[b];
    }
    std::cout << "\n";
}