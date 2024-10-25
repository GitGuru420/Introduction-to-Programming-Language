#include <stdio.h>
#include <string.h>
int main() {
    int n, t;
    scanf("%d %d", &n, &t);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    long long sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
        if(sum <= t) {
            count++;
        }
        else if(sum > t) {
            break;
        }
    }
    printf("%d", count);

    return 0;
}