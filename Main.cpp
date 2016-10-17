#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include "Basic.cpp"
using namespace std;

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
	}
	return 0;
}
