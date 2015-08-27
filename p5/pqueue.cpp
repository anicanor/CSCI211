//pqueue.cpp
//Xuan Jin/shirley
//xjin
#include "pqueue.h"
#include "cust.h"

#include<iostream>
#include<assert.h>
using namespace std;

Pqueue::Pqueue()
{
  m_head = NULL; 
  m_tail = NULL;

}


Pqueue::~Pqueue()
{

  Node *ptr = m_head;
  while(ptr != NULL)
  {
    Node *temp;

    temp = ptr;
    ptr = ptr->m_next;
    delete temp;
  }

}

void Pqueue::enqueue(Cust *cust, int priority)
{
  if(m_head==NULL || priority < m_head->m_priority)
  {
    m_head = new Node(priority, cust, m_head);
  }

  else 
  {
    Node *ptr = m_head;
    while((ptr->m_next != NULL) && (ptr->m_next->m_priority <= priority))//we don't need to check the equal condition casue it is already in the major condition, and the way you would insert here would be the same way if the priority number is bigger than the m_priority.
    {
      /*
      if(ptr->m_next->m_priority>priority)
      {
        break;
        //ptr->m_next = new Node(priority, cust, m_tail);
      }
      */
      ptr=ptr->m_next;
    }
    ptr->m_next = new Node(priority, cust, ptr->m_next);
  }

}


Cust *Pqueue::dequeue()
{

  if(m_head == NULL)
    return NULL;
  else 
    //for(Node *ptr = m_head; ptr != NULL; ptr=ptr->m_next)
  {
    Node *ptr = m_head;
    m_head = m_head->m_next;
    return ptr->m_cust;
    //delete ptr;
  } 
}


bool Pqueue::empty()
{

  if(m_head==NULL)
    return true;
  else
    return false;

  //return m_head == NULL;
}

void Pqueue::print()
{
  Node *ptr = m_head;
  while(ptr != NULL)
  {
    ptr->m_cust->print(cout);
    ptr = ptr -> m_next;
  }

}

int Pqueue::first_element_priority()
{
assert(!empty());
return m_head->m_priority;

}

int Pqueue::size()
{
  int size=0;
//Node *ptr=m_head;

//while(ptr!=NULL)
  for(Node *ptr=m_head; ptr!=NULL; ptr=ptr->m_next)
size++;

return size;
  
}
