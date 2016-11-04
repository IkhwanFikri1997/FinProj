#include <iostream>
#include "menu.hpp"
using namespace std; 

int main(){
	menu menus;
	int choice;
	char again;
	do{
	cout << "============================================" << endl
		 << "|              OLD WORDPAD PROGRAM         |" << endl
		 << "|          by : ikhwan fikri nur afra      |" << endl
		 << "|                                          |" << endl
		 << "|                  Menu                    |" << endl
		 << "|              1. New Document             |" << endl
		 << "|              2. Open Document            |" << endl
		 << "|              3. Edit Document            |" << endl
		 << "|              4. Find Words               |" << endl
		 << "|              5. Copy Text                |" << endl
		 << "|                                          |" << endl
		 << "|please input the number(1-5)              |" << endl
		 << "============================================" << endl;
	cin >> choice;
	switch (choice) {
		case 1: menus.NewDocument();break;
		case 2: menus.OpenDocument();break;
		case 3: menus.EditDocument();break;
		case 4: menus.FindWords();break;
		case 5: menus.CopyText();break;
		case 6: 
		case 7:
		default:
			cout <<"Invalid Choice"<<endl;break;
	}
	cout << "Do you want to go back to main menu (y/n) ? \a";
	cin >> again;
	cout << endl;
	} while(again!='n');
	return 0;
}
