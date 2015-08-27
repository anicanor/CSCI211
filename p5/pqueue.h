//pqueue.h
//Xuan Jin/shirley
//xjin
#ifndef PQUEUE_H
#define PQUEUE_H

#include "cust.h"
#include<iostream> 

using namespace std;

class Pqueue
{
  public:
    Pqueue();
    ~Pqueue();
    //bool dequeue(Cust *value_removed);
    Cust *dequeue();
    void enqueue(Cust *cust, int priority);
    bool empty();
    void print();
    int first_element_priority();
    int size();

  private:
    class Node
    {
      public: 
        Node(int priority, Cust *cust, Node *next)
        {m_priority=priority; m_cust=cust; m_next = next;}
        int m_priority;
        Cust *m_cust;
        Node *m_next;
    };
    Node *m_head;
    Node *m_tail;




};
#endif


