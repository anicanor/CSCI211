// demonstrate C++ templates by implementing a simple linked-list of integers

// Unlike "normal" C++ classes, the entire template (class definitions and 
// and functions) are placed into a .h file.

#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

template <class TYPE>
class List
{
    public:
        List() {m_head = 0;}
        void insert_front(TYPE value);
        void insert_rear(TYPE value);
        void print();
    private:
        class Node
        {
            public:
                Node(TYPE value, Node *next) {m_value = value; m_next = next;}
                TYPE m_value;
                Node *m_next;
        };
        Node *m_head;
};

// insert at the front of the list
template <class TYPE>
void List<TYPE>::insert_front(TYPE value)
{
    m_head = new Node(value, m_head);
}

// insert at rear of the list
template <class TYPE>
void List<TYPE>::insert_rear(TYPE value)
{
    if (m_head == 0)
        return insert_front(value);

    // look for last node in list (there must be one node in list)
    // the next pointer of the last node == 0
    Node *ptr;
    for (ptr = m_head; ptr->m_next != 0; ptr = ptr->m_next)
        ; // empty for loop

    // at this point ptr points to the last element in the list
    ptr->m_next = new Node(value, 0);
}

template <class TYPE>
void List<TYPE>::print()
{
    cout << "{";
    
    for (Node *ptr = m_head; ptr != 0; ptr = ptr->m_next)
    {
        // if this is not the first element, print a ", "
        if (ptr != m_head)
            cout << ", ";

        cout << ptr->m_value;
    }
    cout << "}" << endl;  // end of list
}

#endif
