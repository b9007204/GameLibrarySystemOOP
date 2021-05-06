#pragma once

#include <string>
#include "Player.h"

//includes
#include "Date.h"
#include "ListT.h"


class Account
{
	public:
		Account(const std::string&, const std::string&, const Date&);
		~Account();

		//User* users[3] = { }; // TODO: replace with custom List<T> class
		List <User*> getUsers(); //REPLACED FROM ABOVE

		void addNewUser(User* newUser);

		User* getSpecificUser(const std::string& email);




	private:
		std::string email;
		std::string password;

		//std::string created;  // TODO: replace with custom Date class, currently YYYY-MM-DD
		Date created;	//REPLACED FROM ABOVE 

		List<User*> users;
};