#include <iostream>
#include "Name.h"
#include "Mariss.h"

using namespace std;

Mariss::Mariss(string n)
{
	name=n;
}

void Mariss::setName(string n)
{
	name=n;
}

void Mariss::Print() const
{
	cout << name << endl;
}


