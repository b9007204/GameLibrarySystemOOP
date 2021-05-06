#pragma once
#include <string>
#include "Application.h"
#include "Menu.h"

class CreditMenu : public Menu
{
public:

    CreditMenu(const std::string& title, Application* app);

    void OutputOptions();
    bool HandleChoice(char creditChoice);

private:

};

