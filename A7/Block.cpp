#include "Block.h"
Block::Block()
{
    X=0;
    Y=0;
}
Block::Block(int c_X, int c_Y, int c_Type)
{
    X=c_X;
    Y=c_Y;
    Type=c_Type;
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
void Block::setBlockImage(sf::Image &newBlockImage)
{
    BlockImage=&newBlockImage;
    BlockSprite.SetImage(*BlockImage);
    if(Type==0)
    {
        BlockSprite.SetSubRect(sf::IntRect(8,8,16,16));
    }
    if(Type==1)
    {
        BlockSprite.SetSubRect(sf::IntRect(0,0,8,8));
    }
    if(Type==2)
    {
        BlockSprite.SetSubRect(sf::IntRect(8,0,16,8));
    }
    if(Type==3)
    {
        BlockSprite.SetSubRect(sf::IntRect(0,8,8,16));
    }
}
sf::Image Block::getBlockImage()
{
    return *BlockImage;
}
sf::Sprite Block::getBlockSprite()
{
    BlockSprite.SetPosition(X,Y);
    return BlockSprite;
}
void Block::setType(int newType)
{
    Type=newType;
}
int Block::getType()
{
    if(Type==0)
    {
        BlockSprite.SetSubRect(sf::IntRect(8,8,16,16));
    }
    if(Type==1)
    {
        BlockSprite.SetSubRect(sf::IntRect(0,0,8,8));
    }
    if(Type==2)
    {
        BlockSprite.SetSubRect(sf::IntRect(8,0,16,8));
    }
    if(Type==3)
    {
        BlockSprite.SetSubRect(sf::IntRect(0,8,8,16));
    }
    return Type;
}
void Block::draw(sf::RenderWindow &App)
{
    BlockSprite.SetPosition(X,Y);
    App.Draw(BlockSprite);
}
