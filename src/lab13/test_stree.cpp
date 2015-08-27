/* Simple program to test class Stree

   Assumes that Stree has a constructor (that takes no arguments) and an insert function:

    bool Stree::insert(string origination, string destination, int distance);

*/

#include "stree.h"

#include <iostream>
using namespace std;

int main()
{
  Stree tree;

  // this should work
  if (tree.insert("Chico", "Sacramento", 100))
    cout << "tree.insert(\"Chico\", \"Sacramento\", 100)) worked (this is correct)\n";
  else cout << "tree.insert(\"Chico\", \"Sacramento\", 100)) did not work (this is incorrect)\n";

  // this should work
  if (tree.insert("Chico", "Redding", 100))
    cout << "tree.insert(\"Chico\", \"Redding\", 100)) worked (this is correct)\n";
  else cout << "tree.insert(\"Chico\", \"Redding\", 100)) did not work (this is incorrect)\n";

  // this should work
  if (tree.insert("Redding", "Los_Angeles", 100))
    cout << "tree.insert(\"Redding\", \"Los_Angeles\", 100)) worked (this is correct)\n";
  else cout << "tree.insert(\"Redding\", \"Los_Angeles\", 100)) did not work (this is incorrect)\n";

  // this should work
  if (tree.insert("Los_Angeles", "San_Diego", 100))
    cout << "tree.insert(\"Los_Angeles\", \"San_Diego\", 100)) worked (this is correct)\n";
  else cout << "tree.insert(\"Los_Angeles\", \"San_Diego\", 100)) did not work (this is incorrect)\n";

  // this should NOT work, Chico already has two children
  if (tree.insert("Chico", "San_Francisco", 100))
    cout << "tree.insert(\"Chico\", \"San_Francisco\", 100)) worked (this is incorrect)\n";
  else cout << "tree.insert(\"Chico\", \"San_Francisco\", 100)) did not work (this is correct)\n";

  // this should NOT work, New_York is not in the tree
  if (tree.insert("New_York", "San_Francisco", 100))
    cout << "tree.insert(\"New_York\", \"San_Francisco\", 100)) worked (this is incorrect)\n";
  else cout << "tree.insert(\"New_York\", \"San_Francisco\", 100)) did not work (this is correct)\n";

  // this should NOT work, Chico is already in the tree
  if (tree.insert("San_Diego", "Chico", 100))
    cout << "tree.insert(\"San_Diego\", \"Chico\", 100)) worked (this is incorrect)\n";
  else cout << "tree.insert(\"San_Diego\", \"Chico\", 100)) did not work (this is correct)\n";
}
