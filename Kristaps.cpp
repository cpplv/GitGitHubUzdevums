#include <iostream>
#include "Name.h"
#include "Kristaps.h"

using namespace std;

Kristaps::Kristaps(string n)
{
	name=n;
}

void Kristaps::setName(string n)
{
	name=n;
}

void Kristaps::Print() const
{
	cout << name << endl;
}


