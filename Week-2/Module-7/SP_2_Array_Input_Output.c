#include <stdio.h>
int main() {
    // array elements number
    int n;
    scanf("%d", &n);

    // declare array
    int arr[n];

    // array element input
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // array element output
    for(int i=0; i<n; i++) {
        printf("Element %d = %d\n", i, arr[i]);
        // printf("Element %d address = %d\n", i, &arr[i]);
    }

    return 0;
}