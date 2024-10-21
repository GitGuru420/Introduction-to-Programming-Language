// header file
#include <stdio.h>

// global array declaration
int a[100000];
int b[100000];

// main function
int main() {
    int length_a, length_b;
    scanf("%d", &length_a);

    // taking array element
    for(int i=0; i<length_a; i++) {
        scanf("%d", &a[i]);
    }

    // print array element before copy
    printf("Before copy the array elements: ");
    for(int i=0; i<length_a; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // print array element after copy
    length_b = length_a;
    printf("After copy the array elements: ");
    for(int i=0; i<length_b; i++) {
        b[i] = a[i];
        printf("%d ", b[i]);
    }

    return 0;
}