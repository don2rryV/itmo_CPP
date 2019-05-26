#include <iostream>
#include "String.h"



int main() {
    String s1("Hello, ");
    String s2("world!");
    String s3("HELLO");
    std::cout << "s1 = " << s1 << '\n';
    std::cout << "s2 = " << s2 << '\n';
    std::cout << "s3 = " << s3 << '\n';
    s1.append(s2);
    std::cout << "s1 + s2 = " << s1 << '\n';
    std::cout << "_______________________________________" << '\n';

    String s4("Tom"), s5('O', 20);
    s4 = String("Mark");
    s5 = String(s4);
    std::cout << "s4 = " << s4 << '\n';
    std::cout << "s5 = " << s5 << '\n';
    std::cout << "_______________________________________" << '\n';

    String s6("one");
    String s7("two");
    std::cout << "before: " << '\n';
    std::cout << "s6 = " << s6 << '\n';
    std::cout << "s7 = " << s7 << '\n';
    s6 = s7;
    std::cout << "after: " << '\n';
    std::cout << "s6 = " << s6 << '\n';
    std::cout << "s7 = " << s7 << '\n';
    std::cout << "_______________________________________" << '\n';

}