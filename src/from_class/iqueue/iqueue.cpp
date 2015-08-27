// demonstrate using a resizing array to implement a queue

#include "assert.h"
#include <iostream>
using namespace std;

class Iqueue
{
    public:
        Iqueue(int initial_size);
        ~Iqueue();
        void enqueue(int value);
        bool dequeue(int &value);
        bool empty() {return m_size == 0;}
    private:
        int m_first;  // index of the first element in the queue
        int m_last;   // index of the last element in the queue
        int m_max_size; // size of the m_values array
        int *m_values; // the array holding the values in the queue
        int m_size; // the number of elements in the queue
};

Iqueue::Iqueue(int initial_size)
{
    assert(initial_size > 0);
    m_max_size = initial_size;
    m_values = new int[m_max_size];
    m_size = 0;

    // m_first && m_last are not used when the queue is empty
}
Iqueue::~Iqueue()
{
    delete [] m_values;
}

void Iqueue::enqueue(int value)
{
    // special case of an empty queue
    if (m_size == 0)
    {
        m_values[0] = value;
        m_first = 0; 
        m_last = 0;
        m_size = 1;
        return;
    }

    // if the array is full, double it
    if (m_size == m_max_size)
    {
        int *new_values = new int[m_max_size * 2];

        // move the elements from m_values to new_values
        // reorder the values so the first element in the queue is the
        // first element in new_values

        // new_i in the index in new array   0,1,...,m_size-1
        // old_i is index in old array  m_first, m_first+1 ... m_last

        for (int new_i = 0, old_i = m_first; 
             new_i < m_size; 
             new_i++, old_i = (old_i + 1) % m_size
            )
        {
            new_values[new_i] = m_values[old_i];
        }


        m_first = 0;
        m_last = m_size - 1;
        delete [] m_values;
        m_values = new_values;
        m_max_size *= 2;
    }

    // we know the array is large enough, insert the value
    assert(m_size < m_max_size);

    m_last = (m_last + 1) % m_max_size;
    m_values[m_last] = value;
    m_size++;
}

bool Iqueue::dequeue(int &value)
{
    if (m_size == 0)
        return false;

    value = m_values[m_first];
    m_first = (m_first + 1) % m_max_size;
    m_size--;
    return true;
}

int main()
{
    // test the Iqueue class by enqueuing the number 0-42 while calling
    // dequeue in the middle and at the end.
    // the output should be 0-42
    Iqueue q(3);
    int value;

    for (int i = 0; i < 10; i++)
        q.enqueue(i);

    for (int i = 0; i < 5; i++)
    {
        assert(q.dequeue(value));
        cout << value << " ";
    }

    for (int i = 10; i < 30; i++)
        q.enqueue(i);

    for (int i = 0; i < 15; i++)
    {
        assert(q.dequeue(value));
        cout << value << " ";
    }

    for (int i = 30; i < 43; i++)
        q.enqueue(i);

    while (q.dequeue(value))
        cout << value << " ";
    cout << endl;
}
