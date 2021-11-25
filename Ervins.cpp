#include <iostream>
#include "Name.h"
#include "Ervins.h"

using namespace std;

Ervins::Ervins(string n)
{
	name=n;
}

void Ervins::setName(string n)
{
	name=n;
}

void Ervins::Print() const
{
	cout << name << endl;
}


