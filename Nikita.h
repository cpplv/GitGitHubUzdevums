#include <iostream>
#include "Name.h"
using namespace std;

class Nikita: public Name
{
	public:
		Nikita(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
