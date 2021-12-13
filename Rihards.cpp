#include <iostream>
#include "Name.h"
#include "Rihards.h"

using namespace std;

Rihards::Rihards(string n)
{
	name=n;
}

void Rihards::setName(string n)
{
	name=n;
}

void Rihards::Print() const
{
	cout << name << endl;
}


