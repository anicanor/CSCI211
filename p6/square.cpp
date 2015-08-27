
//square.cpp
//Jin,Xuan/Shirley
//xjin
#include "square.h"
#include "grid.h"
#include "shape.h"

#include<iostream>

using namespace std;


  void Square::draw(Grid &grid)
{
  
  for(int i=m_x; i<m_x + m_size; i++)
  {
  grid.set(i,m_y,'*');
  grid.set(i,m_y+m_size-1,'*');
  }
  
  for(int i=m_y; i<m_y + m_size; i++)
  {
  grid.set(m_x,i,'*');
  grid.set(m_x+m_size-1,i,'*');
  }
  
}

Square::Square(int x, int y,int size) : Shape(x,y)
{
 m_size=size;
}



