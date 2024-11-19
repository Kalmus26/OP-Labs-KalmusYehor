#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 3, c; 
    c = b + a;
    a = c - a;
    b = c - b;

    int d = 4, e = 5;
    d = d + e;
    e = e - d;
    d = e + d;
    e = -e;
}