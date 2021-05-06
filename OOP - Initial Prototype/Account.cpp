#include "Account.h"
#include <iostream>

//Account::Account(const std::string& email, const std::string& password, const Date& created)
//	: email(email), password(password), created(created)
//{
//}

Account::Account(const std::string& email, const std::string& password, const Date& created)
	: email(email), password(password), created(created)
{
}

Account::~Account()
{
	for (int i = 0; i < 3; ++i)
	{
		//delete users[i];		//OLD
		delete users.getPosition(i);
	}
}

List <User*> Account::getUsers()
{
	return users;
}

void Account::addNewUser(User* newUser)
{
	users.addAtEnd(newUser);
}

User* Account::getSpecificUser(const std::string& email)
{

	if(users == nullptr)
	{ 
		std::cout << "Users not defined";
		return nullptr;
	}
	else
	{
		for (int i = 0; i < users.length(); i++)
		{
			User* thisUser = users.getPosition(i);

			if (thisUser->GetUsername() == email)
			{
				return thisUser;
			}

		}
	}
	return nullptr;
}