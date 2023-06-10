#include <iostream>
#include "Name.h"
#include "Andrejs.h"
#include "Lauris.b"
using namespace std;

int main()
{
	const int array_size = 2;
	Name *Names[array_size];
	
	Andrejs a;
	a.setName("Andrejs");
	
	Lauris b;
	b.setName("Lauris");


	Names[0] = &a;
	Names[0] = &b;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}
