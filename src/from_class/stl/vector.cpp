// This program illustrates how to use the Standard Template Library (STL)
// vector class

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    // vector is a template, the <int> means it is a vector of ints
    vector<int> numbers;  

    // push_back() puts a new value at the end (or back) of the vector
    for (int i = 0; i < 10; i++)
        numbers.push_back(i);

    cout << "print all elements in vector using []" << endl;


    // This is one way to iterate through a vector and print all the values
    for (unsigned int i = 0; i < numbers.size(); i++)
        cout << numbers[i] << endl;
cout << "print all elements in vector iterators " << endl;
    // Another way to iterate through a vector is to use an iterator
    // An iterator is a special object used to keep track of internal structures
    // While you don't need to use iterators for vectors, other STL templates
    //   and functions require them.
    vector<int>::iterator iter;
    for (iter = numbers.begin(); iter != numbers.end(); iter++)
        cout << *iter << endl;


    cout << "now print it backwards using iterators" << endl;
    iter = numbers.end();
    for (iter--; iter != numbers.begin(); iter--)
        cout << *iter << endl;
    cout << *iter << endl;
}
