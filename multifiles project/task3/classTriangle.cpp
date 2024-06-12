
#include "classTriangle.h"

    Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
        name = "Triangle";
        numberOfSides = 3;
        this-> a = a;
        this-> b = b;
        this-> c = c;

        this-> A = A;
        this-> B = B;
        this-> C = C;
    }
    int Triangle::getSide_a (){
        return a;
    }
    int Triangle::getSide_b (){
        return b;
    }
    int Triangle::getSide_c (){
        return c;
    }
    int Triangle::getAngle_A (){
        return A;
    }
    int Triangle::getAngle_B (){
        return B;
    }
    int Triangle::getAngle_C (){
        return C;
    }

    void Triangle::printSides (){
        std::cout << "Sides: a = " << getSide_a() << ", b = " << getSide_b()<< ", c = " << getSide_c()<<std::endl;
    }
    void Triangle::printAngles(){
        std::cout << "Angles: A = " << getAngle_A() << ", B = " << getAngle_B()<< ", C = " << getAngle_C()<<std::endl;
    }