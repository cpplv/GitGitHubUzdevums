#include <iostream>
#include "Name.h"
#include "Andrejs.h"
#include "Anita.h"
using namespace std;

int main()
{
	const int array_size = 2;
	Name *Names[array_size];
	
	Andrejs a;
	a.setName("Andrejs");

	Anita a2;
	a2.setName("Anita");
	
	Names[0] = &a;
	Names[1] = &a2;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}

