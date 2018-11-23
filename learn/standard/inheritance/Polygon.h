#ifndef _CC_POLYGON_H
#define _CC_POLYGON_H
#include<iostream>
//如下东西不继承
//1:构造函数和析构函数
//2:复制赋值操作
//3:友元
//4:私有成员
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