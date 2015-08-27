#include <iostream>
using namespace std;

#include "pair.h"

int main()
{
    int x, y;

    Pair *values[100];
    int size = 0;


    while (cin >> x)
    {
        cin >> y;
        values[size] = new Pair(x, y);
        size = size + 1;

    }

    cout << "you entered " << size << " pairs" << endl;

    for (int i = 0; i < size; i++)
    {
        values[i]->print();

        // (*values[i]).print();  // this is the same as the above statement

    }
}
