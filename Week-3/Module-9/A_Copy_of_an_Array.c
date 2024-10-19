#include <stdio.h>
int a[100000], b[100000];
int main() {
    int length_a = 0, length_b = 0;
    scanf("%d", &length_a);
    for(int i=0; i<length_a; i++) {
        scanf("%d", &a[i]);
    }

    printf("Befor Copy\n");
    for(int i=0; i<length_a; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    for(int i=0; i<length_a; i++) {
        printf("%d ", b[i]);
    }

    for(int i=0; i<length_a; i++) {
        b[i] = a[i];
    }
    length_b = length_a;

    // update array index value
    a[2] = 100;
    printf("\nAfter Copy\n");
    for(int i=0; i<length_a; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    for(int i=0; i<length_b; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}