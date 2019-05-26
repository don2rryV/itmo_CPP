#include <iostream>
#include "ConvertString.h"

int main() {
    std::string s1(" 123");

    try {
        int a1 = from_string<int>(s1);
        std::cout << std::fixed << a1 << '\n';
    } catch (BadFromString &e) {
        std::cout << e.what() << '\n';
    }

    try {
        double b1 = from_string<double>(s1);
        std::cout << std::fixed << b1 << '\n';
    } catch (BadFromString &e) {
        std::cout << e.what() << '\n';
    }

    try {
        std::string c1 = from_string<std::string>(s1);
        std::cout << std::fixed << c1 << '\n';
    } catch (BadFromString &e) {
        std::cout << e.what() << '\n';
    }

    std::string s2("12.3");

    try {
        int a2 = from_string<int>(s2);
        std::cout << std::fixed << a2 << '\n';
    } catch (BadFromString &e) {
        std::cout << e.what() << '\n';
    }

    try {
        double b2 = from_string<double>(s2);
        std::cout << std::fixed << b2 << '\n';
    } catch (BadFromString &e) {
        std::cout << e.what() << '\n';
    }

    try {
        std::string c2 = from_string<std::string>(s2);
        std::cout << std::fixed << c2 << '\n';
    } catch (BadFromString &e) {
        std::cout << e.what() << '\n';
    }

    std::string s3("abc");

    try {
        int a3 = from_string<int>(s3);
        std::cout << std::fixed << a3 << '\n';
    } catch (BadFromString &e) {
        std::cout << e.what() << '\n';
    }

    try {
        double b3 = from_string<double>(s3);
        std::cout << std::fixed << b3 << '\n';
    } catch (BadFromString &e) {
        std::cout << e.what() << '\n';
    }

    try {
        std::string c3 = from_string<std::string>(s3);
        std::cout << std::fixed << c3 << '\n';
    } catch (BadFromString &e) {
        std::cout << e.what() << '\n';
    }

    return 0;
}