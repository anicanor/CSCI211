#include <iostream>
using namespace std;

#include "pair.h"


Pair::Pair(int x, int y)
{
    m_x = x;
    m_y = y;
}

void Pair::print()
{
    cout << "(" << m_x << "," << m_y << ")" << endl;
}
