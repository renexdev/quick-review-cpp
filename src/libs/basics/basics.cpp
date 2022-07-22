
#include "include/basics.h"

using namespace std;

// Params
void Basics::funa(int z)
{
	cout << "funa"<< endl;	

	z = 1;	// OK change to a is local to funa()
}

void Basics::funb(const int z)
{
	cout << "funb"<< endl;	

	//z = 1;	//Compile error - trying to change a const
}

// Con la referencia evito que se haga la copia del objeto, lo que
//se modifica se mofica en la funcion
void Basics::func(int& z)
{
	cout << "func"<< endl;	

	z = 1;	// Change to a is reflected back to caller - so must be assignable
}

void Basics::fund(const int& z)
{
	cout << "fund"<< endl;	

	// z = 1	//Compile error - trying to change a const
}

void Basics::test_enum()
{
	cout << "test_enum"<< endl;	
	enum {blue, green = 5, GREAT};
	cout << blue << " " << GREAT<< endl;		

}

void Basics::test_string()
{
	string palabra = "hola";
	cout << palabra.size() << "-" << palabra.length() << endl;	


}
