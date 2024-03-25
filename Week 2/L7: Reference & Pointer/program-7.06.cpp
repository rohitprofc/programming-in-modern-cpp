// Return by value & reference
#include <iostream>
using namespace std;

int func_return_by_val(int &x) {
    cout << "x_val = " << x << ", &x_val = " << &x << endl;
    return (x);
}
int& func_return_by_ref(int &x) {
    cout << "x_ref = " << x << ", &x_ref = " << &x << endl;
    return (x);
}

int main() {
    int a = 10;
    cout << "a = " << a << ", &a = " << &a << endl << endl;
    
    const int &b_val = func_return_by_val(a);
    cout << "b_val = " << b_val << ", &b_val = " << &b_val << endl << endl;

    const int &b_ref = func_return_by_ref(a);
    cout << "b_ref = " << b_ref << ", &b_ref = " << &b_ref << endl << endl;

    return 0;
}