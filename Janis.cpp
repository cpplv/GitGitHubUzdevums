#include <iostream>
#include "Name.h"
#include "Janis.h"

Janis::Janis(string n) {
  name = n;
}

void Janis::setName(string n) override {
  name = n;
}

void Janis::Print() const override {
  std::cout << name << std::endl;
}