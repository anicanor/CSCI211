#ifndef VLIST_H
#define VLIST_H

#include<iostream>
#include<string>

#include "video.h"

using namespace std;


class Vlist
{
  public:

    //Video *information;
    //Vlist(string title, string URL, string comment,float length, int rating);// {m_head=NULL};
    //~Vlist();
    void insert(Video information);
    void print();
    //void insert_at_end();

  private:
    class Node
    {
      public:

        Node(Video *information, Node *next)
        {m_information = information; m_next = next;}
        Video *m_information;
        Node *m_next;
        //Video *information; 
    };
    Node *m_head;
    string m_title;
    string m_URL;
    string m_comment;
    float m_length;
    int m_rating;


};
#endif

