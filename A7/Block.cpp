#include "Block.h"
Block::Block()
{
    X=0;
    Y=0;
}
Block::Block(int c_X, int c_Y)
{
    X=c_X;
    Y=c_Y;
}
Block::~Block()
{

}
void Block::setX(int newX)
{
    X=newX;
}
int Block::getX()
{
    return X;
}
void Block::setY(int newY)
{
    Y=newY;
}
int Block::getY()
{
    return Y;
}
void Block::setBlockSprite(sf::Sprite &newBlockSprite)
{
    BlockSprite=&newBlockSprite;
    BlockSprite->SetPosition(X,Y);
}
sf::Sprite Block::getBlockSprite()
{
    BlockSprite->SetPosition(X,Y);
    return *BlockSprite;
}
void Block::draw(sf::RenderWindow &App)
{
    BlockSprite->SetPosition(X,Y);
    App.Draw(*BlockSprite);
}
