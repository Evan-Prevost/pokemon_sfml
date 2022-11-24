#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "MainCharacter.h"
#include "AnimatedMainCharacter.h"
#include "ConfigMainCharacter.h"
#include "InitWindow.h"
#include "Entity.h"

int main()
{
    InitWindow window;

    sf::Texture texture;
    if (!texture.loadFromFile(MAIN_CHARACTER_DOWN_TEXTURE_PATH))
    {
        // error...
    }

    MainCharacter mainCharacter = MainCharacter(texture);

    int countFrame = 0;
    while (window.isOpen())
    {
        window.clear();
        window.handleEvents();
        if (countFrame % 15 == 0)
        {
            mainCharacter.nextAnimation();
            countFrame = 0;
        }
        countFrame++;
        window.drawEntity(mainCharacter);
        window.display();

    }
    
    return 0;
}