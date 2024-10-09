#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    long long arr[n];
    for(int i=0; i<n; i++) {
        scanf("%lld", &arr[i]);
    }

    for(int i=0; i<n; i++) {
        if(arr[i] > 0) {
            // replace 1
            arr[i] = 1;
            printf("%lld ", arr[i]);
        }
        else if(arr[i] < 0) {
            // replace 2
            arr[i] = 2;
            printf("%lld ", arr[i]);
        }
        else {
            printf("%lld ", arr[i]);
        }
    }

    return 0;
}