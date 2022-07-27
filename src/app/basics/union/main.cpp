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
	int a[5];
	int b[] = {100, 10, 50} ;
	cout <<  "tamaño array a: " << sizeof(a)/sizeof(int) << endl;	
	cout <<  "tamaño array b: " << sizeof(b)/sizeof(int) << endl;	
	for(size_t i =0; i<5; i++){
		*(a + i) = 0;
	}
	a[0] = 2;
	*(a + 3) = 4;
	cout << "vector"  << endl;

	for(size_t i =0; i<5; i++){
		cout << *(a +i) << endl;
	}


	return EXIT_SUCCESS;
}
