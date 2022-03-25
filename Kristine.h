#include <iostream>
#include "Name.h"

using namespace std;

class Kristine: public Name
{
	public:
		Kristine(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
