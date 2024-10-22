#include <stdio.h>
int a[100000];      
int main() {
    int length_a;
    scanf("%d", &length_a);

    for(int i=0; i<length_a; i++) {
        scanf("%d", &a[i]);
    }
    
    int index;
    scanf("%d", &index);

    for(int i=index; i<length_a; i++) {
        a[i] = a[i+1];
    }

    length_a--;
    // a[index] = a[i-1];
    for(int i=0; i<length_a; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}