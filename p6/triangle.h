//triangle.h
//Jin,Xuan/Shirley
//xjin


#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"
#include "grid.h"
#include<iostream>

class Triangle:public Shape
{
  public: 
    void draw(Grid &grid);
    Triangle(int x, int y);

  protected:

  private:


};
#endif
