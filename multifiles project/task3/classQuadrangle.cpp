#include "classQuadrangle.h"


Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
    name = "Quadrangle";

    this-> a = a;
    this-> b = b;
    this-> c = c;
    this-> d = d;

    this-> A = A;
    this-> B = B;
    this-> C = C;
    this-> D = D;
}
int Quadrangle::getSide_a (){
    return a;
}
int Quadrangle::getSide_b (){
    return b;
}
int Quadrangle::getSide_c (){
    return c;
}
int Quadrangle::getSide_d (){
    return d;
}
int Quadrangle::getAngle_A (){
    return A;
}
int Quadrangle::getAngle_B (){
    return B;
}
int Quadrangle::getAngle_C (){
    return C;
}
int Quadrangle::getAngle_D (){
    return D;
}

void Quadrangle::printSides(){
    std::cout << "Sides: a = " << getSide_a() << ", b = " << getSide_b()<< ", c = " << getSide_c() << ", d = " << getSide_d()<<std::endl;
}

void Quadrangle::printAngles() {
    std::cout << "Angles: A = " << getAngle_A() << ", B = " << getAngle_B()<< ", C = " << getAngle_C() <<", D = " << getAngle_D()<<std::endl;
}

