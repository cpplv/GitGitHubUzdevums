#include <iostream>
#include "Name.h"
#include "Andrejs.h"
#include "Guna.h"
using namespace std;

int main()
{
	const int array_size = 2;
	Name *Names[array_size];
	
	Andrejs a;
	a.setName("Andrejs");
	
	Names[0] = &a;
	
	Guna x;
	x.setName("Guna");
	Names[1] = &x;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}
