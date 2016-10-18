#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

void NewDocument(){
	string inputfile;
	string text;
	cout << "===============New Document================" << endl;
	cout << "Please Input your Filename with your format(.txt,.doc,.cpp, and so on)" << endl;
	cin >> inputfile;
	ofstream Myfile;
	Myfile.open(inputfile.c_str());
	do{
		getline(cin,text);
		Myfile << text<<endl;
	}while(text!="end");
	cout << "file saved";
	Myfile.close();
}

void OpenDocument(){
	string inputfile;
	string text;
	cout << "===============New Document================" << endl;
	cout << "Please Input your Filename with your format(.txt,.doc,.cpp, and so on)" << endl;
	cin >> inputfile;
	ifstream Myfile;
	Myfile.open(inputfile.c_str());
	
}

void SaveDocument(){
	
}
