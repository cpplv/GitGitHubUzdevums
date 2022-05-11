#include <iostream>
#include "Name.h"
#include "Vladimirs.h"

using namespace std;

Vladimirs::Vladimirs(string n)
{
	name=n;
}

void Vladimirs::setName(string n)
{
	name=n;
}

void Vladimirs::Print() const
{
	cout << name << endl;
}
