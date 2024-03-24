// Replace & Rotate
#include <iostream>
#include <algorithm>
using namespace std;

int main(){ int data[] = {1, 2, 3, 4, 5};

    replace(data, data+5, 3, 51);

    cout << "Replace: ";
    for(int i = 0; i < 5; i++){
        cout << data[i] << " ";
    }

    cout << endl;

    rotate(data, data+2, data+5);

    cout << "Rotate: ";
    for(int i = 0; i < 5; i++){
        cout << data[i] << " ";
    }

    cout << endl;

    return 0;
}