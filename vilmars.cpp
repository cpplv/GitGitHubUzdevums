#include <iostream>
#include "Name.h"
#include "vilmars.h"

using namespace std;

Vilmars::Vilmars(string n)
{
	name=n;
}

void Vilmars::setName(string n)
{
	name=n;
}

void Vilmars::Print() const
{
	cout << name << endl;
}

