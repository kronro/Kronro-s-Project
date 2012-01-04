#include <iostream>
#include <vector>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Block.h"

using namespace std;

int main()
{
    Block blockauhasard(0,0);
    sf::Image img;
    sf::Sprite sprt;
    img.LoadFromFile("button1.png");
    sprt.SetImage(img);
    blockauhasard.setBlockSprite(sprt);
    vector<Block> World;
    for(int i=0;i<=10;++i)
    {
        World.push_back(Block(i*60,0));
        World[i].setX(i);
    }

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
        for(int i=0;i<=10;++i)
        {
            World[i].draw(App);
        }
        App.Display();
    }
    cout << "Hello world!" << endl;
    return 0;
}
