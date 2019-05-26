#pragma once

#include <fstream>
#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

class String {

public:
    size_t length;

    String(char *s);

    String(const String &_s);

    String(size_t n, char c);

    ~String();

    String &append(const String &s);

    String &operator=(const String &s);

    String &operator+=(const String &s);

    String operator+(const String &s) const;

    friend std::ostream &operator<<(std::ostream &, const String &);

    friend std::istream &operator>>(std::istream &, String &);

private:
    char *mStr;
};