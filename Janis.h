#ifndef Janis_H
#define Janis_H

#include "Name.h"

class Janis : public Name {
public:
    Janis(string n = "DefaultName");  // konstruktors
  virtual void setName(string n) override;  // Ignroe the setName funkciju
  void Print() const override;              // Ignroe the Print funkciju
 private:
  string name;
};

#endif