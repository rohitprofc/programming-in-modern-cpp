// Bubble Sort
#include <iostream>
using namespace std;

int main(){ int data[] = {3, 2, 4, 5, 1};

    int temp = 0, n = 5;

    for(int i = 0; i < n-1; ++i){

        for(int j = 0; j < n-i-1; ++j){

            if (data[j] > data[j + 1]){

                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    for(int k = 0; k < n; ++k){
        
        cout << data[k] << " ";
    }
    cout << endl;

    return 0;
}