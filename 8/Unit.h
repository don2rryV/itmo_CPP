#pragma once

#include <string>

class Unit {
public:
    explicit Unit(std::string name, int health);
    virtual ~Unit();
    std::string mName;
    int mHealth;
};
