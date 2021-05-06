#pragma warning(disable : 4996)

#include "Date.h"
#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

using namespace std;

Date::Date(int day, int month, int year)
    : day(day), month(month), year(year)
{
    
}
Date::Date()
{

}



string Date::getDate()
{
    string date = to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    return date;
}

void Date::getCurrentDate() 
{
    auto startTime = std::chrono::system_clock::now();

    auto endTime = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = endTime-startTime;

    std::time_t end_time = std::chrono::system_clock::to_time_t(endTime);

    std::cout << "Time is: " <<std::ctime(&end_time);
}


