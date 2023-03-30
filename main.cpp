#include <iostream>
#include "Name.h"
#include "Andrejs.h"
#include "Arturs.h"
using namespace std;

int main()
{
	const int array_size = 2;
	Name *Names[array_size];
	
	Andrejs a;
	a.setName("Andrejs");
	
	Arturs aa;
	aa.setName("Archi");
	
	Names[0] = &a;
	Names[1] = &aa;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}
