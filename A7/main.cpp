#include <iostream>
#include <vector>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Block.h"
#include "World.h"

using namespace std;

int main()
{
    World World;
    sf::Image Terrain;
    Terrain.LoadFromFile("terrain.png");
    World.setTerrain(Terrain);
    sf::RenderWindow App(sf::VideoMode(800,600,32),"A6");
    while(App.IsOpened())
    {
        sf::Event Event;
        if(App.GetEvent(Event))
        {
            if(Event.Type==sf::Event::Closed)
            {
                App.Close();
            }
        }
        App.Clear();
        World.draw(App);
        App.Display();
    }
    cout << "Hello world!" << endl;
    return 0;
}
