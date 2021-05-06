#include "LibraryItem.h"

LibraryItem::LibraryItem(const Date& purchased, Game* game)
	: purchased(purchased), game(game)
{
}

LibraryItem::~LibraryItem()
{
}

//const Game* LibraryItem::GetOwnedGames() const
//{
//	return game;
//}

Game* LibraryItem::getGame()
{
	return game;
}
