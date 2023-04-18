#include <iostream>
#include "Name.h"
#include "Andrejs.h"
#include "Janis.h"
using namespace std;

int main()
{
	const int array_size = 2;
	Name *Names[array_size];
	
	Andrejs a;
	a.setName("Andrejs");

	Janis j;
	j.setName("Janis");
	Names[0] = &j;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}
