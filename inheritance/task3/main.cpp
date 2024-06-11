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

    virtual void printSides(){}
    virtual void printAngles(){}
    virtual bool check(){
        if( numberOfSides == 0){
            return true;
        } return false;
    }
};

class Triangle : public Figure{
protected:
    int a = 0;
    int b = 0;
    int c = 0;
    int A = 0;
    int B = 0;
    int C = 0;
public:
    Triangle( int a, int b, int c, int A, int B, int C) {
        name = "Triangle";
        numberOfSides = 3;
        this-> a = a;
        this-> b = b;
        this-> c = c;

        this-> A = A;
        this-> B = B;
        this-> C = C;
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
    int getAngle_A (){
        return A;
    }
    int getAngle_B (){
        return B;
    }
    int getAngle_C (){
        return C;
    }

    bool check () override {
        if ((numberOfSides == 3) && (A + B + C == 180)) {
            return true;
        } return false;
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
    bool check () override {

        if ((C == 90)&&(Triangle::check())) {
            return true;
        } return false;
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B,A){
        name = "Isosceles Triangle";
    }
    bool check () override {
        if (Triangle::check()) {
            if ((a == c) && (A == C )) {
                return true;
            }
        }return false;
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int a, int A) : Triangle(a, a, a, A, A, A){
        name = "Equilateral Triangle";
    }
    bool check () override {
        if (Triangle::check()) {
            if ((a == b) && (b == c) && (A == B) && (B == C)){
                return true;
            }
        }return false;
    }
};

class Quadrangle : public Figure {
protected:
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;

public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
        name = "Quadrangle";
        numberOfSides = 4;

        this-> a = a;
        this-> b = b;
        this-> c = c;
        this-> d = d;

        this-> A = A;
        this-> B = B;
        this-> C = C;
        this-> D = D;
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

    bool check () override {
        if ((numberOfSides == 4) && (A + B + C + D == 360)) {
            return true;
        } return false;
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
    bool check() override{
        if (Quadrangle::check()) {
            if ((a == c) && (b == d) && (A == C) && (B == D)){
                return true;
            }
        }return false;
    }
};

class Rectangle : public Parallelogram {
public:
    Rectangle(int a, int b) : Parallelogram(a, b, 90,90){
        name = "Rectangle";
    }
    bool check() override{
        if (Parallelogram::check()) {
            if ((A == 90) && (B == 90)){
                return true;
            }
        }return false;
    }
};

class Square :  public Rectangle {
public:
    Square(int a): Rectangle(a, a) {
        name = "Square";
    }
    bool check() override{
        if (Rectangle::check()) {
            if (a == b && A == B){
                return true;
            }
        }return false;
    }
};

class Diamond : public Parallelogram{
public:
    Diamond(int a, int A, int B) : Parallelogram(a,a, A, B){
        name = "Diamond";
    }
    bool check() override{
        if (Parallelogram::check()) {
            if (a == b){
                return true;
            }
        }return false;
    }
};

void printInfo(Figure *figure){
    std::cout << figure->getName() << ": " << std::endl;
    std::cout << (figure->check() ? "Right" : "Wrong" )<< std::endl;
    std::cout << "Number of sides: " <<figure->getNumberOfSides() <<std::endl;
    figure->printSides();
    figure->printAngles();
    std::cout<<std::endl;
}

int main() {
    Figure figure;
    Triangle triangle(10,20,30,40,50,60);
    RightTriangle rightTriangle(10,20,30,40,50);
    IsoscelesTriangle isoscelesTriangle(10,20,40,100);
    EquilateralTriangle equilateralTriangle(20,60);


    Quadrangle quadrangle(10,20,30,40,50,60,70,80);
    Parallelogram parallelogram(10,20,30,40);
    Rectangle rectangle (10,20);
    Square square(10);
    Diamond diamond(10,30,30);

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
