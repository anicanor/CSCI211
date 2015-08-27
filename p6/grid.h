
//grid.h
//Jin,Xuan/Shirley
//xjin
#ifndef GRID_H
#define GRID_H


#include<iostream> 

using namespace std;

class Grid
{
  public:
//    virtual void draw(Grid &grid);
    Grid();
    //~Grid();
    void set(int x,int y, char ch);
    void print();


  private: 
      char m_grid[60][24];
        




};
#endif
