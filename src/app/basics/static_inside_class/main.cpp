#include "include/basics.h"

// They are extern now to the struct!
int Entity::x;
int Entity::y;

int main() {

	Entity e;
	e.x = 1;
	e.y = 2;
	
	
	Entity e1;
	// if vars defined static, they are no longer class members vars
	//e1 = {3 , 4};
	
	e1.x = 3;
	e1.y = 4;
	
	cout << "e instance ";
	e.Print();
	cout << endl;
	
	cout << "e1 instance ";
	e1.Print();
	cout << endl;
	

	return EXIT_SUCCESS;
}

