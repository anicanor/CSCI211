

#include <iostream>
using namespace std;

class List
{
    public:
        List();
        ~List();
        void insert(int value);
        void print();
    private:
        class Node
        {
            public:
                // small functions can be inserted into the class definition
                // don't put large functions in the class definition
                Node(int value, Node *next)
                {m_value = value; m_next = next;}
                int m_value;
                Node *m_next;
        };
        Node *m_head;
};

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
    cout << "List::~List() was called" << endl;

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
void List::print()
{
    cout << "list = " << endl << "{" << endl;
    
    cout << "    m_head = " << m_head << endl;
    Node *ptr = m_head; 
    while (ptr != NULL)
    {
        cout << "    ptr = " << ptr << ", ptr->m_value = " 
             << ptr->m_value << ", ptr->m_next = " 
             << ptr->m_next  << endl;

        ptr = ptr->m_next;
    }

    cout << "}" << endl;  // end of list
}

int main()
{
    // instantiate a List class (the constructor takes NO arguments)
    List list;

    // NOTE:
    // List list();  is incorrect, when there are no arguments don't use ()

    // insert numbers into the list
    list.print();
    list.insert(1);
    list.print();
    list.insert(2);
    list.print();
    list.insert(3);
    list.print();
}
