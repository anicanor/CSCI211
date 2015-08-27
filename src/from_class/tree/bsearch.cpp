/*
  Demonstration of an simple binary search tree of integers.

  This code does not balance the tree.

  Make sure you understand why cur_root is passed by reference.

  This code is significantly different than the assignment.  Don't use
  this code as a starting point for the assignment.

*/


#include <iostream>
using namespace std;

class Tree
{
  public:
    Tree() {m_root = 0;}
    ~Tree() {delete m_root; m_root = NULL;} // Node's destructor is recursive
    bool insert(int value) {return insert(value, m_root);}
    bool lookup(int value) {return lookup(value, m_root);}
  private:
    class Node
    {
      public:
        Node(int value) {m_value = value; m_left = NULL; m_right = NULL;}
        ~Node() {delete m_left; delete m_right;} // recursive destructor
        int m_value;
        Node *m_left;
        Node *m_right;
    };
    Node *m_root;

    bool insert(int value, Node *&cur_root);
    bool lookup(int value, Node *cur_root);

};


// Pass a reference to a pointer so the pointer can be modified 
//    Consider the case of insert(value cur_root->m_left) when 
//    cur_root->m_left is NULL.  What we want to do is for cur_root->m_left
//    to point to the new node.  Since we pass the cur_root as a reference
//    we can modify it in the insert function (cur_root is really the 
//    m_left (or m_right) field of the cur_root in the last call to insert).
bool Tree::insert(int value, Node *&cur_root)
{
  if (cur_root == NULL)
  {
    cur_root = new Node(value);
    return true;
  }
  else if (cur_root->m_value == value)
  {
    return false; // value already in tree
  }
  else if (cur_root->m_value > value)
  {
    return insert(value, cur_root->m_left); // insert in left subtree
  }
  else 
  {
    return insert(value, cur_root->m_right); // insert in right subtree
  }
}

bool Tree::lookup(int value, Node *cur_root)
{
  // an empty tree does not contain the value
  if (!cur_root)
    return false;

  // if the value equals the value at current node, we found it
  if (cur_root->m_value == value)
    return true;

  // look in cur_root's left or right subtree
  if (cur_root->m_value > value)
    return lookup(value, cur_root->m_left);
  else return lookup(value, cur_root->m_right);
}

int main()
{
  Tree tree;

  tree.insert(42);
  tree.insert(11);
  tree.insert(17);
  tree.insert(86);
  tree.insert(99);
  tree.insert(50);

  for (int i = 0; i < 100; i++)
  {
    if (tree.lookup(i))
    {
      cout << i << " is in tree" << endl;
    }
  }
  return 0;
}
