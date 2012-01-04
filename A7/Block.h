#ifndef BLOCK_H_INCLUDED
#define BLOCK_H_INCLUDED
#include <SFML/Graphics.hpp>
class Block
{
    public:
    Block();
    Block(int c_X, int c_Y);
    ~Block();
    void setX(int newX);
    int getX();
    void setY(int newY);
    int getY();
    void setBlockSprite(sf::Sprite &newBlockSprite);
    sf::Sprite getBlockSprite();
    void draw(sf::RenderWindow &App);
    private:
    int X;
    int Y;
    sf::Sprite *BlockSprite;
};
#endif // BLOCK_H_INCLUDED
