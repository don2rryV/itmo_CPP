//
// Created by Admin on 12.11.2018.
//
#include <algorithm>
#include "Array.h"

template<typename T>
Array<T>::Array(size_t size, const T &value) {
    length = size;
    data = new T[length];
    std::copy(value.begin(),value.end(), data);
}

template<typename T>
Array<T>::Array(const Array &array) {
    length = array.length;
    delete[] data;
    data = new T[length];
    for (int i = 0; i < array.length; i++){
        data[i] = array.data[i];
    }
}

template<typename T>
Array<T>::~Array() {
    delete[] data;
    length = 0;
}

template<typename T>
Array &Array<T>::operator=(const Array &array) {
    delete[] data;
    length = array.length;
    data = new T[length];
    std::copy(array.data, array.data + length, data);
}

template<typename T>
size_t Array<T>::size() const {
    return length;
}

template<typename T>
T &Array<T>::operator[](const size_t index) {
    return data[index];
}

template<typename T>
const T &Array<T>::operator[](size_t index) const {
    return data[index];
}





