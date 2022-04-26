#include <iostream>
#include "Name.h"
#include "Haralds.h"

using namespace std;

Haralds::Haralds(string n)
{
	name=n;
}

void Haralds::setName(string n)
{
	name=n;
}

void Haralds::Print() const
{
	cout << name << endl;
}


