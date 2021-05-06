#include "Utils.h"

std::string Utils::getLineFromUser()
{
    std::string input;
    std::getline(std::cin, input);
    return input;
}

char Utils::getCharFromUser()
{
    return toupper(getLineFromUser()[0]);
}

//Search Function==============================================
bool Utils::StartsWith(const std::string fullText, const std::string searchText)
{
    std::string string1 = fullText;
    std::string string2 = searchText;

    if (std::toupper(string1.find(string2)) != std::string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }

}


void Utils::addToCredits(int oldCredits, int newCredits)
{
    int int1 = oldCredits;
    int int2 = newCredits;

    newCredits =+ oldCredits;
}

std::string Utils::toUpper(std::string lowercaseString)
{
    /*for (int i = 0; i < lowercaseString.length(); i++)
    {
        lowercaseString[i] = toupper(lowercaseString[i]);
    }*/

    std::string lowCase = lowercaseString;
    std::string upCase;

    for (int i = 0; i < lowCase.length(); i++)
    {
        if (lowCase.at(i) >= 97 && lowCase.at(i) <= 122)
        {
            upCase += (lowCase.at(i) - 32);
        }
        else
        {
            upCase += lowCase.at(i);
        }
    }

    return upCase;

}


int Utils::getRandomNumber(int lowRange, int highRange)
{
    double randTime = 0;
    while (randTime < lowRange)
    {
        randTime = (rand() % highRange);

    }

    return randTime;
    

}

std::string Utils::FormatPlaytime(int mins)
{
    std::string finalString = "";
    if (mins > 60)
    {
        
        finalString = std::to_string(mins / 60) + "." + std::to_string(mins % 60) + " hours played";
    }
    else
    {
        finalString = std::to_string(mins) + " minutes played";
    }

    return finalString;
}