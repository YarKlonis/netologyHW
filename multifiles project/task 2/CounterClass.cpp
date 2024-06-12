#include "CounterClass.h"
Counter::Counter() {
    initialValue = 1;
}
Counter::Counter(int initialValue) {
    this->initialValue = initialValue;}
int Counter::plusOne() {
    return ++initialValue;
}
int Counter::minusOne(){
    return --initialValue;

}
int Counter::showValue(){
    return initialValue;
}
