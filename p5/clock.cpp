#include <iostream>
#include<string>


using namespace std;


void print_done_checkout_shopper()
{
  cout << "shopper has done shopping" << endl;
}

void print_done_checkout_robber()
{
  cout << "robber has done robbing" << endl;
}
int time_done_shopping(int m_arr_time, int m_num_of_item)
{
  int done_shopping= m_arr_time + m_num_of_item * 3;
  return done_shopping;
} 

bool m_robber()
{return true;}

int done_checkout_time(clock)
{
  int time;
  if(!m_robber())
    time=clock+2 * 1;
  else
    time=clock+7;
  return time;
}
int get_checkout_time()
{
  return done_checkout_time(clock);
}
/*
int done_checkout_time(int clock)
{ 
  int done_checkout = clock + checkout_time();
  return done_checkout;
}
*/

bool done_checkout(int clock)
{
   if(get_checkout_time() == clock)
     return true;
}


int main()
{
  int num_customers;
  cout << "num_customers: " ;
  cin >> num_customers;
  for(int clock=0; num_customers > 0 && clock <= 10; clock++)
  {
  cout << "break1" << endl;
  cout << "clock: " << clock << endl;
  if(done_checkout(clock)) 
  {
    
    cout << "break2" << endl;
    if(m_robber()==false)
    {
      print_done_checkout_shopper();
    }
    else
    {
      print_done_checkout_robber();
    } 
  }
  }
  return 0;
}
