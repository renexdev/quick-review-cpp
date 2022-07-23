

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
