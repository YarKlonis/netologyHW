#include <iostream>

#define MODE 1
#ifndef MODE
#error Need define MODE
#else

#if MODE == 1
int add(const int& i, const int& j)
{ return i + j; }
#endif

int main()
{
#if MODE == 0
    std::cout << "test" << std::endl;
#elif MODE == 1
    std::cout << "ready for work" << std::endl;
    std::cout << "enter first number: ";
    int a;
    std::cin >> a;
    std::cout << "enter second number: ";
    int b;
    std::cin >> b;
    std::cout << "sum is: " << add(a, b) << std::endl;

#else
    std::cout << "wrong mode. shutdown" <<std::endl;
#endif
}

#endif