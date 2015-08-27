#ifndef LIST_H
#define LIST_H

#include<iostream>
using namespace std;


class List
{
  public:
    List();// {m_head=NULL};
    ~ List();
    void insert(int value);
    void print();
    //void insert_at_end();

  private:
    class Node
    {
      public:
        Node(int value, Node *next)
        {m_value = value; m_next = next;}
        int m_value;
        Node *m_next;
     };
        Node *m_head;
    
};
#endif

