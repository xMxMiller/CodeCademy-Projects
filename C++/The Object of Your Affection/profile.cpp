#include <string>
#include <vector>
#include <iostream>
#include "profile.hpp"
  
  Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country)
  : name(new_name), age(new_age), city(new_city), country(new_country) {}

  std::string Profile::view_profile(){
    std::string profile;

    profile = name + ", " + std::to_string(age) + ", " + city + ", " + country;
    for (int i = 0; i < hobbies.size(); i++){
      profile = profile + ", " + hobbies[i];
    }
    return profile;}

    void Profile::add_hobby(std::string new_hobby){
      hobbies.push_back(new_hobby);
    }