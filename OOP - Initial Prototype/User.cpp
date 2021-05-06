#include "User.h"



User::User(const std::string& username, const std::string& password, const Date& created, int credits)
	: username(username), password(password), created(created), credits(credits)
{
}

User::~User()
{
}

const std::string& User::GetUsername() const	
{
	return username;
}
const std::string& User::GetPassword() const
{
	return username;
}

List<LibraryItem*>* User::GetMyGames()
{
	return nullptr;
}


void User::SetMyGames(List<Game*> games) // NOT TESTED
{
	// Clear the current list of owned games
	while(!myGames.isEmpty())
	{
		myGames.deleteFirst();
	}

	// Set the list of owned games to whatever is passed in
	for (int i = 0; games.length(); i++)
	{
		myGames.addAtEnd(games.getPosition(i));
		
	}
}

bool User::HasGame(const std::string game)
{
	/*for (int i = 0; myGames.length(); i++)
	{
		if (myGames.getPosition(i)->GetName() == game)
		{
			return true;
		}
	}*/
	return false;
}

void User::AddCredits(int moreCredit)
{
	credits += moreCredit;
}

int User::GetCredits()
{
	return credits;
}

void User::RemoveCredits(int lessCredit)
{
	credits -= lessCredit;
}
