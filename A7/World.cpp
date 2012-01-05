#include "World.h"
World::World()
{
    Largeur=800;
    Hauteur=600;
    for(int x=0;x<=Largeur;++x)
    {
        Blocks.push_back(std::vector<Block>());
        for(int y=0;y<=Hauteur;++y)
        {

            if(y<=1/3*Hauteur)
            {
                Blocks[x].push_back(Block(x,y,0));
            }
            if(y<=2/3*Hauteur | y>=Hauteur)
            {
                Blocks[x].push_back(Block(x,y,1));
            }
            else
            {
                Blocks[x].push_back(Block(x,y,3));
            }
        }
    }
}
World::World(int c_Largeur, int c_Longueur)
{
    for(int x=0;x<=Largeur;++x)
    {
        Blocks.push_back(std::vector<Block>());
        for(int y=0;y<=Hauteur;++y)
        {

            if(y<=1/3*Hauteur)
            {
                Blocks[x].push_back(Block(x,y,0));
            }
            if(y<=2/3*Hauteur | y>=Hauteur)
            {
                Blocks[x].push_back(Block(x,y,1));
            }
            else
            {
                Blocks[x].push_back(Block(x,y,3));
            }
        }
    }
}
World::~World()
{

}
void World::setLargeur(int newLargeur)
{
    Largeur=newLargeur;
}
int World::getLargeur()
{
    return Largeur;
}
void World::setHauteur(int newHauteur)
{
    Hauteur=newHauteur;
}
int World::getHauteur()
{
    return Hauteur;
}
void World::setTerrain(sf::Image &newTerrain)
{
    Terrain==&newTerrain;
}
sf::Image World::getTerrain()
{
    return *Terrain;
}
void World::draw(sf::RenderWindow &App)
{
    for(int x=0;x<=Blocks.capacity();++x)
    {
        for(int y=0;y<=Blocks[x].capacity();++y)
        {
            Blocks[x][y].setBlockImage(*Terrain);
            Blocks[x][y].draw(App);
        }

    }

}
