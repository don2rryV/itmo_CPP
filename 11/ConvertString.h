#include <sstream>
#include <string>
#include <iostream>
#include <typeinfo>
#include <stdexcept>

#include "BadFromString.h"

template<typename T>
T from_string(const std::string &s);

#include "ConvertString.hpp"