#include "Admin.h"
#include "Date.h"

Admin::Admin(const std::string& username, const std::string& password, const Date& created, int credits)
	: Player(username, password, created, credits)
{
}

Admin::~Admin()
{
}

List<LibraryItem*>* Admin::GetMyGames()
{
	return &library;
}

bool Admin::HasGame(const std::string game)
{
	int libLength = library.length();
	for (int i = 0; i<libLength; i++)
	{
		if (library.getPosition(i)->getGame()->GetName() == game)
		{
			return true;
		}
	}
	return false;
}
