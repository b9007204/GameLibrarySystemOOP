#include "StoreMenu.h"


StoreMenu::StoreMenu(const std::string& title, Application* app, List<Game*> games) : Menu(title, app), games(games)
{
	Paint(); // required in constructor
}

void StoreMenu::OutputOptions()
{
	if (app->IsUserLoggedIn())
	{
	for (int i = 0; i < games.length(); i++)
	{
		// adding 1 so the display is nicer for the user
		if (app->GetCurrentUser()->HasGame(games.getPosition(i)->GetName()))
		{
			Option(i + 1, games.getPosition(i)->GetName() + " (Game Owned)");
		}
		else
		{
			Option(i + 1, games.getPosition(i)->GetName());
		}
	}

	}
	
	else
	{
		for (int i = 0; i < games.length(); i++)
		{
			// adding 1 so the display is nicer for the user
			Option(i + 1, games.getPosition(i)->GetName());
		}
	}
}

bool StoreMenu::HandleChoice(char choice)
{
	// since we are using numbers here we shift the char down by '1'
	// this puts '1' as 0, '2' as 1, '3' as 2, '4' as 3, etc.
	// this reverses the + 1 above and lets us do the range check below
	int index = choice - '1';

	if (index >= 0 && index < games.length())
	{
		//	     std::string& title,             Application* app,     Game* game
		GameMenu(games.getPosition(index)->GetName(), app, games.getPosition(index));		

		//BlockingMessage("Not implemented, press return to continue THIS ONE ");
		// go to game detail page
	}

	return false;
}

List<Game*> StoreMenu::getGames()
{
	return games;
}