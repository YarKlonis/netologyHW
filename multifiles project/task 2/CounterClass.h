#pragma once

class Counter{
private:
    int initialValue;
public:

    Counter();
    Counter(int initialValue);

    int plusOne() ;
    int minusOne();
    int showValue();
};