#include <iostream>

int main(){

  for (int i = 1; i < 101; i++){
    
    if (((i % 3) == 0) & ((i % 5) == 0)){
      std::cout << "FizzBuzz";
    }
    else if ((i % 5) == 0){
      std::cout << "Buzz";
    }
    else if ((i % 3) == 0){
      std::cout << "Fizz";
    }
    else {
      std::cout << i;
    }
    std::cout << "\n";
  }
}