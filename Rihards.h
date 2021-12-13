#include <iostream>
#include "Name.h"
using namespace std;

class Rihards: public Name
{
	public:
		Rihards(string = "DefaultName");
		virtual void setName(string);
		void Print() const;

	private:
		string name;
};