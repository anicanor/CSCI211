#include "vlist.h"
#include "video.h"

#include<iostream>
/*
Vlist::Video *(string title, string URL, string comment,float length, int rating)
{
  m_head=NULL;

  m_title=title;
  m_URL=URL;
  m_comment=comment;
  m_length=length;
  m_rating=rating;
}
*/
/*
Vlist::~Vlist() //making the pointers point to the next objective first, then delete the original pointer; 
{

  Node *ptr = m_head;  //make the head point to the first object, then when going through the loop, insert the new object in front of the old ones. 
  while (ptr != NULL)
  {
    Node *temp;

    temp = ptr;
    ptr = ptr-> m_next;
    delete temp;
  }

  cout << "List::~List() was called" << endl;
}
*/

void Vlist::insert(Video information) 
{
  m_head=new Node(information, m_head);
  while(getline(cin, m_title))
  {
    getline(cin,m_URL);
    getline(cin,m_comment);
    cin >> m_length;
    cin >> m_rating;

}
cout << "insert was called" << endl;
}

void Vlist::print()
{
  //cout << "list = " << endl << "{" << endl;

  //cout << "   m_head = " << m_head << endl;
  Node *ptr = m_head;

  while(ptr!=NULL)
  {
   // cout << "   ptr = " << ptr << ", ptr->m_information = "
    //  << ptr ->m_information << ",ptr->m_next = "
     // << ptr ->m_next << endl;

    //ptr = ptr->m_next;
    
    cout << ptr-> m_information << endl;
    ptr = ptr -> m_next; //a pointer to the next object
    cout << endl;


  }
  //cout << "}" << endl;
}
/*
   void List::insert_at_end()
   {


   }
   */




