// Palindrome Array

#include <stdio.h>
int main() {
    long long n;
    scanf("%lld", &n);
    long long arr[n];

    for(long long i=0; i<n; i++) {
        scanf("%lld", &arr[i]);
    }

    int count = 0;
    for(long long i=0; i<n; i++) {
        if(arr[i] == arr[n-1-i]) {
            count++;
        }
    }

    if(count == n) 
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}