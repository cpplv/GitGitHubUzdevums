#include <iostream>
#include "Name.h"
#include "Endijs.h"

using namespace std;

Endijs::Endijs(string n)
{
	name=n;
}

void Endijs::setName(string n)
{
	name=n;
}

void Endijs::Print() const
{
	cout << name << endl;
}


