#include "dstack.h"
#include<iostream> 

using namespace std; 

Dstack::Dstack()
{
  m_head=NULL;
  m_size=0;
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
  m_size++;
}



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
  m_size--;
  return true;
  
}


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

bool Dstack::isspace(char ch)
{
  if(isspace(ch))
    return true;

  else
    return false;
}

bool Dstack::isdigit(char ch)
{
if(isdigit(ch))
  return true;
else
  return false;
}


/*
bool Dstack::oper(char *ch)
{
  if(ch=="+"||ch=="-"||ch=="/"||ch=="*"||ch=="^")
    return true;

  else 
    return false;
}
*/



int Dstack::size()
{
  
return m_size;
 
}


