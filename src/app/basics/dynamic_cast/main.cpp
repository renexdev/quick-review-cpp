#include "include/basics.h"

int main() {

	//Asignar la clase deriva a la clase base es trivial
	Player* p = new Player("tony-stark");
	Entity* en = p; //implicity cast conversion

	//No al reves pq tenemos dos clases derivadas 
	Entity* e2 = new Enemy("tanos");
	//Entity* e2 = new Player("tanos");

	//Player* p = e2; //: error: redeclaration of ‘Player* p’
	Player* p2 = dynamic_cast<Player*>(e2);
	
	if(p2){
		PrintClassName(p2);
	}
	else if (p2 == nullptr){
		cout << "El puntero no es del tipo Player" << endl;
	}

	return EXIT_SUCCESS;
}

