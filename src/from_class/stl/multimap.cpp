// A multimap is an STL template that is similar to a map except that
// each key can have multiple values:
//  <Sally, 40>
//  <Sally, 31>
//  <Fred, 18>
//  <Fred, 21>
//  <Fred, 18>

// Since each key in a multimap can have multiple values, looking up keys 
// in a multimap is much harder than in a map

#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // create a multimap object
    // the key will be a string, the value will be an integer
    multimap<string, int> the_map;

    // maps contains "pairs" of things
    // each pair contains a "key" and a "value"
    // for this map (see above) the key is a string, the value is an int

    // create some pair objects and insert them into multimap
    the_map.insert(pair<string, int>("joe", 42));
    the_map.insert(pair<string, int>("joe", 31));
    the_map.insert(pair<string, int>("joe", 99));
    the_map.insert(pair<string, int>("joe", 86));

    the_map.insert(pair<string, int>("sally", 142));
    the_map.insert(pair<string, int>("sally", 131));
    the_map.insert(pair<string, int>("sally", 199));

    // an iterator is an object type especially for iterating 
    // through an STL object
    multimap<string, int>::iterator iter;

    // find() returns the first iterator for the given key
    iter = the_map.find("joe");

    // find() returns a special end of data structure (like NULL) 
    // when it does not find the element you are looking for
    if (iter == the_map.end())
        cout << "joe was not found" << endl;
    else
    {
        // if find() did not return end() then it found at least one match
        // find() returns the iterator to the first match
        // need to loop through all matches using iter++
        //  alternative: for (unsigned int i = 0; i < the_map.count("joe"); i++)
        while (iter != the_map.end())
        {
            if (iter->first != "joe")
              break;
            // (*iter) is a pair object
            // the value is the "second" element of the pair
            // the key is the "first" element of the pair
            // cout << (*iter).first << "'s value is " << (*iter).second << endl;
            cout << iter->first << "'s value is " << iter->second << endl;
            // advance the iter to the next element in the "linked list"
            iter++;
        }
    }
}
