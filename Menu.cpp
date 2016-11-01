#include "menu.hpp"
using namespace std;

void menu::NewDocument(){
	cout << "===============New Document================" << endl;
	cout << "Please Input your Filename with your format(.txt,.doc,.cpp, and so on)" << endl;
	cin >> Input.file;
	cin.ignore();
	Input.Myfile.open(Input.file);
	do{
		getline(cin,Input.text);
		Input.Myfile << Input.text <<endl;
	}while(Input.text!="end");
	cout << "file saved" << endl;
	Input.Myfile.close();
}

void menu::OpenDocument(){
	cout << "===============Open Document================" << endl;
	cout << "Please Input your Filename that you want to open" << endl;
	cin >> Input.file;
	Input.Mfile.open(Input.file, ios_base::in);
	while(getline(Input.Mfile, Input.line)){
		cout << Input.line << endl;
		}
}

void menu::EditDocument(){
	cout << "===============Edit Document================" << endl;
	cout << "Please Input your Filename that you want to open" << endl;
	cin >> Input.file;
	Input.Myfile.open(Input.file, ios_base::ate);
	cin.ignore();
	do{
		getline(cin,Input.text);
		Input.Myfile << Input.text <<endl;
	}while(Input.text!="end");
	cout << "file saved" << endl;
	Input.Myfile.close();
}

void menu::FindWords(){
	int i=0;
	int count=0;
	int total=0;
	string text[99999];
	cout << "===============Find Words================" << endl;
	cout << "Please Input your Filename that you want to open" << endl;
	cin >> Input.file;
	Input.Mfile.open(Input.file);
	cout << "Please Input the words that you want to find" << endl;
	cin >> Input.find;
	while (Input.Mfile>>Input.word){
		count++;
	}
	Input.Mfile.close();
	Input.Mfile.open(Input.file);
	for (int i=0;i<count;i++){
		Input.Mfile>>text[i];
	}
	int startScan, minIndex; 
	string minValue;     
	for (startScan = 0; startScan < (count-1); startScan++)     
		{         
	 		minIndex = startScan;         
	 		minValue = text[startScan];         
	 		for(int index = startScan + 1; index < count; index++)         
	 		{             
	 		if (text[index] < minValue)             
	 			{                 
	 			minValue = text[index];                 
	 			minIndex = index;             
	 			}
	 		}         
	text[minIndex] = text[startScan];         
	text[startScan] = minValue; 
		}
		for(i=0;i<count;i++){
		if(text[i]==Input.find){
			total++;
		}
	}
	cout << "there are " << total << " matches" << endl;	
}
