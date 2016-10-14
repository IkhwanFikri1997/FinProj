#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

void NewDocument();
void OpenDocument();
void SaveDocument();

int main(){
	int menu;
	cout << "============================================" << endl
		 << "|              OLD WORDPAD PROGRAM         |" << endl
		 << "|          by : ikhwan fikri nur afra      |" << endl
		 << "|                                          |" << endl
		 << "|                  Menu                    |" << endl
		 << "|              1. New Document             |" << endl
		 << "|              2. Open Document            |" << endl
		 << "|              3. Save Document            |" << endl
		 << "|                                          |" << endl
		 << "|please input the number(1-3):             |" << endl
		 << "============================================" << endl;
	cin >> menu;
	switch (menu) {
		case 1: NewDocument();break;
		case 2: OpenDocument();break;
		case 3: SaveDocument();break;
	}
	return 0;
}

void NewDocument(){
	string Inputfile;
	cout << "===============New Document================";
	cout << "Please Input your Filename with your format(.txt,.doc,.cpp, and so on)";
	cin >> Inputfile;
	ifstream Myfile;
	Myfile.open(Inputfile);
	cout << "file saved";
}
