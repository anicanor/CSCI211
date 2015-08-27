#include <iostream>
using namespace std;

int main()
{
    int dollars;

    cout << "how many dollars do you want? ";
    cin >> dollars;

    cout << "(1) You want " 
         << dollars << (dollars == 1 ? " dollar" : " dollars") 
         << endl;

    cout << "(2) You want " << dollars;
    if (dollars == 1)
        cout << " dollar";
    else cout << " dollars";
    cout << endl;

}
