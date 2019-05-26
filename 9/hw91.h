#pragma once

#include <istream>

void print_value();

template<typename First, typename ... Other>
void print_value(const First & first, const Other &... other);

template<typename T>
class Array {
public:
    explicit Array(size_t size = 0);
    Array(const Array& array);
    ~Array();
    Array& operator=(const Array &array);
    size_t size() const;
    T& operator[](size_t size);
    const T& operator[](size_t size) const;
    void clear();

    Array(Array&& array);
    Array& operator=(Array&& array);

private:
    size_t mLength;
    T* mData;
};

template<int First, int Second, typename T>
auto to_pair(T tpl) -> decltype(std::make_pair(std::get<First>(tpl), std::get<Second>(tpl)));

#include "hw91.hpp"