#include <iostream>
#include "Name.h"
using namespace std;

class Alina: public Name
{
public:
    Alina(string = "DefaultName");
    virtual void setName(string);
    void Print() const;

private:
    string name;
};
