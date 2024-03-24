// Square Root of a Number
#include <iostream>
#include <cmath>
using namespace std;

int main(){ double x;

    cout << "Enter a number: ";
    cin >> x;

    double square_root = sqrt(x);
    cout << "Square root of " << x << " = " << square_root;
    cout << endl;

    return 0;
}