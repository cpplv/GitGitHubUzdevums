#include <iostream>
#include "Name.h"
using namespace std;

class Guna: public Name
{
	public:
		Guna(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
