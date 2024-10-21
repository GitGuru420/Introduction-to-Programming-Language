#include <stdio.h>
int a[100000], b[100000];
int main() {
    int length_a1 = 0;
    scanf("%d", &length_a1);

    for(int i=0; i<length_a1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Before Copy: Element of array(a):\n");
    for(int i=0; i<length_a1; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Before Copy: Element of array(b):\n");
    for(int i=0; i<length_a1; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    // copy array element
    for(int i=0; i<length_a1; i++) {
        b[i] = a[i];
    }
    printf("After Copy: Element of array(b)\n");
    for(int i=0; i<length_a1; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    // update array element
    printf("Update array element\n");
    a[2] = 100;
    for(int i=0; i<length_a1; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}