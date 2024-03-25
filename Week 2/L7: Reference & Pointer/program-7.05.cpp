// Reference parameter as const
#include <iostream>
using namespace std;

int ref_const(const int &x) {

    // ++x;
    // return(x); This is not allowed
    return (x + 1); // Instead we do this
}

int main() { int a = 10, b;

    b = ref_const(a);
    cout << "a = " << a << " and b = " << b << endl;

    return 0;
}