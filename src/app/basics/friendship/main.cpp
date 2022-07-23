#include "include/basics.h"

int main() {

	//Friendship
	ClaseA* a = new ClaseA();
	ClaseB* b = new ClaseB();
    //ClaseA a;
    //ClaseA* ptr_to_a = &a;

	b->display(*a);

	delete a,b;

	return EXIT_SUCCESS;
}
