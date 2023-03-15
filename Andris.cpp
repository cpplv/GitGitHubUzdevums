#include <iostream>
#include "Name.h"
#include "Andris.h"

using namespace std;

Andris::Andris(string n)
{
	name=n;
}

void Andris::setName(string n)
{
	name=n;
}

void Andris::Print() const
{
	cout << name << endl;
}


