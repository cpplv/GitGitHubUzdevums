#include <iostream>
#include "Name.h"
using namespace std;

class Ervins: public Name
{
	public:
		Ervins(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
