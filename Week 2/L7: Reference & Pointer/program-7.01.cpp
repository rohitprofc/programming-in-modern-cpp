// Behaviour of Reference
#include <iostream>
using namespace std;

int main() {
    int a = 45;
    int &b = a;

    cout << "Value of a: " << a << " -- ";
    cout << "Address of a: " << &a << endl;
    cout << "Value of b: " << b << " -- ";
    cout << "Address of b: " << &b << endl << endl;

    // Modifying a
    a++;
    cout << "After incrementing a value (a++):" << endl;
    cout << "Value of a (a++): " << a << endl;
    cout << "Value of b (a++): " << b << endl << endl;

    // Modifying b
    b++;
    cout << "After incrementing b value (b++):" << endl;
    cout << "Value of a (b++): " << a << endl;
    cout << "Value of b (b++): " << b << endl << endl;

    return 0;
}