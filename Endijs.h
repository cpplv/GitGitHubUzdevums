#ifndef ENDIJS_H
#define ENDIJS_H

#include <iostream>
#include "Name.h"
using namespace std;

class Endijs: public Name
{
	public:
		Endijs(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};

#endif 