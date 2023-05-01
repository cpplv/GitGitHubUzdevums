#include <iostream>
#include "Name.h"
#include "Anita.h"

using namespace std;

Anita::Anita(string n)
{
	name=n;
}

void Anita::setName(string n)
{
	name=n;
}

void Anita::Print() const
{
	cout << name << endl;
}



