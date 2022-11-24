#include "InitWindow.h"

InitWindow::InitWindow() : _window(sf::VideoMode(1000, 1000), "Pokemon")
{
    this->_window.setFramerateLimit(60);

    this->_window.setVerticalSyncEnabled(true);
}

bool InitWindow::isOpen(void) const
{
    return this->_window.isOpen();
}

void InitWindow::handleEvents(void)
{
    sf::Event event;
    while (this->_window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            this->_window.close();
    }
}

void InitWindow::clear(void)
{
    this->_window.clear();
}

void InitWindow::display(void)
{
    this->_window.display();
}

void InitWindow::drawEntity(const Entity& entity)
{
    this->_window.draw(entity.getSprite());
}