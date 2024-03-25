// Reversing a string using stack in C++
#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main() {

    char str[6] = "ROHIT";
    stack<char> s;

    for(int i = 0; i < strlen(str); i++) {
        s.push(str[i]);
    }

    cout << "Reversed string: ";

    while (!s.empty()) {
        cout << s.top(); s.pop();
    }

    return 0;
}