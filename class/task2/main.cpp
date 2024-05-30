#include <iostream>
#include <string>

class Counter{
private:
    int initialValue;
public:

    Counter(){
        initialValue = 1;
    }
    Counter(int initialValue){
        this->initialValue = initialValue;}

    int plusOne() {
        return ++initialValue;
    }
    int minusOne(){
        return --initialValue;

    }
    int showValue(){
        return initialValue;
    }
};

int main() {
    int userValue;
    std::string userAnswer;
    char userCommand;
    Counter* userCounter;

    std::cout << "Do u want to enter initial value? yes or no: ";
    std::cin >> userAnswer;
    if (userAnswer == "yes") {
        std::cout << "ok! enter initial value: ";
        std::cin >> userValue;
        userCounter = new Counter(userValue);

    } else {
        std::cout << "Ok! Initial value is 1." << std::endl;
        userCounter = new Counter() ;
    }

    do {
        std::cout << "Enter command ( '+', '-', '=' or 'x' )";
        std::cin >> userCommand;
        if (userCommand == '+') {
            std::cout << userCounter->plusOne()<< std::endl;
            continue;
        }
        if (userCommand == '-') {
            std::cout << userCounter->minusOne()<< std::endl;
            continue;
        }
        if (userCommand == '=') {
            std::cout << userCounter->showValue()<< std::endl;
            continue;
        } else {
            std::cout << "Bye-bye!";
        }
    }while (userCommand != 'x');

    delete userCounter;
}