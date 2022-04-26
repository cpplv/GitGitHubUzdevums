#include <iostream>
#include "Name.h"
#include "Anastasija.h"

using namespace std;

Anastasija::Anastasija(string n)
{
	name=n;
}

void Anastasija::setName(string n)
{
	name=n;
}

void Anastasija::Print() const
{
	cout << name << endl;
}
