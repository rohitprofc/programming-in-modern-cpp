// Macros as inline functions
#include <iostream>
using namespace std;

inline int SQUARE(int x) { return x * x; }

int main() {

    int a = 3;

    cout << "Square: " << SQUARE(a) << endl;
    cout << "Square: " << SQUARE(a + 1) << endl;
    cout << "Square: " << SQUARE(++a) << endl;

    return 0;
}