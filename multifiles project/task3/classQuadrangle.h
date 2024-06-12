#pragma once
#include "classFigure.h"

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
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);

    int getSide_a();

    int getSide_b();

    int getSide_c();

    int getSide_d();

    int getAngle_A();

    int getAngle_B();

    int getAngle_C();

    int getAngle_D();

    void printSides() override;

    void printAngles() override;
};