//circle.cpp
//Jin,Xuan/Shirley
//xjin
#include "shape.h"
#include "grid.h"
#include "circle.h"

#include<iostream>

using namespace std;

Circle::Circle(int x, int y) : Shape(x,y)
{
}

void Circle::draw(Grid &grid)
{
  grid.set(m_x+1,m_y,'o');
  grid.set(m_x+2,m_y, 'o');
  grid.set(m_x , m_y + 1, 'o');
  grid.set(m_x + 3 , m_y + 1, 'o');
  grid.set(m_x , m_y + 2, 'o');
  grid.set(m_x + 3,  m_y + 2, 'o');
  grid.set(m_x + 1, m_y + 3, 'o');
  grid.set(m_x + 2, m_y + 3, 'o');
}
