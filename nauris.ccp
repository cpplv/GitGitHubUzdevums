#include <iostream>
#include "Name.h"
#include "nauris.h"

using namespace std;

nauris::nauris(string n)
{
	name=n;
}

void nauris::setName(string n)
{
	name=n;
}

void nauris::Print() const
{
	cout << name << endl;
}
