// Sum of n Natural Numbers
#include <iostream>
using namespace std;

int main(){ int n, sum = 0;

    cout << "Enter Limit: ";
    cin >> n;

    for (int i=0; i<=n; i++){
        sum += i;
    }
    cout << "Sum of " << n << " natural numbers = " << sum << endl;

    return 0;
}