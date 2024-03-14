#include <iostream>
#include "Name.h"
#include "Nikita.h"
using namespace std;

int main()
{
	const int array_size = 2;
	Name *Names[array_size];
	
	Nikita n;
	n.setName("Nikita");
	
	// Names[0] = &a;
	Names[1] = &n;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}