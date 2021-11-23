#include <iostream>
#include "Name.h"
using namespace std;

class kalvis: public Name
{
	public:
		kalvis(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
