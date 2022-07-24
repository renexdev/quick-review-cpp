#pragma once

#include <iostream>

using namespace std;

struct Entity{
	//int x, y;
	static int x, y;

	void Print()
	{
		cout << x << " - " << y << endl;
	}
};