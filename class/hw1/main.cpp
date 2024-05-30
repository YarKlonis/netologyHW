#include <iostream>

class Calculator {
private:
    double numX =0;
    double numY = 0;
public:
    //Сложение
    double add()
    {
        return numX + numY;
    }
    //Умножение
    double multiply()
    {
        return numX * numY;
    }
    //Вычитание второго из первого
    double subtract_1_2()
    {
        return numX - numY;
    }
    //Вычитание первого из второго
    double subtract_2_1()
    {
        return numY - numX;
    }
    //Деление первого на второе
    double divide_1_2()
    {
        return numX / numY;
    }
    //Деление второго не первое
    double divide_2_1()
    {
        return numY / numX;
    }

    //Проверка что первое число не ноль
    bool set_num1(double num1)
    {
        if (num1 == 0)
        {
            return false;
        }
        else
        {
            numX = num1;
            return true;
        }
    }
    //Проверка что второе число не ноль
    bool set_num2(double num2)
    {
        if (num2 == 0)
        {
            return false;
        }
        else
        {
            numY = num2;
            return true;
        }
    }
};

    int main() {
    Calculator calculator;
    double userNum1, userNum2;
    while(true)
    {
        do
        {
            std::cout << "Input num1: ";
            std::cin >> userNum1;
            if (!calculator.set_num1(userNum1))
            {
                std::cout << "Wrong!"<< std::endl;
            }
        }
        while(!calculator.set_num1(userNum1));

        do
        {
            std::cout << "Input num2: ";
            std::cin >> userNum2;
            if (!calculator.set_num2(userNum2))
            {
                std::cout << "Wrong!"<< std::endl;
            }
        }
        while(!calculator.set_num2(userNum2));

        std::cout << "num1 + num2 = " << calculator.add() << std::endl;
        std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
        std::cout << "num1 - num2 = " << calculator.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calculator.subtract_2_1() << std::endl;
        std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;

    }
}
