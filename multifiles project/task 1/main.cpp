#include <iostream>
#include "mathAction.h"


int main() {
    int a, b, action;
    std::cout << "enter first number: ";
    std::cin >> a;
    std::cout << "enter second numaber: ";
    std::cin >> b;
    std::cout << "Select an action (1 - adding, 2 - substraction, 3 - multiplying, 4 - dividing, 5 - exponentiation): ";
    std::cin >> action;
    switch (action) {
        case 1:
            std::cout << a << " plus " << b << " = " << adding(a,b);
            break;
        case 2:
            std::cout << a << " minus " << b << " = " << substraction(a,b);
            break;
        case 3:
            std::cout << a << " multiply " << b << " = " << multiplying(a,b);
            break;
        case 4:
            std::cout << a << " divide " << b << " = " << dividing(a,b);
            break;
        case 5:
            std::cout << a << " in power of " << b << " = " << exponentiation(a,b);
            break;
    }
}

