#include <iostream>
#include "Name.h"
#include "Kristine.h"

using namespace std;

Kristine::Kristine(string n)
{
	name=n;
}

void Kristine::setName(string n)
{
	name=n;
}

void Kristine::Print() const
{
	cout << name << endl;
}
