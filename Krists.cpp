#include <iostream>
#include "Name.h"
#include "Krists.h"

using namespace std;

Krists::Krists(string n)
{
	name=n;
}

void Krists::setName(string n)
{
	name=n;
}

void Krists::Print() const
{
	cout << name << endl;
}


