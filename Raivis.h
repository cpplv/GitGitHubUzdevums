#include <iostream>
#include "Name.h"
using namespace std;

class Raivis: public Name
{
	public:
		Raivis(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};