
#include "include/my_code_exercises.h"

bool MyCodeWars::isValidWalk(std::vector<char> walk) {
  
  /*
  for (std::vector<char>::iterator it = walk.begin(); it!= walk.end(); it++) {
    cout << *it<< "; "; //walk[i]
  }
  cout << endl;
  */
  bool is_valid = true;

  // Descarto caso impar (no vuelve al lugar de origen)  && descarto mas o menos de 10 pasos porque se le acaba el tiempo o llega antes
  if(walk.size() %2 != 0 || walk.size()!= 10 ) is_valid = false;
     
 
  int n_count = count(walk.begin(), walk.end(), 'n');
  int s_count = count(walk.begin(), walk.end(), 's');
  int w_count = count(walk.begin(), walk.end(), 'w');
  int e_count = count(walk.begin(), walk.end(), 'e');
  
  if(n_count != s_count ) is_valid = false;
  if(w_count != e_count ) is_valid = false;


  return is_valid;
}

bool MyCodeWars::solution(string const &str, string const &ending) {
  // supongo que nunca ending va a tener + caracteres que str
  int n =  str.size();
  int m =  ending.size();  
  //for (size_t i = 0; i < n; i++) {
  //  std::cout << str.at(i);
  //}
  //std::cout << std::endl;
  //for (size_t i = 0; i < m; i++) {
  //  std::cout << ending.at(i);
  //}
  //std::cout << std::endl;
  int is_ending = true;
  for (size_t i = 1; i <= m; i++) {
    //std::cout << str.at(n-i) << " vs "<< ending.at(m-i)<< std::endl ;
    if(str.at(n-i)!=ending.at(m-i)){
      is_ending = false;
      break;
      }
  }
  
  return is_ending;
}