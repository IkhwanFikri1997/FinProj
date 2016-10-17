#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

void NewDocument(){
	string inputfile;
	string text[];
	cout << "===============New Document================" << endl;
	cout << "Please Input your Filename with your format(.txt,.doc,.cpp, and so on)" << endl;
	cin >> inputfile;
	ofstream Myfile;
	Myfile.open(inputfile.c_str());
	do{
	cin >> text[i];
	getline(cin,text);
	}while(text!="end");
	Myfile << text;
	cout << "file saved";
	Myfile.close();
}
