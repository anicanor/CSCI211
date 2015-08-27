#include "dstack.h"
#include<iostream> 

using namespace std; 

Dstack::Dstack()
{
  m_head=NULL;
}

Dstack::~Dstack()
{
  Node *ptr=m_head;
  while(ptr!=NULL)
  {
    Node *tmp;
    tmp = ptr;
    ptr = ptr-> m_next;
    delete tmp;
  }
}


void Dstack::push(double value)
{
  m_head = new Node(value, m_head);

}



//double Dstack::pop()
bool Dstack::pop(double &value)
{
  if(m_head==NULL) 
  {
    return false;
  }

  Node *tmp = m_head;
  m_head = m_head -> m_next;
  value = tmp->m_value;
  delete tmp;
  return true;
  
}

//}

bool Dstack::empty()
{
  if (m_head == NULL)
  {
    return true;
  }
  else
  {
    return false;
  }
}


