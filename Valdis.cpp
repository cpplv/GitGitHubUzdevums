#include <iostream>
#include "Name.h"
#include "Valdis.h"

using namespace std;

Valdis::Valdis(string n)
{
	name=n;
}

void Valdis::setName(string n)
{
	name=n;
}

void Valdis::Print() const
{
	cout << name << endl;
}


