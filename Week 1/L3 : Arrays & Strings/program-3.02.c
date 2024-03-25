// Fixed Size Array in C & Using MACRO
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){ int arr[MAX], sum = 0;

    printf("Enter no.of Elements: ");
    int count;
    scanf("%d", &count);

    for (int i = 0; i < count; i++){
        arr[i] = i;
        sum += arr[i];
    }
    printf("Array Sum: %d\n", sum);

    return 0;
}