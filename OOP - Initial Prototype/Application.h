#pragma once

#include "Account.h"
#include "User.h"
#include "Store.h"

class Application
{
	public:
		Application();
		~Application();

		bool IsAccountLoggedIn() const;
		bool IsUserLoggedIn() const;
		Account* GetCurrentAccount() const;
		User* GetCurrentUser() const;

		Store& GetStore();

		/*bool LoginAccount(const std::string& email, const std::string& password);*/
		bool LoginAccount(Account* a);
		bool LoginUser(User* newUser);
		void LogoutUser();
		
		void setAccount(Account*);

		void setUser(User* newUser);

		Account* getAccount();


	//	Account* accounts[1] = { }; // TODO: this needs changing to a dynamic collection
		List<Account*> account; //New - Changed from above

	private:
		Store store;
		Account* currentAccount;
		User* currentUser;
};