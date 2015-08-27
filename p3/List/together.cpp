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



List::List()
{
  m_head=NULL;
}

List::~List() //making the pointers point to the next objective first, then delete the original pointer; 
{
  cout << "List::~List() was called" << endl;

  Node *ptr = m_head;  //make the head point to the first object, then when going through the loop, insert the new object in front of the old ones. 
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



int main() 
{
List list;


for(int i=0; i<5; i++)
{
  list.insert(i);

list.print();
}



  return 0;
}
//BSIS301 class
//
