#pragma once

#include <string>
#include <iostream>

class Utils
{
  public:
    static std::string getLineFromUser();
    static char getCharFromUser();

    static bool StartsWith(std::string fullText, std::string searchText);  //Search Function

   // char toUpper(std::string inputText); //toUpper function INCOMPLETE

    void addToCredits(int oldCredits, int newCredits);  //Add credits to account
    
    // TODO: 2 versions of ToUpper
};