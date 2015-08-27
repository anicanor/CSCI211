
//point.h
//Jin,Xuan/Shirley
//xjin
#ifndef POINT_H
#define POINT_H

#include "grid.h"
#include "shape.h"
#include<iostream>

using namespace std;

class Point:public Shape
{
  public:
    void draw(Grid &grid);
Point(int x, int y, char ch); 
  protected:
char m_ch;
  private:

};
#endif

