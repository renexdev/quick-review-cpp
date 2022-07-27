#include "include/basics.h"

int main() {
	
	SecondLevelClassA* obj = new SecondLevelClassA();
	// If we call Show function from the very base class, the compiler doesnt know
	// which path to Base has to follow, if from FirstLevelClassA or B
	//obj->Show();


	return EXIT_SUCCESS;
}

