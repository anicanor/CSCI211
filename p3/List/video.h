//Xuan Jin/Shirley 
//CSCI211 Project2

#ifndef VIDEO_H
#define VIDEO_H
#include<iostream>
using namespace std;

class Video
{
  public:
    Video(string name, string address, string comments, float length, int rating);
    void print();
    bool longer(Video *other);
    bool lower(Video *other);
    bool alph(Video *other);

  private: 
    string m_name;
    string m_address;
    string m_comments;
    float m_length;
    int m_rating;


};
#endif
