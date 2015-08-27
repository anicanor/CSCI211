// btree.h 
//Xuan Jin/Shirley 
//xjin
#ifndef BTREE_H
#define BTREE_H

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Btree
{
  public:
    bool insert(string str) { return insert(str, m_root);}
    void print_depth_first(vector<string> &strings) { print_depth_first(m_root,strings);}
    bool look_up(string target) {return look_up(m_root, target);}
    int height() {return height(m_root);} 
    int balanced() {return balanced(m_root);}
    int size() {return size(m_root);}
    double distance_total( ) {return distance_total(m_root, 0.0);}
    void print_breadth(vector<string> &strings); 
    void rebalance();
    ~Btree();
    bool remove(string target) {return remove(m_root, target); }

  private: 
    class Node
    {
      public:
        Node(string str) {m_left=NULL; m_right=NULL;m_str=str;}
        ~Node();
        Node *m_left;
        Node *m_right;
        string m_str;
    };
    Node *m_root;

    bool insert(string str, Node* &cur_root);
    void print_depth_first(Node* cur_root,vector<string> &strings);
    bool look_up(Node* cur_root,string target);
    int height(Node *cur_root);
    int balanced(Node *cur_root);
    int size(Node *cur_root);
    double distance_total(Node *cur_root, double counter);//int &counter); 
    int distance_total(Node *cur_root);//, int &counter); 
    void reinsert(vector<string> &strings, int beg, int end);
    bool remove(Node* cur_root,string target);




};
#endif

