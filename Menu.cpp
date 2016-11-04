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
	Input.Myfile.open(Input.file, ios_base::app);
	cin.ignore();
	do{
		getline(cin,Input.text);
		Input.Myfile << Input.text <<endl;
	}while(Input.text!="end");
	cout << "file saved" << endl;
	Input.Myfile.close();
}

struct Find{
	int count=0;
	int total=0;
	string text[99999];
};

void menu::FindWords(){
	Find fnd;
	word words;
	cout << "===============Find Words================" << endl;
	cout << "Please Input your Filename that you want to open" << endl;
	cin >> Input.file;
	Input.Mfile.open(Input.file);
	cout << "Please Input the words that you want to find" << endl;
	cin >> Input.find;
	while (Input.Mfile>>Input.word){
		fnd.count++;
	}
	cout << "this file had " << fnd.count << " words";
	Input.Mfile.close();
	Input.Mfile.open(Input.file);
	for (int i=0;i<fnd.count;i++){
		Input.Mfile>>fnd.text[i];
	}
	words.SortWords(fnd.text,fnd.count);
	for(int i=0;i<fnd.count;i++){
		if(fnd.text[i]==Input.find){
			fnd.total++;
		}
	}
	cout << " and there are " << fnd.total << " matches" << endl;	
}

void word::SortWords(string text[],int count){
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
}

void menu::CopyText(){
	string choice;
	string choice2;
	int lines;
	int lines2;
	string lines3;
	word words;
	int count=0;
	string line;
	input Input;
	cout << "===============Copy Text================" << endl;
	cout << "Please Input your filename that you want to open" << endl;
	cin >> Input.file;
	Input.Mfile.open(Input.file);
	cout << "Please Input the target file" << endl;
	cin >> Input.otherfile;
	cout << "do you want to copy the text or replace the text? (copy/replace)";
	cin >> choice;
	if (choice=="copy"){
		Input.Myfile.open(Input.otherfile, ios::app);
		cout << "which parts do you want to copy? (all/selected)";	
	}else if(choice=="replace"){
		Input.Myfile.open(Input.otherfile, ios::ate);
		cout << "which parts do you want to replace? (all/selected)";
	}
	cin >> choice2;
	if (choice2=="all"){
		Input.Myfile << Input.Mfile.rdbuf();
	} else if (choice2=="selected") {
		cout << "what number of line do you want to copy?";
		cin >> lines;
		cout << "do you only want to copy one line or more? (one/more)";
		cin >> lines3;
		if (lines3=="one"){
				while(getline(Input.Mfile,line)){
					if(count==lines){
						Input.Myfile << line << endl;
				}
				count++;
		}
		}else if (lines3=="more"){
			cout << "from line " << lines << " till where?";
			cin >> lines2;
				while(getline(Input.Mfile,line)){
					if(count>lines-1 && count<lines2+1){
						Input.Myfile << line << endl;
				}
			count++;
		}
	}
}
	cout << "Copy Text Completed" << endl;
	Input.Myfile.close();
	Input.Mfile.close();
}
