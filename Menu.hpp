#ifndef menu_hpp
#define menu_hpp

#include "document.hpp"
#include "shape.hpp"
using namespace std;

class menu{
	input Input;
	public:
		void NewDocument();
		void OpenDocument();
		void EditDocument();
		void FindWords();
		void CopyText();
		void ShapeGenerator();
};

class word{
	public:
		void SortWords(string[],int);
};
#endif
