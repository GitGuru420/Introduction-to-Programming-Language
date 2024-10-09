#include <stdio.h>
int main() {
    // take array size 
    long long n;
    scanf("%lld", &n);

    // declare array and take array elements
    long long arr[n];
    for(int i=0; i<n; i++) {
        scanf("%lld", &arr[i]);
    }

    // take array exists number
    long long x;
    scanf("%lld", &x);

    // finding exists number
    long long found, found2 = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            found = i;
            found2++;
            break;
        }
    }

    // conditions
    if(found2 == 1)
        printf("%lld", found);
    else
        printf("-1");

    return 0;
}