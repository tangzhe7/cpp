#ifndef _CC_POLYGON_H
#define _CC_POLYGON_H
#include<iostream>
namespace cc
{
class Ploygon
{
protected:
  int width, height;

public:
  Ploygon(){};
  Ploygon(int width, int height) : width(width), height(height) {}
  void set_values(int a, int b)
  {
    width = a;
    height = b;
  }
  virtual int area() { return 0; }
  virtual int area2() = 0;
  int printarea(){return this->area2();}

  ~Ploygon()
  {
    std::cout << "del Ploygon"<<std::endl;
  }
};
} // namespace cc
#endif 