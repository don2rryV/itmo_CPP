#include <cmath>
#include <iostream>

#include "Unit.h"

Unit::Unit(std::string name, int health) {
    mName = name;
    mHealth = health;
}

Unit::~Unit() {}

