#include <iostream>

int main() {
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1;
  int answer2;
  int answer3;
  int answer4;

  int max = 0;
  std::string house;

  std::cout << "The Sorting Hat Quiz\n";
  std::cout << "Q1) When I'm dead, I want people to remember mas as:\n\n\t1) The Good\n\t2) The Great\n\t3) The Wise\n\t4) The Bold\n\n";

  std::cin >> answer1;

  switch (answer1){
    case 1:
      hufflepuff ++;
      break;
    case 2:
      slytherin ++;
      break;
    case 3:
      ravenclaw ++;
      break;
    case 4:
      gryffindor ++;
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }
  
  std::cout << "Q2) Dawn or Dusk?\n\n\t1) Dawn\n\t2) Dusk\n\n";

  std::cin >> answer2;

  switch (answer2){
    case 1:
      gryffindor ++;
      ravenclaw ++;
      break;
    case 2:
      hufflepuff ++;
      slytherin ++;
      break;
    default:
      std::cout << "Invalid Input\n";
      break;
  }

  std::cout << "Q3 Which kind of instrument most pleases your ear?\n\n\t1) The violin\n\t2) The trumpet\n\t3) The piano\n\t4) The Drum\n\n";

  std::cin >> answer3;

  switch (answer3){
    case 1:
      slytherin ++;
      break;
    case 2:
      hufflepuff ++;
      break;
    case 3:
      ravenclaw ++;
      break;
    case 4:
      gryffindor ++;
      break;
    default:
      std::cout << "Invalid Input\n";
      break;
  }

  std::cout << "Q4 Which road tempts you the most?\n\n\t1) The wide, sunny grassy lane\n\t2) The narrow, dark, lantern-lit alley\n\t3) The twisting, leaf-strewn path through woods\n\t4) The cobbled street lined (acient buildings)\n";

  std::cin >> answer4;

  switch (answer4){
    case 1:
      hufflepuff ++;
      break;
    case 2:
      slytherin ++;
      break;
    case 3:
      gryffindor ++;
      break;
    case 4:
      ravenclaw ++;
      break;
    default:
      std::cout << "Invalid Input\n";
      break;
  }

  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }

  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }

  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }

  std::cout << house << "!\n";
}