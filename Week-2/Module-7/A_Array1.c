#include <stdio.h>
int main() {
    // initialize array
    // int arr[10] = {10, 30, 3, 5, 8, 90, 44, 77, 20, 100};

    // array input
    int ar[5];
    for(int i=0; i<5; i++) {
        scanf("%d", &ar[i]);
    }

    // add 5 for every element
    for(int i=0; i<5; i++) {
        ar[i] += 5;
    }
    
    // array output
    for(int i=0; i<5; i++) {
        // print value
        printf("%d ", ar[i]);

        // print address
        // printf("%d", &ar[i]);
    }

    return 0;
} 