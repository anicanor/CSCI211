#include "List.h"

#include<iostream>
using namespace std;

List::List()
{
  m_head=NULL;
}

List::~List()
{
  cout << "List::~List() was called" << endl;

  Node *ptr = m_head;
  while (ptr != NULL)
  {
    Node *temp;

    temp = ptr;
    ptr = ptr-> m_next;
    delete temp;
  }
}






void List::insert(int value) 
{
  m_head=new Node(value, m_head);
}

void List::print()
{
  cout << "list = " << endl << "{" << endl;

  cout << "   m_head = " << m_head << endl;
  Node *ptr = m_head;

  while(ptr!=NULL)
  {
    cout << "   ptr = " << ptr << ", ptr->m_value = "
      << ptr ->m_value << ",ptr->m_next = "
      << ptr ->m_next << endl;

    ptr = ptr->m_next;
    /*
    cout << ptr-> m_value << endl;
    ptr = ptr -> m_next; //a pointer to the next object
    cout << endl;
*/

  }
  cout << "}" << endl;
}
/*
   void List::insert_at_end()
   {


   }
   */
