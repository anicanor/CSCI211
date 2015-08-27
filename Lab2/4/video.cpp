#include "video.h"

#include<iostream> 

using namespace std;

Video::Video(string name, string address, string comments, float length, int rating)
{
  m_name=name;
  m_address=address;
  m_comments=comments;
  m_length=length;
  m_rating=rating;
}

void Video::print()
{

cout << m_name << ", " << m_address << ", " << m_comments << ", " << m_length << ", ";

for(int n=m_rating; n>0; n--)
{
  cout << "*";
}
cout << endl;

}
