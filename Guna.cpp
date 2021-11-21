#include <iostream>
#include "Name.h"
#include "Guna.h"

using namespace std;

Guna::Guna(string n)
{
	name=n;
}

void Guna::setName(string n)
{
	name=n;
}

void Guna::Print() const
{
	cout << name << endl;
}

