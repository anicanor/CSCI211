// NOTE: Classes should be split into two files (.h and .cpp)
//       This example puts them both in one file so it is easier to 
//       show in class.
//
// Linked list of integers that demonstrates using a recursive function to
// find the largest value in the list.

#include <iostream>
#include <assert.h>
using namespace std;

class List
{
    public:
        List() {m_head = NULL;}
        void insert(int value);
        bool find_largest(int &value);  // public to be called from main()
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
        // private to be called from public find_largest() 
        // need this function so you can pass the Node that is the head of
        // the "rest of the list"
        int find_largest(Node *cur_head); 
};


// return false if list is empty
// return true if not empty; put largest value in reference parameter value
bool List::find_largest(int &value)
{
    if (m_head)
    {
        value = find_largest(m_head);
        return true;
    }
    else return false;
}

int max(int &a, int &b)
{
    return a > b ? a : b;
}

int List::find_largest(Node *cur_head)
{
    // due to the logic of this program, find_largest is never called w/NULL
    assert(cur_head);
    // if cur_head is not the last node in the list
    // the largest is the max of cur_head->m_value and the largest in the 
    // rest of the list (cur_head->m_next)
    if (cur_head->m_next)
        return max(cur_head->m_value, find_largest(cur_head->m_next));

    // else cur_head is the only node in the list, it is the largest
    else return cur_head->m_value;
}

void List::insert(int value)
{
    m_head = new Node(value, m_head);
}

int main()
{
    List l;
    for (int i = 0; i < 100; i++)
        l.insert(i);

    int value;
    l.find_largest(value);
    cout << "max = " << value << endl;
}

