#include <iostream>

int main() {
  
  int dog_age = 3;
  int early_years = 21; //First 2 dog years equal 21 human years
  int later_years = (dog_age - 2) * 4; //Later dogs years equate to 4 human years
  int human_years = early_years + later_years;

  std::cout << "Your dog is " << human_years << " in human years.\n";
  
}