#include <iostream>
using namespace std;

const int MAX = 30;

class List
{
    public:
        List() {m_head = NULL;}
        void insert(int value) {m_head = new Node(value, m_head);}
        bool lookup(int value) {return lookup(value, m_head);}
    private:
        class Node
        {
            public:
                Node(int value, Node *next) {m_value=value;m_next=next;}
                int m_value;
                Node *m_next;
        };
        Node *m_head;
        bool lookup(int value, Node *cur);
};

bool List::lookup(int value, Node *cur)
{
    if (!cur)
        return false;
    if (cur->m_value == value)
        return true;

    // fast solution
    return lookup(value, cur->m_next);

    // see list_slow.cpp
    // this is obviously an extra function call, but is it a big deal?
    //if (lookup(value, cur->m_next))
    //    return lookup(value, cur->m_next);
    //else return false;
}


int main()
{
    List list;

    cout << "inserting values into list" << endl;
    for (int i = 0; i < MAX; i++)
        list.insert(i);

    cout << "looking up values in list" << endl;
    int found = 0;
    for (int i = 0; i < MAX; i++)
        if (list.lookup(i))
            found++;

    cout << "found = " << found << endl;
}
