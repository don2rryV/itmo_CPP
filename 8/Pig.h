#pragma once

#include "Unit.h"
#include "Animal.h"

class Pig: public virtual Animal {
public:
    explicit Pig(std::string name, int x);
};
