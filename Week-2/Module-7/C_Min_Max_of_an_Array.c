#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int ar[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &ar[i]);
    }

    int min = INT_MAX, max = INT_MIN;
    // int max = ar[0], min = ar[0];
    for(int i=0; i<n; i++) {
        if(ar[i] < min) {
            min = ar[i];
        }
        if(ar[i] > max) {
            max = ar[i];
        }
    }
    printf("Minimum = %d, Maximum = %d", min, max);

    return 0;
}