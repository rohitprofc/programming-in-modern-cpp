// Compare #define and const
#include <iostream>
#include <cmath>
using namespace std;

int main() { 

    const int TWO =  2;
    const double PI = 4.0*atan(1.0);
    int r = 10;

    double peri = TWO * PI * r;
    cout << "Perimeter: " << peri << endl;

    return 0;
}