#include "mathAction.h"

int adding(int x, int y){
    return x + y;
}
int substraction (int x, int y){
    return x - y;
}
int multiplying (int x, int y){
    return x * y ;
}
int dividing (int x, int y){
    return x / y ;
}
int exponentiation (int x, int y){
    int result = 1;
    for (int i = 0; i < y; i++){
        result *= x;
    }
    return result;
}