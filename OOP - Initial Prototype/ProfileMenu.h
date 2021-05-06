#pragma once
#include "Application.h"
#include "Menu.h"
class ProfileMenu : public Menu
{
public:
    ProfileMenu(const std::string& title, Application* app, User* currUser);

    void OutputOptions();

    bool HandleChoice(char choice);

private:
    User* currUser;
};

