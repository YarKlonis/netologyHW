#pragma once
#include <iostream>
#include "classFigure.h"

class Triangle : public Figure{
protected:
    int a = 0;
    int b = 0;
    int c = 0;
    int A = 0;
    int B = 0;
    int C = 0;
public:
    Triangle(int a, int b, int c, int A, int B, int C);
    int getSide_a ();
    int getSide_b ();
    int getSide_c ();
    int getAngle_A ();
    int getAngle_B ();
    int getAngle_C ();

    void printSides ()override;
    void printAngles()override;
};