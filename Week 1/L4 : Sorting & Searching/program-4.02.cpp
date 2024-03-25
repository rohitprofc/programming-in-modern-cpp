// Using sort from standard library
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return (a > b);
}

int main(){ int data[] = {3, 2, 4, 5, 1};
    
    sort(data, data+5, compare);

    for(int i = 0; i < 5; i++){
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}