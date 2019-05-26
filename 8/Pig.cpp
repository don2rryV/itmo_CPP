#include <iostream>
#include "Pig.h"

Pig::Pig(std::string name, int x) : Unit(name, x), Animal(name, x) {}