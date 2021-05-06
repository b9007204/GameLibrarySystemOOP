#include "Player.h"

Player::Player(const std::string& username, const std::string& password, const Date& created, int credit)
	: User(username, password, created, credit)
{
	
}

Player::~Player()
{
	for (int i = 0; i < 2; ++i)
	{
		delete library.getPosition(i);
	}
}

bool Player::HasGame(const std::string game)
{
	for (int i = 0; i < library.length(); i++)
	{
		if (library.getPosition(i)->getGame()->GetName() == game)
		{
			return true;
		}
	}
	return false;
}


List<LibraryItem*>* Player::GetMyGames()
{
	return &library;
}

LibraryItem* Player::GetSpecificGame(std::string gameName)
{
	for (int i = 0; i < library.length(); i++)
	{
		if (library.getPosition(i)->getGame()->GetName() == gameName)
		{
			return library.getPosition(i);
		}
	}
}