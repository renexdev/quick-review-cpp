#pragma once

#include <iostream>
#include <vector>

using namespace std;

struct Vect3d
{
	float x, y, z;

	Vect3d(float x, float y, float z)
		: x(x), y(y), z(z)
	{
		cout << "Created" << endl;
	};
	// copy constructor
	Vect3d(const Vect3d& otro)
		: x(otro.x), y(otro.y), z(otro.z)
	{ 
		cout << "Copying" << endl;
	};
	~Vect3d()
	{
	};
};