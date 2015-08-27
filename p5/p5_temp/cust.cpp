#include "cust.h"

#include<iostream>
#include<assert.h>

using namespace std;

Cust::Cust(string name, int arr_time, int num_of_item, bool robber)
{
  m_name=name;
  m_arr_time=arr_time;
  m_num_of_item=num_of_item;
  m_robber=robber;
}
int Cust::money_earned()
{
  return m_num_of_item * 5;
}

void Cust::print(ostream &os)
{

  os << m_name << " " << (m_robber? "robber" : "shopper") << " " << m_arr_time << " "<< m_num_of_item << endl; 

}

void Cust::print_entered(ostream & os, int clock)
{
  assert(clock == m_arr_time);
  os << clock << ": " << m_name << " entered store" << endl;
}

void Cust::print_done_shopping(ostream & os, int clock)
{
  //assert(clock == m_arr_time);
  os << clock << ": " << m_name << " done shopping" << endl;
}

int Cust::arr_time()
{
  return m_arr_time;
}

int Cust::time_done_shopping()
{
  int done_shopping= m_arr_time + m_num_of_item * 3;
  return done_shopping;
} 

int Cust::checkout_time()
{
  int time;
  if(!robber())
    time=2 * m_num_of_item;
  else
    time=7 * m_num_of_item;
  return time;
}
int Cust::done_checkout_time(int clock)
{ 
  int done_checkout = clock + checkout_time();
  return done_checkout;
}

bool Cust::done_checkout(int clock)
{
  return (done_checkout_time(clock) == clock);
}
/*
   int Cust::available_time(int clock)
   {
   available_time = clock + checkout_time();
   }
   */

void Cust::print_start_checkout(ostream & os, int clock, int checker)
{
  os << clock <<": "<< m_name << "started checkout with chekcer " << checker << endl;
}

bool Cust::robber()
{
  if(m_robber)
    return true;
  else
    return false;
}

void Cust::print_done_checkout_shopper(ostream & os, int clock, int money,int checker)
{
  os << clock << ": " << m_name << "paid $" << money << " for " << m_num_of_item << "items to checker " << checker << endl; 
}

void Cust::print_done_checkout_robber(ostream & os, int clock, int money,int checker)
{
  os << clock << ": " << m_name << "stole $" << money << " for " << m_num_of_item << "items from checker " << checker << endl; 
}

bool Cust::done_shopping(int clock)
{
  if(time_done_shopping() == clock)
    return true;
  else 
    return false;
}




