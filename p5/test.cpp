#include "cust.h"
#include "pqueue.h"

#include<iostream>
#include<fstream>
#include<istream>
#include<cstdlib>
#include<ostream>

using namespace std;
bool legal_int(char *str)
{
  while(*str)
  {
    if(isdigit(*str)==false)
    {
      return false;
    }
    else str++;
  }
  return true;
}

void run_simulation(Pqueue &arrival_queue, int num_checkers, int break_duration, ostream &os)
{
}
/*
//checker is checking how much money, available_time, customer? 
int money;
int available_time;
pointer to customer;
*/






int main(int argc, char *argv[])
{
  cout << argv[1]<< endl;
  //cout << "1"<< endl;

  if(argc<5 || argc >5)
  {
    cerr << "Error: invalid number of command line arguments."<< endl;
    exit(1);
  }

  if(legal_int(argv[1])==false)
  {
    cerr << "Error: invalid number of checkers specified." << endl;
  }
  if(legal_int(argv[2])==false)
  {
    cerr << "Error: invalid checker break duration specified." << endl;
  }

  string cust_name;
  int arr_time;
  int items;
  string cust_type;

  Pqueue arrival_q;

  cout << "0" <<endl;

  ifstream ifile(argv[3], ios::in);
  ofstream ofile(argv[4], ios::out);
  if(!ifile)
  {
    cerr << "Error: could not open input file <" << argv[3] << ">." << endl;
    exit(1);
  }

  cout << "1" <<endl;

  while(ifile >> cust_name)
  {
    cout << "2" <<endl;
    ifile >> cust_type;
    ifile >> arr_time;
    ifile >> items;

    arrival_q.enqueue(new Cust(cust_name, arr_time, items,(cust_type == "robber")),arr_time);
  }
  cout << "3"<< endl;
  if(!ofile)
  {
    cerr << "Error: could not open output file <" << argv[4] << ">." << endl;
    exit(1);
  }
  cout << "4" <<endl;
int num_checkers = atoi(argv[1]);
int break_duration = atoi(argv[2]);
  //run_simulation( arrival_q,  atoi(argv[1]),  atoi(argv[2]),  ofile);
  struct Checker
  { 
    int money;
    int m_available_time;
    Cust *m_cust;
  };
  Checker *checkers = new Checker[num_checkers];//array, it is an array, array always is a pointer to the first element, 
//cout << arrival_q.size();
  //int clock;
  cout<< "break1"<< endl;
  int num_customers=arrival_q.size();     
  Pqueue shop_Q;
  Pqueue checkout_q;
  for(int clock=0; num_customers > 0; clock++)
  {
    while(!arrival_q.empty() &&  (arrival_q.time_check() == clock))
    {
      Cust *customer = arrival_q.dequeue();
      customer->print_entered(cout, clock);
      shop_Q.enqueue(customer, customer->time_done_shopping());
    }
    while(!shop_Q.empty() && (shop_Q.time_check() == clock))
    {
      Cust *cust_done = shop_Q.dequeue();
      cust_done->print_done_shopping(cout, clock);
      checkout_q.enqueue(cust_done, 0);
    }
cout << "break2" << endl;
Cust *cust_checkout;
cout << "break3" << endl;
      while(cust_checkout->done_shopping(clock))
      {
    for(int i=0; i<num_checkers && !checkout_q.empty(); i++)
    {
      cout << "6" << endl;
         cust_checkout = checkout_q.dequeue();
      checkers[i].m_available_time = clock + checkers[i].m_cust->checkout_time();
      if (checkers[i].m_available_time <= clock && checkers[i].m_cust==NULL)
      {
        checkers[i].m_cust=cust_checkout; //the customer removed from the queue
        checkers[i].m_cust->print_start_checkout(cout,clock, i); 
        //  delete [] checkers[i].m_cust;

        if(!checkers[i].m_cust->robber())
        {
          checkers[i].money= checkers[i].money + checkers[i].m_cust->money_earned();
          checkers[i].m_cust->print_done_checkout_shopper(cout, clock, checkers[i].money, i);
        }
        else
        {
          checkers[i].m_cust->print_done_checkout_robber(cout,clock,checkers[i].money,i);
          checkers[i].money = 0;
          checkers[i].m_available_time = checkers[i].m_available_time+break_duration;
        }
      }
        delete [] cust_checkout;
        checkers[i].m_cust=NULL;
    }
        num_customers--;
      

    }
  

  cout << "5" << endl;
  }










  return 0;
}

