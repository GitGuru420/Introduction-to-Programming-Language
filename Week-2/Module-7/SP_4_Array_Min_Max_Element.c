#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX, max = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    
    return 0;
}