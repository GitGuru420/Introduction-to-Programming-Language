#include <stdio.h>
int a[100000];
int main() {
    int length_a;
    scanf("%d", &length_a);

    for(int i=0; i<length_a; i++) {
        scanf("%d", &a[i]);
    }

    int index, value;
    scanf("%d %d", &index, &value);

    length_a++;
    for(int i=length_a-1; i>=index; i--) {
        a[i+1] = a[i];
    }
    a[index] = value;

    for(int i=0; i<length_a; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}