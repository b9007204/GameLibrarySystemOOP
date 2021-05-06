#include "ProfileMenu.h"
#include <string>

ProfileMenu::ProfileMenu(const std::string& title, Application* app, User* currUser) : Menu(title, app), currUser(currUser)
{
    Paint();
}

void ProfileMenu::OutputOptions()
{
    std::string thisUser = app->GetCurrentUser()->GetUsername();

    Line(thisUser + "'s Profile: ");
    Line(" ");

    List<LibraryItem*>* currentGames = currUser->GetMyGames();

    if(currentGames->length() == 0)
    {
        Line("Games:");
        Line("No games owned yet!");
        Line("");
    }
    else
    {

        Line("Games Owned:");

        //Declare variables for better readability

        for (int i = 0; i < currentGames->length(); i++)
        {
            // currentGames.getPosition(i);
            Line(currentGames->getPosition(i)->getGame()->GetName());
        }
    
    }

    std::string usersCredits = std::to_string(currUser->GetCredits());

    Line("");
    Line("");
    Line("Credits Owned:" + std::to_string(currUser->GetCredits()));
    //app->GetCurrentUser()->GetCredits();
}

bool ProfileMenu::HandleChoice(char choice)
{
   
    return true;
}
