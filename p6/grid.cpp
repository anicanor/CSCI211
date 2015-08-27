//grid.cpp
//Jin,Xuan/Shirley
//xjin
#include "grid.h"
#include<iostream>

using namespace std;

void Grid::set(int x,int y, char ch)
{
  
  if(x>=60 || y>= 24)
    return;
  else
    m_grid[x][y]=ch;

}


void Grid::print()
{
  for(int row=0; row <24; row++)
  {
    for(int col=0; col < 60; col++)
    {
      cout << m_grid[col][row];
    }
    cout << endl;
  }
}

Grid ::Grid()
{
  for(int col=0; col < 60; col++)
  {
    for(int row = 0; row <24; row++)
    {
      m_grid[col][row]=' ';
    }
  }
}
/*
Grid::~Grid()
{

  
    for(int row = 0; row <24; row++)
    {
      delete [] m_grid[row];
    }
    delete [] m_grid;
  
}
*/





