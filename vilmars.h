#include <iostream>
#include "Name.h"
using namespace std;

class Vilmars: public Name
{
	public:
		Vilmars(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};