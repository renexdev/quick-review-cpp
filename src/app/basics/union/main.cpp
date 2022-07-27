#include "include/basics.h"


int main() {

	struct Union{
		// two different ways of address the same memory
		// used as type punning
		union 
		{
			float a;
			int b;
		};
	};

	Union u;
	u.a = 2.0f;
	cout << u.a << " - " << u.b << endl;

	Vector4 v = {1.0f, 4.0f, 6.0f, 10.0f};
	cout << v.x << " - " << v.y << " - " << v.z << " - " << v.w << endl;
	PrintVector2(v.a);
	PrintVector2(v.b);
	v.x = 8.0f; 
	v.z = 9.0f; 
	cout << v.x << " - " << v.y << " - " << v.z << " - " << v.w << endl;
	PrintVector2(v.a);
	PrintVector2(v.b);
	return EXIT_SUCCESS;
}
