#pragma once

#include <string>
#include "LibraryItem.h"
#include "User.h"

#include "ListT.h"
#include "Date.h"

class Player : public User
{
	public:
		Player(const std::string&, const std::string&, const Date&, int credits);
		~Player();

		bool HasGame(const std::string game) override;

		List<LibraryItem*>* GetMyGames() override;

		LibraryItem* GetSpecificGame(std::string gameName) override;

		//LibraryItem* library[2] = { }; // TODO: replace with custom List<T> class
		List<LibraryItem*> library;		//replaced from above							
	private:
};