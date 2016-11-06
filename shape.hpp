#ifndef shape_hpp
#define shape_hpp

#include "document.hpp"
#include "menu.hpp"
using namespace std;

class shape{
	input Input;
	int x;
	int y;
	int i;
	int j;
	public:
		void Square(string file,int i){
			Input.Myfile.open(file, ios::app);
			for (int y=1;y<=i;y++){
				for(int x=1;x<=i;x++){
				cout << "*";
				Input.Myfile << "*";
				}
			cout << "\n";
			Input.Myfile << "\n";
			}
		}
		void Pyramid(string file,int i){
			Input.Myfile.open(file, ios::app);
			for (y=1;y<=i;y++){
				for(x=1;x<=y-1;x++){
					cout << " ";
					Input.Myfile << " ";
				}
				for(x=y*2-1;x<=i*2-1;x++){
					cout << "*";
					Input.Myfile << "*";
				}
				cout << "\n";
				Input.Myfile << "\n";
			}
		}
		void Rectangle(string file,int i,int j){
			Input.Myfile.open(file, ios::app);
			cout << "How long rectangle do you want?" << endl;
			for (int y=1;y<=i;y++){
				for(int x=1;x<=j;x++){
					cout << "*";
					Input.Myfile << "*";
				}
			cout << "\n";
			Input.Myfile << "\n";
			}
		}
		void Parallelogram(string file,int i){
			Input.Myfile.open(file, ios::app);
			for (y=1;y<=i;y++){
				for(x=1;x+y<=i;x++){
					Input.Myfile << " ";
				}
				for(x=1;x<=i;x++){
					Input.Myfile << "@";
				}
			Input.Myfile << "\n";
			}
		}
		void Trapezium(string file,int i){
			Input.Myfile.open(file, ios::app);
			for (y=1;y<=i;y++){
				for(x=1;x+y<=i;x++){
					Input.Myfile << " ";
				}
				for(x=1;x<=y*2+6;x++){
					Input.Myfile << "*";
				}
			Input.Myfile << "\n";
			}
		}
		void InvertedTriangle(string file,int i){
			Input.Myfile.open(file, ios::app);
			for (y=0;y<=i-1;y++){
				for(x=y;x<i;x++){
					Input.Myfile << "*";
				}
			Input.Myfile << "\n";
			}
		}
		void Triangle(string file,int i){
			Input.Myfile.open(file, ios::app);
			for (int y=1;y<=i;y++){
				for(int x=0;x<y;x++){
				Input.Myfile << "*";
			}
			Input.Myfile << "\n";
			}
		}
		void Diamond(string file,int i){
			Input.Myfile.open(file, ios::app);
			for (y=1;y<=i;y++){
				for(x=1;x+y<=i;x++){
					Input.Myfile << " ";
				}
				for(x=1;x<=y*2-1;x++){
					Input.Myfile << "*";
				}
			Input.Myfile << endl;
			}
			for (y=1;y<=i;y++){
				for(x=1;x<=y;x++){
					Input.Myfile << " ";
				}
				for(x=y*2-1;x<=(i-1)*2-1;x++){
					Input.Myfile << "*";
				}
					Input.Myfile << endl;
				}
		}
};
#endif
