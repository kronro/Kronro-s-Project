#ifndef WORLD_H_INCLUDED
#define WORLD_H_INCLUDED
#include "Block.h"
#include <vector>
#include <SFML/Graphics.hpp>
class World
{
    public:
    World();
    World(int c_Largeur, int c_Longueur);
    ~World();
    void setLargeur(int newLargeur);
    int getLargeur();
    void setHauteur(int newHauteur);
    int getHauteur();
    void setTerrain(sf::Image &newTerrain);
    sf::Image getTerrain();
    void draw(sf::RenderWindow &App);
    private:
    int Largeur;
    int Hauteur;
    sf::Image *Terrain;
    std::vector<std::vector<Block> > Blocks;
};
#endif // WORLD_H_INCLUDED
