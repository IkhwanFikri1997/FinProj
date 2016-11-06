#include "menu.hpp"
#include "shape.hpp"
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

void menu::FindWords(){
	int count=0;
	int total=0;
	string text[99999];
	word words;
	cout << "===============Find Words================" << endl;
	cout << "Please Input your Filename that you want to open" << endl;
	cin >> Input.file;
	Input.Mfile.open(Input.file);
	cout << "Please Input the words that you want to find" << endl;
	cin >> Input.find;
	while (Input.Mfile>>Input.word){
		count++;
	}
	cout << "this file had " << count << " words";
	Input.Mfile.close();
	Input.Mfile.open(Input.file);
	for (int i=0;i<count;i++){
		Input.Mfile>>text[i];
	}
	words.SortWords(text,count);
	for(int i=0;i<count;i++){
		if(text[i]==Input.find){
			total++;
		}
	}
	cout << " and there are " << total << " matches" << endl;	
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
	string choice,choice2,line,lines3;
	int lines,lines2;
	int count=0;
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

void menu::ShapeGenerator(){
	int choice,size,width,length;
	shape shape;
	string file;
	cout << "===============Shape Generator================" << endl;
	cout << "Please Input your Filename with your format(.txt,.doc,.cpp, and so on)" << endl;
	cin >> file;
	cin.ignore();
	cout << "Which Shape do you want to draw?" << endl
		 << "1.Rectangle" << endl
		 << "2.Pyramid" << endl
		 << "3.Triangle" << endl
		 << "4.Inverted Triangle" << endl
		 << "5.Square" << endl
		 << "6.Trapezium" << endl
		 << "7.Diamond" << endl
		 << "8.Parallelogram" << endl;
	cin >> choice;
	if(choice==1){
		cout << "How long rectangle's width you want to draw?";
		cin >> width;
		cout << "How long rectangle's length you want to draw?";
		cin >> length;
		shape.Rectangle(file,width,length);
	}
	cout << "How much size do you want to print?" << endl;
	cin >> size;
	switch (choice){
		case 2: shape.Pyramid(file,size);break;
		case 3: shape.Triangle(file,size);break;
		case 4: shape.InvertedTriangle(file,size);break;
		case 5: shape.Square(file,size);break;
		case 6: shape.Trapezium(file,size);break;
		case 7: shape.Diamond(file,size);break;
		case 8: shape.Parallelogram(file,size);break;
		default:
			cout << "invalid data" << endl;break;
	}
	cout << "Print Shape Completed !" << endl;
}
