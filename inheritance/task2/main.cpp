#include <iostream>
#include <string>

class Figure {
protected:
    std::string name = "Figure";
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int A = 50;
    int B = 60;
    int C = 70;
    int D = 80;

public:
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



    virtual void printInfo(){}
};

class Triangle : public Figure {
public:
    Triangle() {
        name = "Triangle";

    }
    void printInfo() override{
        std::cout << getName() << std::endl;
        std::cout << "Sides: a = " << getSide_a() << ", b = " << getSide_b()<< ", c = " << getSide_c()<<std::endl;
        std::cout << "Angles: A = " << getAngle_A() << ", B = " << getAngle_B()<< ", c = " << getAngle_C()<<std::endl;
        std::cout << std::endl;
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(){
        name = "Right Triangle";
        C = 90;
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(){
        name = "Isosceles Triangle";
        a = c;
        A = C;
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(){
        name = "Equilateral Triangle";
        a = b = c;
        A = B = C = 60;
    }
};

class Quadrangle : public Figure {
public:
    Quadrangle() {
        name = "Quadrangle";
    }
        void printInfo() override {
                std::cout << getName()<< std::endl;
                std::cout << "Sides: a = " << getSide_a() << ", b = " << getSide_b()<< ", c = " << getSide_c() << ", d = " << getSide_d()<<std::endl;
                std::cout << "Angles: A = " << getAngle_A() << ", B = " << getAngle_B()<< ", c = " << getAngle_C() <<", c = " << getAngle_D()<<std::endl;
                std::cout << std::endl;
        }
    };

class Parallelogram : public Quadrangle{
public:
    Parallelogram(){
        name = "Parallelogram";
        a = c;
        b = d;
        A = C;
        B = D;
    }

};

class Rectangle : public Parallelogram {
public:
    Rectangle(){
        name = "Rectangle";
        A = B = C = D = 90;
    }
};

class Square :  public Rectangle {
public:
    Square(){
        name = "Square";
        a = b = c = d;
    }
};

class Rhomb : public Square {
public:
    Rhomb(){
        name = "Rhomb";
        A = C;
        B = D;
    }
};



int main() {
    Triangle triangle;
    Figure* par_Triangle = &triangle;
    par_Triangle ->printInfo();

    RightTriangle rightTriangle;
    Figure* par_rightTriangle = &rightTriangle;
    par_rightTriangle->printInfo();

    IsoscelesTriangle isoscelesTriangle;
    Figure* par_isosceelsTriangle = &isoscelesTriangle;
    par_isosceelsTriangle-> printInfo();

    EquilateralTriangle equilateralTriangle;
    Figure* par_equilateralTriangle = &equilateralTriangle;
    par_equilateralTriangle-> printInfo();

    Quadrangle quadrangle;
    Figure* par_quadrangle = &quadrangle;
    par_quadrangle ->printInfo();

    Rectangle rectangle;
    Figure* par_rectangle = &rectangle;
    par_rectangle -> printInfo();

    Square square;
    Figure* par_square = &square;
    par_square -> printInfo();

    Parallelogram parallelogram;
    Figure* par_parallelogram = &parallelogram;
    par_parallelogram ->printInfo();

    Rhomb rhomb;
    Figure* par_rhomb = &rhomb;
    par_rhomb ->printInfo();
}