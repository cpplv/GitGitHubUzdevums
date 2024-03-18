#include <iostream>
#include "Name.h"
using namespace std;

class Krists: public Name
{
	public:
		Krists(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
