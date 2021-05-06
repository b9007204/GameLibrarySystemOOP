#pragma once

#include <string>
#include <iostream>

class Utils
{
  public:
    static std::string getLineFromUser();
    static char getCharFromUser();

    static bool StartsWith(std::string fullText, std::string searchText);  //Search Function

    static std::string toUpper(std::string lowercaseString);

    static int getRandomNumber(int lowRange, int highRange);

    static std::string FormatPlaytime(int minutes);

    void addToCredits(int oldCredits, int newCredits);  //Add credits to account
    
    // TODO: 2 versions of ToUpper
};