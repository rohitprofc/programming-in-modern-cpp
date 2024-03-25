// Swap in C++
#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}

int main() { int a = 45, b = 51;

    cout << "Call by Reference in C++" << endl;
    printf("a = %d, b = %d to swap\n", a, b);
    swap(a, b);
    printf("a = %d, b = %d on swap\n", a, b);

    return 0;
}