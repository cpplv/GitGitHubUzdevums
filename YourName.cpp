#include <iostream>
#include "Name.h"
#include "YourName.h"


using namespace std;

Andrejs::YourName(string n)
{
	name=n;
}

void YourName::setName(string n)
{
	name=n;
}

void YourName::Print() const
{
	cout << name << endl;
}

