#pragma once

#include <iostream>

using namespace std;


struct Vector2
{
	float x, y;
};
/*
struct Vector4
{
	float x, y, z, w;
	// funcion print vect2 para vect4 
	// vect4 son dos vect2
	Vector2& GetA()
	{
		// cast the memory addr of x to a vect2 and then derrefence it
		return *(Vector2*)&x;
	}
};
*/
// with union
struct Vector4
{
	union
	{
		struct
		{
			float x, y, z, w;
		};
		struct
		{
			Vector2 a, b;
		};
	};
};

void PrintVector2(const Vector2& vector){
    cout << "PrintVector2:" << endl;
    
	cout << vector.x << " - " << vector.y << endl;	
}