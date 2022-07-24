#pragma once

#include <iostream>

using namespace std;

struct Entity{
	//int x, y;
	// Making var static, there will be only one instance of the var in all over the obj instances of Entity!
	static int x, y;

	void Print()
	{
		cout << x << " - " << y << endl;
	}
};