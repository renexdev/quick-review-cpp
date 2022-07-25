#pragma once

#include <iostream>
#include <string>

using namespace std;

// This is call interface, all virtual fn
class Printable
{
public:
	virtual string PrintClassName() = 0;
};

class Entity: public Printable
{
public:
	virtual string GetName()
	{
		return "GetName-Entity";
	}
	string PrintClassName() override
	{ return "Entity";} 
};

void PrintName(Entity* e)
{
	cout << e->GetName() << endl;
}
void PrintClassName(Printable *obj)
{
	cout << "Class type: "<< obj->PrintClassName() << endl;
}
class Player: public Entity 
{
public:
	Player(const string& name)
	: m_Name(name){ cout << "Constructor:" << name << endl;}

	string GetName() override //optional but makes code more readable
	{return m_Name;} 
	
	string PrintClassName() override
	{ return "Player";} 
private:
	string m_Name;	
};

class Enemy: public Entity 
{
public:
	Enemy(const string& name)
	: m_Name(name){ cout << "Constructor:" << name << endl;}

	string GetName() override //optional but makes code more readable
	{return m_Name;} 
	
	string PrintClassName() override
	{ return "Enemy";} 
private:
	string m_Name;	
};