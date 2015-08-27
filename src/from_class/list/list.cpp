#include <iostream>
using namespace std;
#include "list.h"

// on some machines member variables are not automatically initialized to 0
List::List()
{
    m_head = NULL;
}

// delete all Nodes in the list
// since they are dynamically allocated using new, they won't go away
// automatically when the list is deleted
// Rule of thumb: destructor deletes all memory created by member functions
List::~List()
{
    // cout << "List::~List() was called" << endl;

    Node *ptr = m_head;
    while (ptr != NULL)
    {
        Node *temp;
    
        temp = ptr;
        ptr = ptr->m_next;
        delete temp;
    }
}

// always insert at the front of the list
// Note: this works even in the SPECIAL CASE that the list is empty
void List::insert(int value)
{
    m_head = new Node(value, m_head);

}

// iterate through all the Nodes in the list and print each Node
// FOR LAB 5, delete the extra cout statements
void List::print()
{
    cout << "list = " << endl << "{" << endl;
    cout << "    m_head = " << m_head << endl;

    Node *ptr = m_head; 
    while (ptr != NULL)
    {
        cout << "    ptr = " << ptr << ", ptr->m_value = ";
        cout << ptr->m_value; 
        cout << ", ptr->m_next = " << ptr->m_next;
        cout << endl;

        ptr = ptr->m_next;
    }

    cout << "}" << endl;  // end of list
}

void List::insert_at_end()
{
    // this is left as a lab exercise
}
