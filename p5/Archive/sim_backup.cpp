#include "cust.h"
#include "pqueue.h"

#include<iostream>
#include<fstream>
#include<istream>
#include<cstdlib>
#include<ostream>
#include<assert.h>

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
  struct Checker
  { 
    int money;
    int m_available_time;
    Cust *m_cust;
  }; 
  Checker *checkers = new Checker[num_checkers];//array, it is an array, array always is a pointer to the first element, 


  int clock;
  int num_customers=arrival_queue.size();     
  Pqueue shop_Q;
  Pqueue checkout_q;
  for(clock=0; num_customers > 0; clock++)
  {
    while(!arrival_queue.empty() &&  (arrival_queue.time_check() == clock))
    {
      Cust *customer = arrival_queue.dequeue();
      customer->print_entered(os, clock);
      shop_Q.enqueue(customer, customer->time_done_shopping());
    }

    //Cust *cust_done = shop_Q.dequeue();
    //while(!shop_Q.empty() && (cust_done->done_shopping(clock)))
    //(shop_Q.time_check() == clock))
    while(!shop_Q.empty() && (shop_Q.time_check() == clock))
    {
      Cust *cust_done = shop_Q.dequeue();
      cust_done->print_done_shopping(os, clock);
      checkout_q.enqueue(cust_done, 0);
    }
    for(int i=0; i<num_checkers; i++)
    {
      cout << "break1" << endl;
      cout << "clock: " << clock<< endl;
      //if(checkers[i].m_cust != NULL && checkers[i].m_available_time == clock )
      //Cust *checkout_done=checkout_q.dequeue();
      //if(checkers[i].m_cust!=NULL && (checkers[i].m_cust->done_checkout(clock))) 
      /*
         if(checkers[i].m_cust!=NULL && checkers[i].m_cust->done_checkout(checkers[i].m_available_time))
         {
         cout << "break2" << endl;
      //     checkers[i].m_cust->print(cout);
      if(checkers[i].m_cust->m_robber())
      {
      cout << "break3" << endl;
      checkers[i].m_cust->print_done_checkout_robber(cout,clock,checkers[i].money,i);
      cout << "break4" << endl;
      checkers[i].money = 0;
      }
      else
      {
      checkers[i].money = checkers[i].money + checkers[i].m_cust->money_earned();
      checkers[i].m_cust->print_done_checkout_shopper(os, clock, checkers[i].money, i);
      }
      }
      //Cust *tmp = checkers[i].m_cust;
      //delete [] tmp;
      delete [] checkers[i].m_cust;
      num_customers--;
      checkers[i].m_cust=NULL;
      }

      //cout << "num:" << num_customers << endl;

      for(int i=0; i < num_checkers && checkout_q.empty() == false; i++)
      {
      assert(checkers[i].m_cust==NULL);
      cout << "break7" << endl;
      Cust *checkout_done=checkout_q.dequeue();
      checkers[i].m_cust = checkout_done;
      checkers[i].m_available_time =  checkers[i].m_cust->checkout_time() + checkers[i].m_available_time;
      // checkers[i].m_cust->done_checkout_time(checkers[i].m_available_time);
      checkers[i].m_cust->print_start_checkout(os, clock, i);
      if(checkers[i].m_cust->m_robber())
      checkers[i].m_available_time = checkers[i].m_available_time+break_duration;
      }
      */
      if(!checkout_q.empty())
      {
        for(int i=0; i<num_checkers; i++)
        {
          if(checkers[i].m_cust != NULL && checkers[i].m_available_time == clock)
          {
            Cust *checkout = checkout_q.dequeue();
            checkers[i].m_cust=checkout;
            if(checkers[i].m_cust->m_robber())
            {
              cout << "break3" << endl;
              checkers[i].m_cust->print_done_checkout_robber(cout,clock,checkers[i].money,i);
              cout << "break4" << endl;
              checkers[i].money = 0;
            }
            else
            {
              checkers[i].money = checkers[i].money + checkers[i].m_cust->money_earned();
              checkers[i].m_cust->print_done_checkout_shopper(os, clock, checkers[i].money, i);
            }
          }
          delete [] checkers[i].m_cust;
          num_customers--;
          checkers[i].m_cust=NULL;
        }
        for(int i=0; i< num_checkers && checkout_q.empty() == false; i++)
        {
          checkers[i].m_available_time =  checkers[i].m_cust->checkout_time() + checkers[i].m_available_time;
          // checkers[i].m_cust->done_checkout_time(checkers[i].m_available_time);
          //       checkers[i].m_cust->print_start_checkout(os, clock, i);
          //             if(checkers[i].m_cust->m_robber())
          //                     checkers[i].m_available_time = checkers[i].m_available_time+break_duration;
          //                      }
          //                      }
          //                      

          cout << "break8" << endl;
          cout << "clock: " << clock << endl;
          if(clock==100000)
            break;
  }
  cout << "break9" << endl;
}
/*
//checker is checking how much money, available_time, customer? 
int money;
int available_time;
pointer to customer;
*/






int main(int argc, char *argv[])
{
  //cout << argv[1]<< endl;
  //cout << "1"<< endl;

  if(argc<5) 
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

  run_simulation( arrival_q,  atoi(argv[1]),  atoi(argv[2]),  ofile);
  cout << "end" << endl;











  return 0;
}

