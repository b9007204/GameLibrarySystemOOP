#include "Application.h"

Application::Application() : currentAccount(nullptr), currentUser(nullptr)
{
}

Application::~Application()
{
	for (int i = 0; i < 1; ++i)
	{
		delete account.getPosition(i);
	}
}

bool Application::IsUserLoggedIn() const
{
	return currentUser != nullptr;
}

bool Application::IsAccountLoggedIn() const
{
	return currentAccount != nullptr;
}

Account* Application::GetCurrentAccount() const
{
	return currentAccount;
}

User* Application::GetCurrentUser() const
{
	return currentUser;
}

Store& Application::GetStore()
{
	return store;
}


//bool Application::LoginAccount(const std::string& email, const std::string& password)	//broken
//{
//	// TODO: This currently always logs you in as the first account
//	//currentAccount = accounts[0];
//
//	//currentAccount = *account.getPosition(i);	//broken, but changed from above				old
//
//	currentAccount = 
//
//	return true;
//
//}

bool Application::LoginAccount(Account* a)	//broken
{
	// TODO: This currently always logs you in as the first account
	//currentAccount = accounts[0];

	//currentAccount = *account.getPosition(i);	//broken, but changed from above

	currentAccount = a;
	if (currentAccount == nullptr)
	{
		return false;
	}
	else
	{
		return true;
	}

}

//bool Application::LoginUser(const std::string& username, const std::string& password)	//broken, still not changed
//{
//	// TODO: This currently always logs you in as the first user
//	//currentUser = getAccount()->getUsers();
//
//	currentUser = getAccount()->getSpecificUser(username);		old
//
//	return true;
//}

bool Application::LoginUser(User* newUser)	//broken, still not changed
{
	// TODO: This currently always logs you in as the first user
	//currentUser = getAccount()->getUsers();

	currentUser = newUser;

	return true;
}

void Application::LogoutUser()
{
	currentUser = nullptr;
}


//getters and setters for account

Account* Application::getAccount()
{
	return currentAccount;
}

void Application::setAccount(Account* newAccount)
{
	this->currentAccount = newAccount;
}