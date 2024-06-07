#include <iostream>
#include <string>

class Figure{
protected:
    int numberOfSides = 0;
    std::string name = "Figure";

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;

public:
    int getNumberOfSides(){
        return numberOfSides;
    }
    std::string getName(){
        return name;
    }

    int getSide_a (){
        return a;
    }
    int getSide_b (){
        return b;
    }
    int getSide_c (){
        return c;
    }
    int getSide_d (){
        return d;
    }
    int getAngle_A (){
        return A;
    }
    int getAngle_B (){
        return B;
    }
    int getAngle_C (){
        return C;
    }
    int getAngle_D (){
        return D;
    }

    virtual void printSides(){}
    virtual void printAngles(){}
};

class Triangle : public Figure{
public:
    Triangle( int a, int b, int c, int A, int B, int C) {
        name = "Triangle";
        numberOfSides = 3;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    void printSides ()override{
        std::cout << "Sides: a = " << getSide_a() << ", b = " << getSide_b()<< ", c = " << getSide_c()<<std::endl;
    }
    void printAngles()override{
        std::cout << "Angles: A = " << getAngle_A() << ", B = " << getAngle_B()<< ", C = " << getAngle_C()<<std::endl;
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
        name = "Right Triangle";
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B,A){
        name = "Isosceles Triangle";
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int a, int A) : Triangle(a, a, a, A, A, A){
        name = "Equilateral Triangle";
    }
};

class Quadrangle : public Figure {
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
        name = "Quadrangle";
        this -> a = a;
        this -> b = b;
        this -> c = c;
        this -> d = d;
        this -> A = A;
        this -> B = B;
        this -> C = C;
        this -> D = D;
    }

    void printSides() override{
        std::cout << "Sides: a = " << getSide_a() << ", b = " << getSide_b()<< ", c = " << getSide_c() << ", d = " << getSide_d()<<std::endl;
    }

    void printAngles() override {
        std::cout << "Angles: A = " << getAngle_A() << ", B = " << getAngle_B()<< ", C = " << getAngle_C() <<", D = " << getAngle_D()<<std::endl;
    }
};

class Parallelogram : public Quadrangle{
public:
    Parallelogram(int a ,int b, int A, int B): Quadrangle(a, b, a ,b, A, B, A, B) {
        name = "Parallelogram";
    }

};

class Rectangle : public Parallelogram {
public:
    Rectangle(int a, int b) : Parallelogram(a, b, 90,90){
        name = "Rectangle";
    }
};

class Square :  public Rectangle {
public:
    Square(int a): Rectangle(a, a) {
        name = "Square";
    }
};

class Diamond : public Parallelogram{
public:
    Diamond(int a, int A, int B) : Parallelogram(a,a,A,B){
        name = "Rhomb";
    }
};

void printInfo(Figure *figure){
    std::cout << figure->getName() << std::endl;
    figure->printSides();
    figure->printAngles();
    std::cout<<std::endl;
}

int main() {
    Figure figure;
    Triangle triangle(10,20,30,40,50,60);
    RightTriangle rightTriangle(10,20,30,40,50);
    IsoscelesTriangle isoscelesTriangle(10,20,30,40);
    EquilateralTriangle equilateralTriangle(10,20);
    Quadrangle quadrangle(10,20,30,40,50,60,70,80);
    Parallelogram parallelogram(10,20,30,40);
    Rectangle rectangle (10,20);
    Square square(10);
    Diamond diamond(10,20,30);

    std::cout << "Number of sides: " << std::endl;
    printInfo(&figure);
    printInfo(&triangle);
    printInfo(&rightTriangle);
    printInfo(&isoscelesTriangle);
    printInfo(&equilateralTriangle);

    printInfo(&quadrangle);
    printInfo(&parallelogram);
    printInfo(&rectangle);
    printInfo(&square);
    printInfo(&diamond);
}
