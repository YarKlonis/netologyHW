#include <iostream>
#include <string>

#include "classFigure.h"

#include "classTriangle.h"
#include "classRightTriangle.h"
#include "classIsoscelesTriangle.h"
#include "classEquilateralTriangle.h"

#include "classQuadrangle.h"
#include "classParallelogram.h"
#include "classRectangle.h"
#include "classSquare.h"
#include "classDiamond.h"

void printInfo(Figure *figure){
    std::cout << figure->getName() << std::endl;
    figure->printSides();
    figure->printAngles();
    std::cout<<std::endl;
}

int main() {

    Triangle triangle(10,20,30,40,50,60);
    RightTriangle rightTriangle(10,20,30,40,50);
    IsoscelesTriangle isoscelesTriangle(10,20,30,40);
    EquilateralTriangle equilateralTriangle(10,20);
    Quadrangle quadrangle(10,20,30,40,50,60,70,80);
    Parallelogram parallelogram(10,20,30,40);
    Rectangle rectangle (10,20);
    Square square(10);
    Diamond diamond(10,20,30);


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