#include "include/basics.h"

// assigned by value & by ref
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

// Simply enum test
void Basics::test_enum()
{
	cout << "test_enum"<< endl;	
	enum {blue, green = 5, GREAT};
	cout << blue << " " << GREAT<< endl;		
}


int main() {
	
	// Basics
	int i;
	int j= 10;
	//Se van ejecutando, el unico que afecta j es el primero, el ultimo se termina asignando a i
	i = (j++,j+100,999+j);
	cout<< i << endl;

	// Exception handling
	float num(1.),den(0.),result(0.);
	try
	{
		if(den == 0.)
		{
			throw den;
		}
		else{
			result	= num/den;
		}
	}
	catch(float d){
		cout << "El denominador no puede ser " << d<< endl;
	}
	cout << result << endl;

	// Clases
	/*
	[When to use pointer to a class and when to just instantiate it as a variable](https://stackoverflow.com/questions/4599249/when-to-use-pointer-to-a-class-and-when-to-just-instantiate-it-as-a-variable)
	A good way to think about when to stack-allocate (non-pointer) versus heap-allocate (pointer) an object is to think about how long you want that object to live. If you put the object on the stack as a local variable, then it will be cleaned up and cease to exist as soon as the function returns. If you want the object to outlive the function call that created it, put it on the heap.

	[C++: What are scenarios where using pointers is a "Good Idea"(TM)? ](https://stackoverflow.com/questions/4029970/c-what-are-scenarios-where-using-pointers-is-a-good-ideatm)
	Pointers preferable 

    When I need to dynamically create an object whose lifetime exceeds the scope in which it was created.
    When I need to allocate an object whose size is unknown at compile time.
    When I need to transfer ownership of an object from one thing to another without actually copying it (like in a linked list/heap/whatever of really big, expensive structs)
    When I need to refer to the same object from two different places.
    When I need to slice an array without copying it.
    When I need to use compiler intrinsics to generate CPU-specific instructions, or work around situations where the compiler emits suboptimal or naive code.
    When I need to write directly to a specific region of memory (because it has memory-mapped IO).
	*/

	// Instantiate a clas as a variable
	//[Explicit initialization with constructors (C++ only)](https://www.ibm.com/docs/en/zos/2.3.0?topic=only-explicit-initialization-constructors-c)
	Basics simplestClass;

	// assigned by value & by ref
	int z = 0;
	cout << "Valor inicial: " << z << endl;
	simplestClass.funa(z);
	/*
	funb & fund can't change the param value
	*/
	cout << "Valor luego de funa: " << z << endl;
	simplestClass.func(z);
	cout << "Valor luego de func: " << z << endl;
	
	simplestClass.test_enum();

	//Classes
	// El new te da un puntero
	Dog *dexter = new Dog("Dex");
	dexter->animalSound();
	
	Pig *elChanchitoValient = new Pig("Babe");
	elChanchitoValient->animalSound();
	
	// remove resources
	delete dexter;
	delete elChanchitoValient;

	return EXIT_SUCCESS;
}

