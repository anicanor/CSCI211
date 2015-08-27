// video.cpp
// Xuan Jin/Shirley
// xjin

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

cout << m_name <<  ", "  << m_address << ", " << m_comments << ", " << m_length << ", ";

for(int n=m_rating; n>0; n--)
{
  cout << "*";
}
cout << endl;

}

bool Video::longer(Video *other)
{
  return m_length > other -> m_length;
}


bool Video::lower(Video *other)
{
  return m_rating < other -> m_rating;
}

bool Video::alph(Video *other)
{
  return m_name > other -> m_name;
}

