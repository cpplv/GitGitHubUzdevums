#include <iostream>
#include "Name.h"
using namespace std;

class Valdis: public Name
{
	public:
		Valdis(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
