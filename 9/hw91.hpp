#include <iostream>
#include <typeinfo>
#include "hw91.h"

void print_value() {}

template<typename First, typename... Other>
void print_value(const First& first, const Other &... other) {
    std::cout << typeid(first).name() << ": " << first << '\n';
    print_value(other...);
}

template<typename T>
Array<T>::Array(size_t size) {
    mLength = size;
    mData = (T *) new char[sizeof(T) * mLength];
}

template<typename T>
Array<T>::Array(const Array& array) {
    mLength = array.mLength;
    mData = (T *) new char[sizeof(T) * mLength];
    for (int i = 0; i < array.mLength; i++) {
        new(mData + i) T(array[i]);
    }
}

template<typename T>
Array<T>::~Array() {
    clear();
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& array) {
    clear();
    mLength = array.mLength;
    mData = (T *) new char[sizeof(T) * mLength];
    for (int i = 0; i < array.mLength; i++) {
        new(mData + i) T(array[i]);
    }
    return *this;
}

template<typename T>
size_t Array<T>::size() const {
    return mLength;
}

template<typename T>
T& Array<T>::operator[](const size_t index) {
    return mData[index];
}

template<typename T>
const T& Array<T>::operator[](size_t index) const {
    return mData[index];
}

template<typename T>
void Array<T>::clear() {
    for (size_t i = 0; i != mLength; ++i) {
        mData[i].~T();
    }
    delete[] (char *) mData;
}

template<typename T>
Array<T>::Array(Array&& array)
        :mData(array.mData), mLength(array.mLength) {
    array.mData = nullptr;
    array.mLength = 0;
}

template<typename T>
Array<T>& Array<T>::operator=(Array&& array) {
    clear();
    mData = array.mData;
    mLength = array.mLength;
    array.mData = nullptr;
    array.mLength = 0;
    return *this;
}

template<int First, int Second, typename T>
auto to_pair(T tpl) -> decltype(std::make_pair(std::get<First>(tpl), std::get<Second>(tpl))) {
    return std::make_pair(std::get<First>(tpl), std::get<Second>(tpl));
}

