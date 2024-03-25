// Swap in C
#include <stdio.h>

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int main() { int a = 45, b = 51;

    printf("Call by Address in C\n");
    printf("a = %d, b = %d to swap\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d on swap\n", a, b);

    return 0;
}