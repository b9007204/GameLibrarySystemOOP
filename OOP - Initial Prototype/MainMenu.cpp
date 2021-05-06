#include "MainMenu.h"
#include <string>
#include "ProfileMenu.h"
#include "CreditMenu.h"
#include "LoginMenu.h"

MainMenu::MainMenu(const std::string& title, Application* app) : Menu(title, app)
{
	Paint(); // required in constructor
}

void MainMenu::OutputOptions()
{
	if(app->IsUserLoggedIn())	//Greeting message
	{
		std::string thisUser = app->GetCurrentUser()->GetUsername();

		Line("Hello " + thisUser + "!");
		Line(" ");
	}


	Option('S', "Browse Store");

	if (app->IsUserLoggedIn())
	{
		
		Option('P', "View Profile");
		Option('F', "Search My Games");
		Option('C', "Purchase Credits");
		Option('L', "Logout");
	}
	else
	{
		Option('L', "Login");
	}
}

bool MainMenu::HandleChoice(char choice)
{
	switch (choice)
	{
	case 'S':
	{
		StoreMenu("STORE", app, app->GetStore().getGames());
	} break;
	case 'L':
	{
		if (app->IsUserLoggedIn())
		{
			std::string answer = Question("Are you sure?");
			if (answer == "y" || answer == "Y")
			{
				app->LogoutUser();
			}
		}
		else
		{
			// this would need to go to a LoginMenu - similar to StoreMenu
			// instead we just set logged in to true on the main app object

			LoginMenu("Login", app);//	commented, doesnt work

			//app->LoginUser(app->GetCurrentAccount()->getUsers().getPosition(0)); //THIS WORKS but only logs in alice (first user)
		}
	} break;
	case 'P':
	{
		if (app->IsUserLoggedIn())
		{

			ProfileMenu("Profile", app, app->GetCurrentUser());
			//BlockingMessage("Working on this");
			// this needs to go to a profile page - similar to StoreMenu
			// notice the if - this only works if somebody is logged in

			//StoreMenu("Profile", app, )

		}
	} break;

	case 'F':	//Search for games
	{
		if (app->IsUserLoggedIn())
		{
			std::string userSearchChoice = Question("Enter a game to Find");

			StoreMenu("Search", app,  app->GetStore().SearchForGame(userSearchChoice));


		}
	} break;

	case 'C' :	//Load Credit Menu
	{
		CreditMenu("Credit", app);
		//BlockingMessage("Implement this");
	}

	}

	return false;
}