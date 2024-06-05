#include <iostream>
#include <string>

class Figure{
protected:
    int numberOfSides = 0;
    std::string name = "Figure";
public:
    int getNumberOfSides(){
        return numberOfSides;
    }
    std::string getName(){
        return name;
    }
};

class Triangle : public Figure{
public:
    Triangle(){
        name = "Triangle";
        numberOfSides = 3;
    }
};

class Quadrangle : public Figure {
public:
    Quadrangle(){
        name = "Quadrangle";
        numberOfSides = 4;
    }
};

int main() {
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Number of sides: " << std::endl;
    std::cout << figure.getName() << ": " << figure.getNumberOfSides()<< std::endl;
    std::cout << triangle.getName() << ": " << triangle.getNumberOfSides()<< std::endl;
    std::cout << quadrangle.getName() << ": " << quadrangle.getNumberOfSides()<< std::endl;
}
