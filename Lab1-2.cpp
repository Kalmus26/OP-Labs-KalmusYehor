#include <math.h>
#include <iostream>

int main()
{
    float a, b, c;
    float p, S;

    a = 7.00;
    b = 4.00;
    c = 9.00;
    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
}