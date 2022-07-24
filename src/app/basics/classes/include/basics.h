#pragma once

#include <iostream>
#include <cstring>

using namespace std;

// Member functions, pass by value or by ref
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
	Animal(string petName):m_petName(petName){}
public:
	void animalSound(){ cout << "The animal makes a sound \n";}
	string animalName(){return m_petName;}
private:
	string m_petName;
};

//Derived Class 1
class Pig: public Animal
{
public:
	Pig(string petName):Animal(petName){};
	void animalSound(){ cout << animalName() << " says: wee wee \n" ; }
};

//Derived Class 2
class Dog: public Animal
{
public:
	Dog(string petName):Animal(petName){};
	void animalSound(){ cout << animalName() << " says: bow wow \n" ; }
};
