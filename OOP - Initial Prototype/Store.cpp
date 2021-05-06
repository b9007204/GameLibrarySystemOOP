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

	std::string StringToSearch = Utils::toUpper(gameToSearch);

	

	for (int i = 0; i < getGames().length(); i++)
	{
		std::string gameName = Utils::toUpper(getGames().getPosition(i)->GetName());

		if (Utils::StartsWith(gameName, StringToSearch) == true)
		{

			foundGames.addAtEnd(getGames().getPosition(i));
			//getSearchedGames().addAtEnd(getGames().getPosition(i));
		}


	}

	return foundGames;
}