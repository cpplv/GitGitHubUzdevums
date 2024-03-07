#include <iostream>
#include "Name.h"
#include "Alina.h"

using namespace std;

Alina::Alina(string n)
{
    name=n;
}

void Alina::setName(string n)
{
    name=n;
}

void Alina::Print() const
{
    cout << name << endl;
}