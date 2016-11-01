#ifndef document_hpp
#define document_hpp

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class input {
	public:
	ofstream Myfile;
	ifstream Mfile;
	string file;
	string text;
	string line;
	string word;
	string find;
};

#endif
