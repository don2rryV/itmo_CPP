#pragma once

#include "Pig.h"
#include "Bear.h"
#include "Man.h"

class BearPigMan: public Bear, public Pig, public Man {
public:
    explicit BearPigMan(std::string name, int x);
};