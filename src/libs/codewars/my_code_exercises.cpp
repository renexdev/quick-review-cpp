
#include "include/my_code_exercises.h"
#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

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

bool MyCodeWars::isValidWalk(std::vector<char> walk) {
  /*
  for (std::vector<char>::iterator it = walk.begin(); it!= walk.end(); it++) {
    std::cout << *it<< "; "; //walk[i]
  }
  */
  bool is_valid = true;

  // Descarto caso impar (no vuelve al lugar de origen)  && descarto mas o menos de 10 pasos porque se le acaba el tiempo o llega antes
  if(walk.size() %2 != 0 || walk.size()!= 10 ) is_valid = false;
  
  //std::cout << "size: " <<walk.size() << std::endl;
  int n_count = count(walk.begin(), walk.end(), 'n');
  int s_count = count(walk.begin(), walk.end(), 's');
  int w_count = count(walk.begin(), walk.end(), 'w');
  int e_count = count(walk.begin(), walk.end(), 'e');
  
  if(n_count != s_count ) is_valid = false;
  if(w_count != e_count ) is_valid = false;
  //std::cout << "valid: " <<is_valid<< std::endl;

  return is_valid;
  
}