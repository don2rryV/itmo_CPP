#include <tuple>
#include "hw91.h"

int main() {
    print_value(1, "hello", 6.7, 'y');
    std::cout << std::endl;

    Array<int> a(5);
    for (int i = 0; i < a.size(); i++) a[i] = i + 5;
    Array<int> b(std::move(a));
    Array<int> c(10);
    for (int i = 0; i < c.size(); i++) c[i] = 100 * i;
    c = std::move(b);

    Array<int> buffer1 = Array<int>(4);
        for (int i = 0; i < buffer1.size(); i++) buffer1[i] = i + 1;
        for (int i = 0; i < buffer1.size(); i++) std::cout << buffer1[i] << " ";
        std::cout << std::endl;

    Array<int> buffer2 = buffer1;
        for (int i = 0; i < buffer2.size(); i++) std::cout << buffer2[i] << " ";
        std::cout << std::endl;

    buffer2 = Array<int>(6);
        for (int i = 0; i < buffer2.size(); i++) buffer2[i] = i * 10;
        for (int i = 0; i < buffer2.size(); i++) std::cout << buffer2[i] << " ";
        std::cout << std::endl;

    buffer2 = buffer1;
        for (int i = 0; i < buffer2.size(); i++) std::cout << buffer2[i] << " ";
        std::cout << std::endl;

    auto t = std::make_tuple(0, 3.5, "Hello");
    std::pair<double, char const *> p = to_pair<1,2>(t);
    std::cout << p.first << " " << p.second << std::endl;

}