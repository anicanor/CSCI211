
//point.cpp
//Jin,Xuan/Shirley
//xjin
#include "point.h"
#include "shape.h" 
#include "grid.h"

#include<iostream>

using namespace std;

void Point::draw(Grid &grid)
{
  grid.set(m_x, m_y,m_ch);
}
Point::Point(int x, int y, char ch) : Shape(x,y)
{
  m_ch=ch;
}



