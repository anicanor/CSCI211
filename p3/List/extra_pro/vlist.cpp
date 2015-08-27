//vlist.cpp
//xjin
//Xuan Jin/Shirley

#include<iostream>

#include "vlist.h"
#include "video.h"

using namespace std;

Vlist::Vlist()
{
  m_head=NULL;
}


Vlist::~Vlist()
{
  Node *ptr = m_head;
  while(ptr != NULL)
  {
    Node *temp;

    temp=ptr;
    ptr = ptr->m_next;
    delete temp;
  }
}




Video* Vlist::lookup(string title)
{
  //if title= name;
  if(!m_head)
    return NULL;

  for(Node *tmp = m_head; tmp != NULL; tmp=tmp->m_next )
  {
    if(title==tmp->m_video->name())
    {
      return tmp->m_video; 
    }

  }
  return NULL;

}

int Vlist::length()
{
  int length=0;
  for (Node *ptr = m_head; ptr != NULL; ptr=ptr->m_next)
  {
    length++;
  }
  return length;
}

bool Vlist::insert(Video *video) 
{
  if( !m_head )  //if m_head==NULL
  {
    m_head = new Node(video, m_head);
    return true;
  }

  if (m_head->m_video->name() == video->name())
  {
    return false;
  }

  if (m_head->m_video->name() > video->name()) 
  {
    m_head = new Node(video, m_head);
    return true;
  }

  else
  {
    Node *ptr = m_head;
    while ((ptr->m_next != NULL) && (ptr->m_next->m_video->name() < video->name()))
    {
      if (ptr->m_next->m_video->name() == video->name())
      {
        return false;
      }
      ptr = ptr->m_next;
    }
    ptr->m_next= new Node(video, ptr->m_next);
    return true;
  }
}

void Vlist::print()
{
  Node *ptr = m_head;
  while(ptr != NULL)
  {
    //cout << ptr->m_video << endl;
    ptr->m_video->print(); 
    ptr = ptr -> m_next;
  }

}

bool Vlist::remove(string target)
{
  if( !m_head)
  {
    return false;
  }
  if(m_head->m_video->name()==target)
  {
    Node *tmp = m_head;
    m_head = m_head -> m_next;
    delete tmp;
    return true;
  }
  Node *ptr = m_head;
  while(ptr->m_next != NULL && ptr->m_next -> m_video->name() != target)
  {
    ptr=ptr->m_next;
  }

  if(ptr-> m_next==NULL)
    return false;
  Node *tmp=ptr-> m_next;
  ptr-> m_next =ptr->m_next->m_next;
  delete tmp;
  return true;
}




