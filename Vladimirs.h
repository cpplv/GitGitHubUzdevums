#include <iostream>
#include "Name.h"
using namespace std;

class Vladimirs: public Name
{
	public:
		Vladimirs(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
