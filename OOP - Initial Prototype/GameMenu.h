#pragma once
#include <string>
#include "Menu.h"

class GameMenu : public Menu
{
public:
    GameMenu(const std::string& title, Application* app, Game* game);

    void OutputOptions();

    bool HandleChoice(char choice);

private: 
    Game* game;
};

