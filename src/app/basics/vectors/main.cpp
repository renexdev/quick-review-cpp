#include "include/basics.h"

int main() {

	vector<Vect3d> vertices;
  vertices.reserve(2);
  vertices.push_back({1, 2, 3});
  vertices.push_back({2, 4, 5});
  // we construct the Vect3d in the main function then pushing it into de vector
  vertices.push_back(Vect3d(1, 2, 3));
  vertices.push_back(Vect3d(1, 2, 3));
  
  // Construct a Vect3d obj w/ following params in place in the actual vector
  //vertices.emplace_back(1, 2, 3);
  //vertices.emplace_back(1, 2, 3);

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
