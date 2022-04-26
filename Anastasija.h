#include <iostream>
#include "Name.h"
using namespace std;

class Anastasija: public Name
{
	public:
		Anastasija(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
