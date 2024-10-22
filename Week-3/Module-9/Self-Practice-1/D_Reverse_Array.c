#include <stdio.h>
int a[100000], b[100000];
int main() {
    int length_a, length_b;
    scanf("%d", &length_a);

    for(int i=0; i<length_a; i++) {
        scanf("%d", &a[i]);
    }

    for(int i=0, j=length_a-1; i<length_a && j>=0; i++, j--) {
        b[j] = a[i];
    }

    length_b = length_a;
    for(int j=0; j<length_b; j++) {
        printf("%d ", b[j]);
    }

    return 0;
}