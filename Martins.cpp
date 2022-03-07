#include <iostream>
#include "Name.h"
#include "Martins.h"

using namespace std;

MyName::MyName(string n)
{
	name=n;
}

void MyName::setName(string n)
{
	name=n;
}

void MyName::Print() const
{
	cout << name << endl;
}


