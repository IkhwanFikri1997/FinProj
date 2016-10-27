#include <iostream>
#include "Menu.hpp"
using namespace std;

int main(){
	menu menu;
	int choice;
	cout << "============================================" << endl
		 << "|              OLD WORDPAD PROGRAM         |" << endl
		 << "|          by : ikhwan fikri nur afra      |" << endl
		 << "|                                          |" << endl
		 << "|                  Menu                    |" << endl
		 << "|              1. New Document             |" << endl
		 << "|              2. Open Document            |" << endl
		 << "|              3. Edit Document            |" << endl
		 << "|                                          |" << endl
		 << "|please input the number(1-3):             |" << endl
		 << "============================================" << endl;
	cin >> choice;
	switch (choice) {
		case 1: menu.NewDocument();break;
		case 2: menu.OpenDocument();break;
		case 3: menu.EditDocument();break;
	}
	return 0;
}
