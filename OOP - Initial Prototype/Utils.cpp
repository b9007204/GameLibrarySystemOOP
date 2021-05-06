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

    if (std::tolower(string1.find(string2)) != std::string::npos)
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

//char Utils::toUpper(std::string inputText)
//{
//   std::string newStr = inputText;
//   char string[] = newStr;
//
//
//}
