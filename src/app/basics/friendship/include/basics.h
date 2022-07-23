#pragma once

#include <iostream>

using namespace std;

// Friend Class in C++
class ClaseA
{
    int i =3;
    friend class ClaseB;
};

class ClaseB
{
  public:
    void display(ClaseA &a)
    {
        cout<<"The value of i is : " << a.i << endl;
    }
};
