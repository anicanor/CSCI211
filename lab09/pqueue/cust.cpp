#include "cust.h"

#include<iostream>

using namespace std;

Cust::Cust(string name, int arr_time, int num_of_item, bool robber)
{
  m_name=name;
  m_arr_time=arr_time;
  m_num_of_item=num_of_item;
  m_robber=robber;
}

void Cust::print(ostream &os)
{

  os << m_name << " " << (m_robber? "robber" : "shopper") << " " << m_arr_time << " "<< m_num_of_item << endl; 

}

