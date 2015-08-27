#ifndef DSTACK_H 
#define DSTACK_H

#include<iostream>
using namespace std;

class Dstack
{
  public: 
    Dstack();
    ~Dstack();
    void push(double value);
    bool pop(double &value);
    bool empty();
    //bool oper(char ch);
    bool isspace(char ch);
    bool isdigit(char ch);
    int size();

  private: 
    class Node
    {
      public: 
        Node(double value, Node *next) 
        {m_value=value; m_next = next;}
        double m_value;
        Node *m_next; 
    };
    Node *m_head;
    int m_size;

}; 
#endif
