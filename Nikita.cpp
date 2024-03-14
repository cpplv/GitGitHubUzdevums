#include <iostream>
#include "Name.h"
#include "Nikita.h"

using namespace std;

Nikita::Nikita(string n)
{
	name=n;
}

void Nikita::setName(string n)
{
	name=n;
}

void Nikita::Print() const
{
	cout << name << endl;
}


