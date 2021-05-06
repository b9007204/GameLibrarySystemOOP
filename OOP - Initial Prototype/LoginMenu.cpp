//#include "LoginMenu.h"
//#include "Application.cpp"
//
//LoginMenu::LoginMenu(const std::string& title, Application* app) : Menu(title, app)
//{
//	Paint(); 
//}
//
//void LoginMenu::OutputOptions()
//{
//	Line("Select user to log in as: ");
//	Line("");
//	for (int i = 0; i < app->GetCurrentAccount()->getUsers().length(); i++)
//	{
//	    std::string userNumber = std::to_string(i + 1);
//		Line(userNumber + " - " + app->GetCurrentAccount()->getUsers().getPosition(i)->GetUsername());
//	}
//}
//
//bool LoginMenu::HandleChoice(char choice)
//{
//	std::string userChoice = std::to_string(choice);
//	for (int i = 0; i < app->GetCurrentAccount()->getUsers().length(); i++)
//	{
//		std::string userNumber = std::to_string(i+1);
//		if (userChoice == userNumber)
//		{
//			//app->LoginUser(i);
//		}
//	}
//	
//	
//	return true;
//}