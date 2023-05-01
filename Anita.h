#include <iostream>
#include "Name.h"
using namespace std;

class Anita: public Name
{
	public:
		Anita(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};

