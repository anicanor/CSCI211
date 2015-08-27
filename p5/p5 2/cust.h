#ifndef CUST_H
#define CUST_H
#include<iostream>

using namespace std;

class Cust
{
  public:
    Cust(string name, int arr_time, int num_of_item, bool robber);
    void print(ostream &os);
    void print_entered(ostream &os, int clock);
    int arr_time();
    void print_done_shopping(ostream & os, int clock);
    int time_done_shopping();
    int money_earned();
    void print_start_checkout(ostream &os, int clock, int checker);
    int done_checkout_time(int clock);
    void print_done_checkout_shopper(ostream & os, int clock, int money,int checker);
    void print_done_checkout_robber(ostream & os, int clock, int money,int checker);
    bool done_shopping(int clock);
    bool robber();         
    bool done_checkout(int clock);
    int checkout_time();
    int done_checkout_time();
    //int get_checkout_time();


  private: 
    string m_name;
    int m_arr_time;
    int m_num_of_item;
    //int clock;
    bool m_robber;




};
#endif
