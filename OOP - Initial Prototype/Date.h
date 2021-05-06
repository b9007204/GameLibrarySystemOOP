#pragma once

#include<string>
#include<ctime>

using namespace std;

class Date
{

    public:
        Date::Date(int,int,int);
        Date();

        string getDate();

        void getCurrentDate();
    private:
        int day;
        int month;
        int year;
};

