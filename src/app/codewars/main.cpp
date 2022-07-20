// A sample program demonstrating using Google C++ testing framework.
#include <iostream>
#include <vector>
// Biblioteca Ejemplo Google Test
#include "my_code_exercises.h"

using namespace std; 
int main() {
	MyCodeWars myCodeWars;
	vector<char> V{'n','s','n','s','n','s','n','s','n','s'};
	cout << "Ejemplo " << endl;
	myCodeWars.isValidWalk(V); 
	
	return EXIT_SUCCESS;
}

