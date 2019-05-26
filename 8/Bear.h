#pragma once

#include "Animal.h"

class Bear: public virtual Animal {
public:
    explicit Bear(std::string name, int x);
};