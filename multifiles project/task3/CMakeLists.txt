cmake_minimum_required(VERSION 3.28)
project(task3)

set(CMAKE_CXX_STANDARD 17)

add_executable(task3 main.cpp
        classFigure.cpp
        classFigure.h
        classTriangle.cpp
        classTriangle.h
        classRightTriangle.cpp
        classIsoscelesTriangle.cpp
        classIsoscelesTriangle.h
        classEquilateralTriangle.cpp
        classEquilateralTriangle.h
        classRightTriangle.h
        classQuadrangle.cpp
        classQuadrangle.h
        classParallelogram.cpp
        classParallelogram.h
        classRectangle.cpp
        classRectangle.h
        classSquare.cpp
        classSquare.h
        classDiamond.cpp
        classDiamond.h)
