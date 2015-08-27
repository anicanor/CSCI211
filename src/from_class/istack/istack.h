#ifndef ISTACK_H
#define ISTACK_H

class Istack
{
  public:
    Istack(int initial_size);
    ~Istack();

    void push(int value);
    bool pop(int &value);
    bool empty() {return m_size == 0;}

  private:
    int *m_values;
    int m_size;
    int m_max_size;

};

#endif
