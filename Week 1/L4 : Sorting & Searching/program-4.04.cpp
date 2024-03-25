// Binary Search
#include <iostream>
#include <algorithm>
using namespace std;

int main(){ int data[] = {1, 2, 3, 4, 5};

    int k = 5;
    
    if(binary_search(data, data+5, k))
        cout << "Element found";
    else cout << "Element not found";
    
    cout << endl;

    return 0;
}