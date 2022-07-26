#include "include/basics.h"

int main() {

	//Print(3);
	Print<int>(3);
	//Print("hola");
	Print<string>("hola");
	//Print(6.9f);
	Print<float>(6.9f);

	Array<string, 5> array;
	Array<int, 5> array1;

	cout << array.GetSize() << endl;
	return EXIT_SUCCESS;
}

