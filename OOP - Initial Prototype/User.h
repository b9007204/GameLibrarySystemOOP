#pragma once

#include <string>
#include "Date.h"
#include "ListT.h"
#include "Game.h"
#include "LibraryItem.h"


class User
{
	public:
		User(const std::string&, const std::string&, const Date&, int);
		virtual ~User();
		const std::string& GetUsername() const;
		const std::string& GetPassword() const;

		virtual List<LibraryItem*>* GetMyGames();
		virtual bool HasGame(const std::string game);

		void SetMyGames(List<Game*> games);

		/*List<LibraryItem*> library = nullptr;*/

		void AddCredits(int credit);

		int GetCredits();

		void RemoveCredits(int lessCredit);

	private:
		std::string username;
		std::string password;

		List<Game*> myGames;

		//std::string created;  // TODO: replace with custom Date class, currently YYYY-MM-DD
		Date created;			//replaced from above 

		int credits;
};