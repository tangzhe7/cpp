#ifndef _CC_RECTANGLE_H
#define _CC_RECTANGLE_H
#include "Square.h"
#include "Polygon.h"
#include "OutPut.h"
#include<iostream>
namespace cc
{

class Square;
class Rectangle : public Ploygon, public Output
{
private:
  friend Rectangle duplicate(const Rectangle &);

public:
  int area() { return width * height; }
  Rectangle(){};
  Rectangle(int width, int height) : Ploygon(width, height){};
  void convert(Square &&a) ;
  int area2()  { return area(); }
  ~Rectangle()
  {
    std::cout<<"del  rect"<<std::endl;
  }

};

void Rectangle::convert(Square &&a) 
{
  width = a.side;
  height = a.side;
}

Rectangle duplicate(const Rectangle &param)
{
  cc::Rectangle res;
  res.width = param.width * 2;
  res.height = param.height * 2;
  return res;
}
} // namespace cc
#endif