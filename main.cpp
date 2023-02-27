#include <iostream>
#include "Name.h"
#include "Andrejs.h"
#include "vilmars.h"
using namespace std;

int main()
{
	const int array_size = 2;
	Name *Names[array_size];
	
	Andrejs a;
	a.setName("Andrejs");

	Vilmars b;
	b.setName("Vilmars");
	
	Names[0] = &a;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}
