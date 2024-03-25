// Fixed Size Array
#include <iostream>
#include <vector>
#define MAX 100
using namespace std;

int main(){ vector<int> arr(MAX);

    cout << "Enter no.of Elements: ";
    int count;
    cin >> count;

    int sum = 0;
    for (int i = 0; i < count; i++){
        arr[i] = i;
        sum += arr[i];
    }

    cout << "Array Sum: " << sum << endl;

    return 0;
}