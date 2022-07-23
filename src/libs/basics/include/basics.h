#pragma once

#include <iostream>
#include <string>
using namespace std;

class Basics {

public:
	void funa(int z);
	void funb(const int z);
	void func(int& z);
	void fund(const int& z);
	void test_enum();
	void test_string();

};

//Ejemplos clases

class Animal {
protected:
	Animal(string petName):petName(petName){}
public:
	void animalSound(){ cout << "The animal makes a sound \n";}
	string animalName(){return petName;}
private:
	string petName;
};

//Derived Class
class Pig: public Animal
{
public:
	Pig(string petName):Animal(petName){};
	void animalSound(){ cout << this->animalName() << " says: wee wee \n" ; }
};

//Derived Class
class Dog: public Animal
{
public:
	Dog(string petName):Animal(petName){};
	void animalSound(){ cout << this->animalName() << " says: bow wow \n" ; }
};

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

// Static vs Const member functions
class ClaseMembFunBehav
{
	int val;
public:
	ClaseMembFunBehav(int x): val(x){};
    static void static_fun(){cout << "Accessing a static funct \n";}
	int const_fun() const {return val;}
	int tryin_change_val(int mod_val){this->val = mod_val;}
};



// Static vs Const member functions
class Entity
{
public:
	Entity(){cout << "> Entity::Entity()"<< endl;};
	~Entity(){cout << "> Entity::~Entity()"<< endl;};
};