#ifndef BLOCK_H_INCLUDED
#define BLOCK_H_INCLUDED
#include <SFML/Graphics.hpp>
class Block
{
    public:
    Block();
    Block(int c_X, int c_Y, int c_Type);
    ~Block();
    void setX(int newX);
    int getX();
    void setY(int newY);
    int getY();
    void setBlockImage(sf::Image &newBlockImage);
    sf::Image getBlockImage();
    void setBlockSprite(sf::Sprite &newBlockSprite);
    sf::Sprite getBlockSprite();
    void setType(int newType);
    int getType();
    void draw(sf::RenderWindow &App);
    private:
    int X;
    int Y;
    sf::Image *BlockImage;
    sf::Sprite BlockSprite;
    int Type;
};
#endif // BLOCK_H_INCLUDED
