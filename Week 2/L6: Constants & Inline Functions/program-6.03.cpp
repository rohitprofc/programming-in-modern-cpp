// Macros with parameters
#include <iostream>
using namespace std;

#define SQUARE(x) x * x

int main() {

    int a = 3;

    cout << "Square: " << SQUARE(a) << endl;
    cout << "Square: " << SQUARE(a + 1) << endl;
    cout << "Square: " << SQUARE(++a) << endl;

    return 0;
}