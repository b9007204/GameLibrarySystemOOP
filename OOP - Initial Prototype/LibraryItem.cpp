#include "LibraryItem.h"
#include <cstdlib>


LibraryItem::LibraryItem(const Date& purchased, Game* game)
	: purchased(purchased), game(game)
{
}

LibraryItem::~LibraryItem()
{
}


Game* LibraryItem::getGame()
{
	return game;
}

int LibraryItem::GetTotalPlaytime()
{
	return totalPlaytime;	
}

void LibraryItem::SetTotalPlaytime(int pt)
{
	this->totalPlaytime = pt;
}

void LibraryItem::AddPlaytime()
{
	totalPlaytime += Utils::getRandomNumber(10, 60);
}

