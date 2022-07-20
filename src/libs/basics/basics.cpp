
#include "include/basics.h"

using namespace std;

// Params
void Basics::funa(int z)
{
	z = 1;	// OK change to a is local to funa()
}

void Basics::funb(const int z)
{
	//z = 1;	//Compile error - trying to change a const
}

// Con la referencia evito que se haga la copia del objeto, lo que
//se modifica se mofica en la funcion
void Basics::func(int& z)
{
	z = 1;	// Change to a is reflected back to caller - so must be assignable
}

void Basics::fund(const int& z)
{
	// z = 1	//Compile error - trying to change a const
}