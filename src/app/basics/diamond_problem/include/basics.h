#pragma once

#include <iostream>
#include <cstring>

using namespace std;

// Member functions, pass by value or by ref
class BaseClass {
public:
	void Show(){ cout << "Show from BaseClass" << endl;};
};

class FirstLevelClassA: public BaseClass {
};
class FirstLevelClassB: public BaseClass {
};
class SecondLevelClassA: public FirstLevelClassA, FirstLevelClassB {
};
