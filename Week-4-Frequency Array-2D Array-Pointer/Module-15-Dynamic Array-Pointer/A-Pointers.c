#include <stdio.h>
int main() {
    // int a = 5;
    // int *b = &a;
    
    // printf("%d\n", &a);
    // int value = *b;
    // printf("%d\n", *b);
    // printf("%d\n", value);

    int a=5, b=6;
    int *x = &a, *y = &b;

    printf("%d %d\n", a, b);

    // dereferencing
    int temp = *x;
    *x = *y;
    *y = temp;

    printf("%d %d\n", a, b);

    return 0;
}