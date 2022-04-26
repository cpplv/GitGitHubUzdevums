#include <iostream>
#include "Name.h"
using namespace std;

class Haralds : public Name
{
	public:
		Haralds(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
