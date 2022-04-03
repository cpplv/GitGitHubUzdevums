#include <iostream>
#include "Name.h"
using namespace std;

class YourName: public Name
{
	public:
		YourName(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
