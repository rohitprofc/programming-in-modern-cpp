// Manifest constants in C++
#include <iostream>
#include <cmath>
using namespace std;

#define TWO 2
#define PI 4.0*atan(1.0)


int main() { int r = 10;

    double peri = TWO * PI * r;
    cout << "Perimeter: " << peri << endl;

    return 0;
}