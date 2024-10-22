// Array Reversing
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    long long arr[n];
    
    for(long long i=0; i<n; i++) {
        scanf("%lld", &arr[i]);
    }

    // reverse the array
    for(long long i=n-1; i>=0; i--) {
        printf("%lld ", arr[i]);
    }

    return 0;
}