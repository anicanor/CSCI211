
//shape.h
//Jin,Xuan/Shirley
//xjin
#ifndef SHAPE_H 
#define SHAPE_H

#include "grid.h"

#include<iostream>

using namespace std;

class Shape
{
  public: 
    virtual void draw(Grid &grid) =0;
    Shape(int x, int y);

  protected:
    int m_x;
    int m_y;


  private:




};
#endif
