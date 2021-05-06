#include "GameMenu.h"

GameMenu::GameMenu(const std::string& title, Application* app, Game* game) : Menu(title, app), game(game)
{
    Paint();
}

void GameMenu::OutputOptions()
{
        Line(game->GetDescription());
        Line("Price: " + std::to_string(game->GetCost()) + " Credits");
        Line("");
        if (app->IsUserLoggedIn())
        {
        Line("(You have " + std::to_string(app->GetCurrentUser()->GetCredits()) + " Credits)");
        Line("");
        }
    

        Option('P', "Buy Game");  
}

bool GameMenu::HandleChoice(char choice)
{

    if (app->IsUserLoggedIn())
    {

    switch (choice)
    {
        case 'P':   //purchase
        {
            if (game->GetCost() < app->GetCurrentUser()->GetCredits())
            {
            LibraryItem* thisGame = new LibraryItem(Date(17, 06, 2018), game);

            int costOfThisGame = thisGame->getGame()->GetCost();

            app->GetCurrentUser()->GetMyGames()->addAtEnd(thisGame);
            app->GetCurrentUser()->RemoveCredits(costOfThisGame);
            //remove credits
            }
            else
            {
                BlockingMessage("You dont have enough credits to purchase this game.");
            }
            
            return true;
        }

        case 'B':
        {
            return true;
        }

        default:
        {
            return false;
        }
    }

    }

    else
    {
        switch (choice)
        {
            case 'P':
            {
                BlockingMessage("Please Log in to buy games!");
            }

            case 'B':
            {
                return true;
            }

            default: 
            {
                return false;
            }
        }
    }

}