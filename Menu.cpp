#include "Menu.hpp"
using namespace std;

void menu::NewDocument(){
	cout << "===============New Document================" << endl;
	cout << "Please Input your Filename with your format(.txt,.doc,.cpp, and so on)" << endl;
	cin >> input.file;
	cin.ignore();
	input.Myfile.open(input.file.c_str());
	do{
		getline(cin,input.text);
		input.Myfile << input.text <<endl;
	}while(input.text!="end");
	cout << "file saved";
	input.Myfile.close();
}

void menu::OpenDocument(){
	cout << "===============Open Document================" << endl;
	cout << "Please Input your Filename that you want to open" << endl;
	cin >> input.file;
	input.Mfile.open(input.file.c_str(), ios_base::in);
	while(getline(input.Mfile, input.line)){
		cout << input.line << endl;
		}
}

void menu::EditDocument(){
	cout << "===============Edit Document================" << endl;
	cout << "Please Input your Filename that you want to open" << endl;
	cin >> input.file;
	input.Myfile.open(input.file.c_str(), ios_base::ate);
	cin.ignore();
	do{
		getline(cin,input.text);
		input.Myfile << input.text <<endl;
	}while(input.text!="end");
	cout << "file saved";
	input.Myfile.close();
}
