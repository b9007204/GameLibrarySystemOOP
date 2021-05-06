#pragma once

#include "Game.h"

#include"Date.h"

#include "Utils.h"

class LibraryItem
{
	public:
		LibraryItem(const Date&, Game*);
		~LibraryItem();

		Game* getGame();
		int GetTotalPlaytime();
		void SetTotalPlaytime(int pt);
		void AddPlaytime();
	/*	const Game* GetOwnedGames() const;*/
	private:
		Game *game;
		const Date purchased;  // TODO: replace with custom Date class, currently YYYY-MM-DD ===== DONE
		int totalPlaytime = 0;
};