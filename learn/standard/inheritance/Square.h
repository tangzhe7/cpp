#ifndef _CC_SQUARE_H
#define _CC_SQUARE_H
namespace cc
{
class Square
{
    friend class Rectangle;

  private:
    int side;

  public:
    Square(int a)
        : side(a)
    {
    }
};
}
#endif