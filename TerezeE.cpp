#include <iostream>
#include "Name.h"
#include "TerezeE.h"

using namespace std;

TerezeE::TerezeE(string n)
{
	name = n;
}

void TerezeE::setName(string n)
{
	name = n;
}

void TerezeE::Print() const
{
	cout << name << endl;
}

