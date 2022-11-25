#pragma once

#include <SFML/Window.hpp>
#include "Entity.h"

class GameWindow
{
private:
    sf::RenderWindow _window;

public:
    GameWindow(void);

    //
    bool isOpen(void) const;
    void handleEvents(void);
    void update();
    void clear(void);
    void display(void);

    //
    void drawEntity(const Entity&);
};