#include <stdio.h>
void max_min() {
    int n;
    scanf ("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = 100001, max = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d %d", min, max);
}


int main() {
    max_min();

    return 0;
}