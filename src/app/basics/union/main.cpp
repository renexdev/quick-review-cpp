#include "include/basics.h"

int main() {
	struct Union{
		// two different ways of address the same memory
		union 
		{
			float a;
			int b;
		};
	};

	Union u;
	u.a = 2.0f;
	cout << u.a << " - " << u.b << endl;
	return EXIT_SUCCESS;
}
