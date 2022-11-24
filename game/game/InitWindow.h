#pragma once

#include <SFML/Window.hpp>
#include "Entity.h"

class InitWindow
{
private:
    sf::RenderWindow _window;

public:
    InitWindow(void);

    //
    bool isOpen(void) const;
    void handleEvents(void);
    void update();
    void clear(void);
    void display(void);

    //
    void drawEntity(const Entity&);
};