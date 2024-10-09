#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);

    long long arr[n];
    for(int i=1; i<=n; i++) {
        scanf("%lld", &arr[i]);
    }

    long long min = INT_MAX;
    int position = 1000;
    for(int i=1; i<=n; i++) {
       if(arr[i] < min) {
            min = arr[i];
            position = i;
       }
    }
    printf("%lld %d", min, position);

    return 0;
}