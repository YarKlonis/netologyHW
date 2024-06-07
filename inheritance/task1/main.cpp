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
void printInfo(Figure *figure){
    std::cout << figure->getName() <<  ": " << figure->getNumberOfSides() << std::endl;
}

int main() {
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << "Number of sides: " << std::endl;
    printInfo(&figure);
    printInfo(&triangle);
    printInfo(&quadrangle);
}
