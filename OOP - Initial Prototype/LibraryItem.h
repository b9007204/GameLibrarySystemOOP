#pragma once

#include "Game.h"

#include"Date.h"

class LibraryItem
{
	public:
		LibraryItem(const Date&, Game*);
		~LibraryItem();

		Game* getGame();
	/*	const Game* GetOwnedGames() const;*/
	private:
		Game *game;
		const Date purchased;  // TODO: replace with custom Date class, currently YYYY-MM-DD ===== DONE
};