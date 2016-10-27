#ifndef Menu_hpp
#define Menu_hpp

#include "Document.hpp"
using namespace std;

class menu {
	input input;
	public:
		Menu();
		void NewDocument();
		void OpenDocument();
		void EditDocument();
};

#endif
