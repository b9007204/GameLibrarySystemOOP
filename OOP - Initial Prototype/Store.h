#pragma once

#include "Game.h"

#include "ListT.h"

class Store
{
	public:
		Store();
		~Store();

		//Game* games[9] = { }; // TODO: should be a dynamic collection
		List<Game*>& getGames();

		List<Game*> SearchForGame(std::string gameToSearch);//Search Functin
		List<Game*> getSearchedGames();
	private:
	List<Game*> games;
	List<Game*> searchedGames;
};