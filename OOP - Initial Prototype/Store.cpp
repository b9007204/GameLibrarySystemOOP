#include "Store.h"
#include "Utils.h"


Store::Store()
{
}

Store::~Store()
{
	for (int i = 0; i < 9; ++i)
	{
		delete games.getPosition(i);		
	}
}

List<Game*>& Store::getGames() {
	return games;
}//return the games (LIST)

List<Game*> Store::getSearchedGames()
{
	return searchedGames;
}



List<Game*> Store::SearchForGame(std::string gameToSearch)	//search function	UNFINISHED
{
	
	List<Game*> foundGames;


	for (int i = 0; i < getGames().length(); i++)
	{
		if (Utils::StartsWith(getGames().getPosition(i)->GetName(), gameToSearch) == true)
		{

			foundGames.addAtEnd(getGames().getPosition(i));
			//getSearchedGames().addAtEnd(getGames().getPosition(i));
		}


	}

	return foundGames;
}