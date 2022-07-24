#pragma once

#include <iostream>
#include <cstring> //uso memcpy
//https://www.youtube.com/watch?v=ehMg6zvXuMY&ab_channel=TheCherno
//https://stackoverflow.com/questions/9257665/difference-between-string-and-string-h
using namespace std;


class String
{
public:
	String() = default;

	String(const char* string)
	{	
		cout << "Constructor" << endl;
		m_Size = strlen(string);
		m_Data = new char[m_Size]; //devuelve un puntero
		memcpy(m_Data, string, m_Size);
	};

	// copy constructor
	String(const String& other){
		cout << "Copy" << endl;
		m_Size = other.m_Size;
		// We are allocating memory on the heap
		m_Data = new char[m_Size]; //devuelve un puntero
		//void * memcpy(void *to, const void *from, size_t numBytes);
		memcpy(m_Data, other.m_Data, m_Size);
	}
	
	// move constructor
	// Cudado de que no se pase el const
	String(String&& other) noexcept
	{	
		cout << "Move" << endl;
		// We are taking control of other obj
		// We are rewiring the pointers
		m_Size = other.m_Size;
		m_Data = other.m_Data; //devuelve un puntero
		//resetiamos el anterior
		other.m_Size = 0;
		other.m_Data = nullptr; //devuelve un puntero
	}
	
	~String(){
		cout << "Delete" << endl;
		delete m_Data;
	}

	void Print(){
		for(uint32_t i = 0; i < m_Size; i++){
			//cout << *(m_Data + i) ;
			cout << m_Data[i];
		}
		cout << endl;
	}
private:
	char* m_Data;
	uint32_t m_Size;
};

class Entity
{
public:
	/*
	Entity(const String& name)
	:m_Name(name)
	{
	}
	*/
	Entity(String&& name)
	//:m_Name(name) // copiado Estoy llamando el contructor de copia
	// :m_Name((String&&)name)
	:m_Name(move(name))
	{
	}

	void PrintName(){
		m_Name.Print();
	}

private:
	String m_Name;
};