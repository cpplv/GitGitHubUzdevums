#include <iostream>
#include "Name.h"
using namespace std;

class Andris: public Name
{
	public:
		Andris(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
