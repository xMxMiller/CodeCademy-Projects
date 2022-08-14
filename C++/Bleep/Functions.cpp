#include <string>
#include "functions.hpp"

void bleep(std::string &text, std::string word){

  std::string censour;
  int find = 0;
  std::string search_text = text;
  
  for (int i = 0; i < word.length(); i++){
    censour = censour + "*";
  }


  while (text.find(word,find) != std::string::npos){
    //if (text.find(word)){
      find = text.find(word,find + 1);
      text.replace(find, word.length(), censour);
      search_text = text.substr(find, text.length());
      find ++;
    //}
  }

  find = 0;
}