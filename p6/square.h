
//square.h
//Jin,Xuan/Shirley
//xjin
#ifndef SQUARE_H 
#define SQUARE_H

#include"grid.h"
#include"shape.h"
#include<iostream>

using namespace std;

class Square:public Shape
{
  public: 
    void draw(Grid &grid);
    Square(int x,int y,int size);


  private: 
    int m_size;


};
#endif
