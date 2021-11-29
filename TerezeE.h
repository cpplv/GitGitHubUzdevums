#include <iostream>
#include "Name.h"
using namespace std;

class TerezeE : public Name
{
public:
	TerezeE(string = "DefaultName");
	virtual void setName(string);
	void Print() const;

private:
	string name;
};
