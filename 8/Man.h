#pragma once

#include "Unit.h"

class Man: public virtual Unit {
public:
    explicit Man(std::string name, int x);
};
