#include "include/basics.h"

int main() {

	//cout << sizeof(Entity) << endl;
	//ccout << sizeof(Player) << endl;

	Entity* e = new Entity();
	PrintName(e);
	PrintClassName(e);

	Player* pl = new Player("renex");
	PrintName(pl);
	PrintClassName(pl);
	Entity* e2 = pl;
	PrintName(e2);

	PrintClassName(new A());

	delete e,e2,pl;
	
	

	return EXIT_SUCCESS;
}

