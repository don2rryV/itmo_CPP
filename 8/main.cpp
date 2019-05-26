#include <iostream>

#include "BearPigMan.h"
#include "functions.cpp"

using namespace functions;

int main() {
    BearPigMan first = BearPigMan("1", 1);
    BearPigMan second = BearPigMan("2", 2);
    Pig pig1 = Pig("3", 3);
    Pig* pigCast = static_cast<Pig*>(&first);

    std::cout << "first and second - "  << isSameObject(&first, &second) << "\n";
    std::cout << "first and first - "  << isSameObject(&first, &first) << "\n";
    std::cout << "pig and pigCast - "  << isSameObject(&pig1, pigCast) << "\n";

    Man man1 = Man("4", 4);
    Man man2 = Man("5", 5);
    Pig pig2 = Pig("6", 6);
    Pig* pigCast2 = dynamic_cast<Pig*>(&man1);

    std::cout << "man1 and man2 - "  << isSameObject(&man1, &man2) << "\n";
    std::cout << "man2 and man2 - "  << isSameObject(&man2, &man2) << "\n";
    std::cout << "pig2 and pigCast2 - "  << isSameObject(&pig2, pigCast2) << "\n";

}