#include <stdio.h>
int main() {
    long long n;
    scanf("%lld", &n);
    long long arr[n];

    // take array input
    for(int i=0; i<n; i++) {
        scanf("%lld", &arr[i]);
    }

    // array summation
    long long sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }

    // absolute summation
    if(sum < 0)
        printf("%lld", (-1) * sum);
    else
        printf("%lld", sum);

    return 0;
}