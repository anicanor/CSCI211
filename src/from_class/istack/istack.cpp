#include "istack.h"

#include <iostream>
using namespace std;

Istack::Istack(int initial_size)
{
  m_max_size = initial_size;
  m_values = new int[m_max_size];
  m_size = 0;
}

Istack::~Istack()
{
  delete [] m_values;
}


void Istack::push(int value)
{
  // special case: no more room in the array
  if (m_size == m_max_size)
  {
    // create new array
    int *new_values = new int[2*m_max_size];

    // copy values from old array to new array
    for (int i = 0; i < m_size; i++)
    {
      new_values[i] = m_values[i];
    }
    delete [] m_values;
    m_values = new_values;
    m_max_size *= 2;
  }

  m_values[m_size] = value;
  m_size++;
}

bool Istack::pop(int &value)
{
  // special case: empty stack
  if (empty())
  {
    return false;
  }
  else
  {
    value = m_values[m_size-1];
    m_size--;
    return true;
  }
}






