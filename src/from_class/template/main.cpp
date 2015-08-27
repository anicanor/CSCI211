#include "list.h"

int main()
{
    // instantiate the list template as a list of integers
    List<int> list_of_ints;

    // instantiate the list template as a list of doubles
    List<double> list_of_doubles;

    for (int i = 0; i < 10; i++)
    {
        list_of_ints.insert_front(i);
    }

    cout << "list_of_ints = ";
    list_of_ints.print();

    for (double i = 0.42; i < 10; i = i + 1.0)
    {
        list_of_doubles.insert_rear(i);
    }
    cout << "list_of_doubles = ";
    list_of_doubles.print();

    List<string> list_of_strings;

    list_of_strings.insert_front("hello");
    list_of_strings.insert_front("fuck");

    list_of_strings.print();


}
