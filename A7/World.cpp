#include "World.h"
World::World()
{
    Largeur=800;
    Hauteur=600;
    for(int x=0;x<=Largeur;++x)
    {
        for(int y=0;y<=Hauteur;++y)
        {
            Blocks.push_back();
            if(y<=1/3*Hauteur)
            {
                Blocks.push_back(Block(x,y,0));
            }
            if(y<=2/3*Hauteur | y>=Hauteur)
            {
                Blocks.push_back(Block(x,y,1));
            }
            else
            {
                Blocks.push_back(Block(x,y,3));
            }
        }
    }
}
World::World(int c_Largeur, int c_Longueur)
{

}
World::~World()
{

}
void World::setLargeur(int newLargeur)
{

}
int World::getLargeur()
{

}
void World::setHauteur(int newHauteur)
{

}
int World::getHauteur()
{

}
void World::setTerrain(sf::Image &newTerrain)
{

}
sf::Image World::getTerrain()
{

}
void World::draw(sf::RenderWindow &App)
{

}
