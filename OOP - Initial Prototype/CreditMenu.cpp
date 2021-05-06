#include "CreditMenu.h"

CreditMenu::CreditMenu(const std::string& title, Application* app) : Menu(title, app)
{
    Paint();
}

void CreditMenu::OutputOptions()
{
    Line("Select the amount of credits you wish to buy:");
    Line("");
    Option('1', "10");
    Option('2', "50");
    Option('3', "100");
    Option('4', "250");
    Option('5', "500");
    Option('6', "1000");
    Option('7', "2000");
}

bool CreditMenu::HandleChoice(char creditChoice)
{
    switch (creditChoice)
    {
        case '1':
        {
            app->GetCurrentUser()->AddCredits(10);
            break;
        }

        case '2':
        {
            app->GetCurrentUser()->AddCredits(50);
            break;
        }

        case '3':
        {
            app->GetCurrentUser()->AddCredits(100);
            break;
        }

        case '4':
        {
            app->GetCurrentUser()->AddCredits(250);
            break;
        }
        case '5':
        {
            app->GetCurrentUser()->AddCredits(500);
            break;
        }
        case '6':
        {
            app->GetCurrentUser()->AddCredits(1000);
            break;
        }
        case '7':
        {
            app->GetCurrentUser()->AddCredits(2000);
            break;
        }
    }

    return true;
}