#include <iostream>
#include <memory>

#include "basics.h"
using namespace std; 


void fn_with_unique_ptr_param_not_allowed (unique_ptr<Entity> param) 
{
	//snipet
}
void fn_with_shared_ptr_param (shared_ptr<Entity> param) 
{
	//snipet
}
int main() {
	Basics basicPattern;
	int z = 0;
	cout << "Valor inicial: " << z << endl;
	basicPattern.funa(z);
	/*
	funb & fund can't change the param value
	*/
	cout << "Valor luego de funa: " << z << endl;
	basicPattern.func(z);
	cout << "Valor luego de func: " << z << endl;
	
	basicPattern.test_enum();
	basicPattern.test_string();

	//Classes
	// El new te da un puntero
	Dog *dexter = new Dog("Dex");
	dexter->animalSound();
	Pig *elChanchitoValient = new Pig("Babe");
	elChanchitoValient->animalSound();
	delete dexter;
	delete elChanchitoValient;

	//Friendship
	ClaseA* a = new ClaseA();
	ClaseB* b = new ClaseB();
    //ClaseA a;
    //ClaseA* ptr_to_a = &a;

	b->display(*a);
	// Static vs Const member functions
	ClaseMembFunBehav::static_fun();

	ClaseMembFunBehav* c = new  ClaseMembFunBehav(3);
	c->static_fun();	
	cout << c->const_fun() << endl;
	c->tryin_change_val(4);
	cout << c->const_fun() << endl;
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

	// Punteros
	//clasico
	cout << "Puntero clasico para asignar obj en heap" << endl; 
	Entity* test_ptr = new Entity;
	// sino llamamos el operador delete queda en memoria
	delete test_ptr;
	
	//smart
	cout << "unique_ptr" << endl;
	// unique: no pueden haber mas de 1 ref al mismo recurso en este caso la clase Entity
	
	/*https://stackoverflow.com/questions/3568503/extra-brace-brackets-in-c-code
	Braces affect variable scope. As far as I know that is all they do.

	Yes, this can affect how the program is compiled. Destructors will be called at the end of the block instead of waiting until the end of the function.

	Often this is what you want to do. For example, your GetMutexLock and ReleaseMutexLock would be much better C++ code written like this:
	*/
	//{
		//se puede hacer asi pq el contructor es explicit
		unique_ptr<Entity> entity_unique_ptr(new Entity);
		
		//fn_with_unique_ptr_param_not_allowed(entity_unique_ptr);
		// Obtener puntero clasico
		
		Entity* entity_unique_ptr_2_ptr = entity_unique_ptr.get();
	//}

	cout << "shared_ptr" << endl;
	shared_ptr<Entity> entity_shared_ptr{new Entity};
	
	fn_with_shared_ptr_param(entity_shared_ptr);
	
	cout << "fin punteros" << endl;

	//No hay que borrarlo pq se encargará unique_ptr
	return EXIT_SUCCESS;
}



/*
// print vector content 
cout << "way 1: classic" << endl;
for (size_t i = 0; i < walk.size(); ++i) {
  cout << walk.at(i) << "; "; //walk[i]
}
cout << endl;

cout << "way 2: " << endl;
for (const auto &item : walk) {
  cout << item << "; ";
}
cout << endl;

cout << "way 3: iterator" << endl;
for (vector<char>::iterator it = walk.begin(); it!= walk.end(); it++) {
  cout << *it<< "; "; //walk[i]
}
cout << endl;

cout << "way 4: for:each" << endl;
for_each(walk.begin(), walk.end(),
            [](const char& walk_step) { cout << walk_step << "; "; });
cout << endl;
*/
