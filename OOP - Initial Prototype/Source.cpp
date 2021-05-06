#include <iostream>
#include <string>
#include "Application.h"
#include "Account.h"
#include "User.h"
#include "Player.h"
#include "Admin.h"
#include "Utils.h"
#include "MainMenu.h"
#include "Date.h"
#include "ListT.h"


// TODO: Remove from global scope once menu system is integrated
	//APPLICATION APP REMOVED


void createHardcodedTestData(Application* app)
{
	//Application app;
	
	//STORE SETUP====================================================================================================================================

	// Setup store with some games
	/*app.GetStore().games[0] = new Game("The Witness", "Explore a nice island and solve puzzles.", 2999, 5);
	app.GetStore().games[1] = new Game("Braid", "A time twisting puzzle game.", 499, 15);
	app.GetStore().games[2] = new Game("Factorio", "Build a complicated factory in space.", 1599, 12);
	app.GetStore().games[3] = new Game("LIMBO", "Watch out for that spider.", 299, 12);
	app.GetStore().games[4] = new Game("INSIDE", "What are those scientists even doing?!", 1299, 15);						OLD!!!
	app.GetStore().games[5] = new Game("Portal 2", "Play around with physics. Shoot the moon.", 1999, 15);
	app.GetStore().games[6] = new Game("Half Life 3", "It's never coming out.", 5999, 18);
	app.GetStore().games[7] = new Game("NUVAVULT", "A game where 2D and 3D collide.", 299, 18);
	app.GetStore().games[8] = new Game("Path", "Draw nice shapes between 2 big dots.", 299, 15);*/

	 //Setup store with some games
	app->GetStore().getGames().addAtEnd(new Game("The Witness", "Explore a nice island and solve puzzles.", 2999, 5));
	app->GetStore().getGames().addAtEnd(new Game("Braid", "A time twisting puzzle game.", 499, 15));
	app->GetStore().getGames().addAtEnd(new Game("Factorio", "Build a complicated factory in space.", 1599, 12));
	app->GetStore().getGames().addAtEnd(new Game("LIMBO", "Watch out for that spider.", 299, 12));
	app->GetStore().getGames().addAtEnd(new Game("INSIDE", "What are those scientists even doing?!", 1299, 15));						//NEW
	app->GetStore().getGames().addAtEnd(new Game("Portal 2", "Play around with physics. Shoot the moon.", 1999, 15));				//Adds games to list (LIST)
	app->GetStore().getGames().addAtEnd(new Game("Half Life 3", "It's never coming out.", 5999, 18));
	app->GetStore().getGames().addAtEnd(new Game("NUVAVULT", "A game where 2D and 3D collide.", 299, 18));
	app->GetStore().getGames().addAtEnd(new Game("Path", "Draw nice shapes between 2 big dots.", 299, 15));

	//STORE SETUP====================================================================================================================================


	//CREATE USERS===================================================================================================================================

	//// Create some users
	//Player* u1 = new Admin("Alice", "password", "2018-06-16");
	//Player* u2 = new Player("Bob", "password", "2018-09-19");							//OLD!!
	//Player* u3 = new Player("Charlie", "password", "2018-09-24");

	// Create some users
	Player* u1 = new Admin("Alice", "password", Date(16, 6, 2018),0);
	Player* u2 = new Player("Bob", "password", Date(19, 9, 2018),0);							//NEW
	Player* u3 = new Player("Charlie", "password", Date(24, 9, 2018),0);						//Adds new players but uses date class instead of hardcode
	
	
	//STILL NEEDS CREDITS
	//CREATE USERS===================================================================================================================================



	// With some games in their library
	//u1->library[0] = new LibraryItem("2018-06-17", app->GetStore().games[7]);
	//u1->library[1] = new LibraryItem("2018-06-18", app.GetStore().games[1]);
	//u2->library[0] = new LibraryItem("2018-09-19", app.GetStore().games[2]);				//OLD
	//u2->library[1] = new LibraryItem("2018-09-19", app.GetStore().games[3]);
	//u3->library[0] = new LibraryItem("2018-09-24", app.GetStore().games[3]);
	//u3->library[1] = new LibraryItem("2018-09-30", app.GetStore().games[6]);

	//u1->library.addInFront(new LibraryItem(Date(17, 06, 2018), app->GetStore().getGames().getPosition(1)));
	//u1->library.addInFront(new LibraryItem(Date(17, 06, 2018), app->GetStore().getGames().getPosition(1)));
	//u2->library.addInFront(new LibraryItem(Date(17, 06, 2018), app->GetStore().getGames().getPosition(2)));
	//u2->library.addInFront(new LibraryItem(Date(17, 06, 2018), app->GetStore().getGames().getPosition(3)));		//NEW 
	//u3->library.addInFront(new LibraryItem(Date(17, 06, 2018), app->GetStore().getGames().getPosition(3)));		//Used 
	//u3->library.addInFront(new LibraryItem(Date(17, 06, 2018), app->GetStore().getGames().getPosition(6)));


	// Make an account and attach the users
	Account* newAcc = new Account("alice@shu.com", "password", Date(16, 06, 2018));
	newAcc->addNewUser(u1);
	newAcc->addNewUser(u2);
	newAcc->addNewUser(u3);


	app->account.addInFront(newAcc);
	//app->account[0]-> FIX THIS 
	app->LoginAccount(app->account.first());

	
	/*app->accounts[0]->users[0] = u1;
	app->accounts[0]->users[1] = u2;
	app->accounts[0]->users[2] = u3;*/

	// TODO: We need a login menu for accounts, for now we log in the only account
	//app->LoginAccount("alice@shu.ac.uk", "password");

}



void main()
{
	// TODO: Remove call to dummy data, instead use Load and Save

	Application app;
	createHardcodedTestData(&app);	//this stays

	MainMenu("MAIN MENU", &app);

	
	
	// TODO: app.Load();

	 // TODO: replace with proper menu system

	// TODO: app.Save();
}