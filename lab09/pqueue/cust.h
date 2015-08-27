#ifndef CUST_H
#define CUST_H
#include<iostream>

using namespace std;

class Cust
{
  public:
    Cust(string name, int arr_time, int num_of_item, bool robber);
    void print(ostream &os);

  private: 
    string m_name;
    int m_arr_time;
    int m_num_of_item;
    bool m_robber;         





};
#endif
