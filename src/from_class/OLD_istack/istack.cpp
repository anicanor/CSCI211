#include "istack.h"

#include <iostream>
using namespace std;

Istack::Istack(int size)
{
  m_size = size;
  m_values = new int[m_size];

  // m_top is the index of the element on top of stack
  // when the stack is empty, m_top is -1
  m_top = -1;
}
Istack::~Istack()
{

}
void Istack::push(int value)
{
  // array is already full then resize array
  if (m_top + 1 == m_size)
  {
    // create new array
    int *new_values = new int[m_size +1];

    // copy all values from old values to new values
    for (int i = 0; i < m_size; i++)
      new_values[i] = m_values[i];

    delete [] m_values;
    m_values = new_values;
    m_size = m_size +1 ;
  }

  // push value on the stack

  m_top++;
  m_values[m_top] = value;

}
bool Istack::pop(int &value)
{
  // if stack is empty
  if (m_top == -1)
    return false;

  // m_top is the index of the top element on stack
  value = m_values[m_top];
  m_top--;

  return true;

}















