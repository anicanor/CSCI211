// this program demonstrates using the standard template library (STL) map
// it reads pairs of data <names, pet_names> and inserts them into a map
// then it reads names and looks those names up in the map

// A map stores a collection of pairs <key, object>
// For example, consider this collection of data:
//   Tom is 42 years old
//   Sally is 20 years old
//   Fred is 21 years old
// We can think of this data as three "pairs"
//   <Tom, 42>
//   <Sally, 20>
//   <Fred, 21>
// A map stores these pairs.

// For each key (a name in the above example) 
// there is a single value (the age in the above example)


#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // maps are parameterized by two types.  The first is the type of the key,
    // the second is the type of the thing being stored in the map (the value)
    map<string, string> my_map;
    string owner_name;
    string pet_name;

    cout << "enter owner names and pet name pairs: " << endl;
    while (cin >> owner_name)
    {
        if (owner_name == "quit")
            break;
        cin >> pet_name;
        // insert the pet_name into the map using the owner_name as the key
        my_map[owner_name] = pet_name;
    }

    cout << "enter owner names to lookup:" << endl;
    while (cin >> owner_name)
    {
        if (owner_name == "quit")
            break;
        // NOTE: this code is not very good.  
        // If an owner_name is not in the map, this code prints an empty string.
        cout << owner_name 
             << "'s pet is <" 
             << my_map[owner_name] 
             << ">" 
             << endl;
    }
    map<string, string>::iterator iter;

    for (iter = my_map.begin();
         iter != my_map.end();
         iter++)
    {

      cout << (*iter).first << " pet is ";
      cout << (*iter).second << endl;

    }
}






