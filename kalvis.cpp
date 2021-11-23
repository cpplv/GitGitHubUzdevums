#include <iostream>
#include "Name.h"
#include "kalvis.h"

using namespace std;

kalvis::kalvis(string n)
{
	name=n;
}

void kalvis::setName(string n)
{
	name=n;
}

void kalvis::Print() const
{
	cout << name << endl;
}


