#pragma once

#include <iostream>
#include <string>

using namespace std;

// function template
template<typename T>
void Print(T val){
    cout << val << endl;
}

// class template, a class that creates an array on the stack
template<typename T, int N>
class Array
{
public:
    int GetSize() const { return N;}
private:
    T m_Array[N]; // array' size has to be kwnown at compile-time
};