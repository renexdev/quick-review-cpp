#include "include/basics.h"

void global_f() {
	cout << "global_f()" << endl;
}

struct Functor {
	void operator()() { cout << "Functor" << endl; }
};


int main() {
	/*
	Lambda
	*/
	vector<float> v = {1.0f, 11.0f, 16.0f, 5.0f };

	for(vector<float>::iterator it = v.begin(); it!=v.end(); it++)
	{
		cout << *it << endl;
	}
	sort(v.begin(), v.end(), [](int a, int b) { return a > b; });
	cout << "Sorted:" << endl;
	for(vector<float>::iterator it = v.begin(); it!=v.end(); it++)
	{
		cout << *it << endl;
	}


	int i = 0, j = 1;
	// lambda
	//	 [&] means ‘capture by-reference all variables that are in use in the function’
	//[=] means ‘capture by-value all variables that are in use in the function’
	// capture i by value & j by reference, params, expression
	auto func = [i, &j](bool b, float f){ ++j; cout << j << ", " << b << ", " << f << endl; };
	func(true, 1.0f);
	cout << j << endl;

	/*
	lambda is not a std::function. It is true that a lambda can be assigned to a std::function, but that is not its native type.
	there is no standard type for lambdas. A lambda’s type is implementation defined, and the only way to capture a lambda with no conversion is by using auto
	auto f2 = [](){};
	mutable lambdas

	lambda’s operator() is const by-default, meaning it can’t modify the variables it captured by-value (which are analogous to class members). To change this default add mutable:

	int i = 1;
	[&i](){ i = 1; }; // ok, 'i' is captured by-reference.
	[i](){ i = 1; }; // ERROR: assignment of read-only variable 'i'.
	[i]() mutable { i = 1; }; // ok.

	*/
	auto f1 = [](){};
	cout << sizeof(f1) << endl;

	std::array<char, 100> ar;
	auto f2 = [&ar](){};
	cout << sizeof(f2) << endl;

	auto f3 = [ar](){};
	cout << sizeof(f3) << endl;


	/*
	std::function 
	templated object that is used to store and call any callable type, such as functions, objects, lambdas and the result of std::bind.
	*/
	std::function<void()> f;
	cout << "sizeof(f) == " << sizeof(f) << endl;

	f = global_f;
	f();

	f = [](){ cout << "Lambda" << endl;};
	f();

	Functor functor;
	f = functor;
	f();

	return EXIT_SUCCESS;
}

