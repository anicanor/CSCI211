// btree.cpp 
//Xuan Jin/Shirley 
//xjin
#include "btree.h"
#include<iostream>
#include<vector>
#include<queue>
#include<math.h>

using namespace std;

void Btree::rebalance()
{
   // traverse the tree and build a vector of all strings in the tree
   vector<string> strings;
   print_depth_first(strings); // this fills in the vector strings

   // delete all the element in the tree
   delete m_root; // for this to delete all the nodes, you need a recursive Node::~Node() 

   // now that all the elements have been deleted, set m_root to NULL
   m_root = NULL;

   reinsert(strings,0,strings.size() - 1);
}

bool Btree::insert(string str, Node* &cur_root)
{
  if(cur_root==NULL)
  {
    cur_root=new Node(str);
    //cout << height(m_root) << endl;
    return true;
  }
  if(cur_root->m_str==str)
    return false;

  if(cur_root->m_str>str)
    return insert(str, cur_root->Node::m_left);
  //return insert(cur_root->m_left, str);

  //return insert(cur_root->m_right, str);
  return insert(str, cur_root->Node::m_right);
}


void Btree::print_depth_first(Node* cur_root,vector<string> &strings)
{
  //cout << 2 << endl;
  if(cur_root!=NULL)
  {
    print_depth_first(cur_root->m_left, strings);
    strings.push_back(cur_root-> m_str);
    //cout<<cur_root->m_str<<endl;
    print_depth_first(cur_root->m_right, strings);
  }
}

void Btree::print_breadth(vector<string> &strings)
{
  //pop off front of Q
  //push back on the vector
  //push children onto Q
  queue<Node*> myqueue;
  myqueue.push(m_root);

  while(!myqueue.empty())
  {
    Node*tmp=myqueue.front();
    myqueue.pop();

    strings.push_back(tmp->m_str);
    if(tmp->m_left!=NULL)
    {
      myqueue.push(tmp->m_left);
    }
    if(tmp->m_right!=NULL)
    {
      myqueue.push(tmp->m_right);
    }
  }



}

bool Btree::look_up(Node* cur_root,string target)
{
  if(cur_root==NULL)
    return false;
  if(cur_root->m_str==target)
    return true;

  if(target < cur_root->m_str)
    return look_up(cur_root->m_left, target);

  return look_up(cur_root->m_right, target);
}

int Btree::height(Node *cur_root)
{
  if(!cur_root)
    return 0;

  int left_height=height(cur_root->m_left);
  int right_height=height(cur_root->m_right);

  //int difference = left_height - right_height;

  //if(abs(difference) <=1)
  return max(left_height, right_height) +1;
  //else 
   // return -1;
}

int Btree::balanced(Node *cur_root)
{
  
  if(cur_root == NULL)
    return 0;

  int left_height = balanced(cur_root->m_left);
  int right_height = balanced(cur_root->m_right);

  if(left_height== -1 || right_height ==-1)
    return -1;

  if (abs(left_height - right_height) > 1)
    return -1;
  else
    return max(left_height, right_height)+1;
}

int Btree::size(Node *cur_root)
{
  if(!cur_root)
    return 0;

  else
    return size(cur_root->m_left)+1+size(cur_root->m_right);
}


double Btree::distance_total(Node *cur_root, double counter)
  //int Btree::distance_total(Node *cur_root)
{
  if(cur_root==NULL)
    return 0;

  return counter+distance_total(cur_root->m_left, counter+1) + distance_total(cur_root->m_right, counter+1);

}

Btree::Node::~Node()
{
  delete m_left;
  delete m_right;
}

Btree::~Btree()
{
  delete m_root;
  m_root=NULL;
}


void Btree::reinsert(vector<string> &strings, int beg, int end)
{
  // base case where this segment is empty
  if (end < beg)
  {
    // do nothing
    return;
  }

  // if we have element, insert it
  if (beg==end)
  {
      insert(strings[beg]);
      return;
  }

// if(beg==end && end-1< beg)
// return ;

int middle =( beg + end)/2;
insert(strings[middle]);
reinsert(strings, beg, middle-1);
reinsert(strings, middle+1, end);
}

bool Btree::remove(Node* cur_root,string target)
{
  if(cur_root==NULL)
    return false;
  if(cur_root->m_str==target)
  {
    Node *ptr = cur_root;
   ptr->m_left = ptr->m_left->m_left ;
   delete ptr; 
    return true;
  }

  if(cur_root->m_str==target)
  {
    Node *tmp = cur_root ;
   tmp->m_right = tmp->m_right->m_right ;
   delete tmp;
    return true;
  }
  if(target < cur_root->m_str)
    return look_up(cur_root->m_left, target);

  return look_up(cur_root->m_right, target);
}
