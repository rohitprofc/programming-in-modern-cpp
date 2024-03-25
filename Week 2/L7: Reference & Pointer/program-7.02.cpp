// Call by value & reference
#include <iostream>
using namespace std;

void func_param_test(int &b, int c) { // b is reference and c is value
    cout << "b = " << b;
    cout << ", &b = " << &b << endl;

    cout << "c = " << c;
    cout << ", &c = " << &c << endl;
}

int main() { int a = 20;
    cout << "a = " << a;
    cout << ", &a = " << &a << endl;
    func_param_test(a, a); 

    return 0;
}