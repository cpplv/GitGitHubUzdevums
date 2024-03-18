#include <iostream>
#include "Name.h"
#include "Andrejs.h"
#include "Krists.h"
using namespace std;

int main()
{
    const int array_size = 2; // array +1
    Name *Names[array_size];
    
    Andrejs a;
    Krists b;
    a.setName("Andrejs");
    b.setName("Krists"); 
    
    Names[0] = &a;
    Names[1] = &b; // 2nd object to array
    
    for (int i=0; i<array_size; i++)
        Names[i]->Print();
    
    return 0;
}
