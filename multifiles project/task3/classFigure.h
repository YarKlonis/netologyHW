#pragma once
#include <iostream>
#include <string>

class Figure{
protected:
    int numberOfSides = 0;
    std::string name = "Figure";
public:
    std::basic_string<char> getName();
    virtual void printSides(){}
    virtual void printAngles(){}
};