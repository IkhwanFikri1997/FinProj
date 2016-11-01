#ifndef menu_hpp
#define menu_hpp

#include "document.hpp"
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
