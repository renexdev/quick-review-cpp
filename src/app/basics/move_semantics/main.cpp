#include "include/basics.h"


int main(){ 

	// we pass and rvalue
	Entity entity("Nombre"); //We will need a copy constructor
	//Entity entity(String("Nombre"));
	entity.PrintName();


	return EXIT_SUCCESS;
}

