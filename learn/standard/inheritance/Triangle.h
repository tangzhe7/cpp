#ifndef _CC_TRIANGLE_H
#define _CC_TRIANGLE_H
#include "Polygon.h"
#include "OutPut.h"
namespace cc
{

class Triangle : public Ploygon, public Output
{
  public:
    int area()
    {
        return width * height / 2;
    }
    int area2() { return area(); }
};
} // namespace cc

#endif