#pragma once
#include "Unit.h"

class Animal: public virtual Unit {
public:
    explicit Animal(std::string name, int x);
};
