// Using default sort of algorithm library
#include <iostream>
#include <algorithm>
using namespace std;

int main(){ int data[] = {3, 2, 4, 5, 1};
    
    sort(data, data+5);

    for(int i = 0; i < 5; i++){
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}