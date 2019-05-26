#include <iostream>
#include "Bear.h"

Bear::Bear(std::string name, int x) : Unit(name, x), Animal(name, x) {}

