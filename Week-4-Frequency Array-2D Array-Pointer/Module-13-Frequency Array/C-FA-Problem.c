#include <stdio.h>
int freq[100000];
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]] += 1;
    }

    for(int i=1; i<=m; i++) {
        printf("%d\n", freq[i]);
    }

    return 0;
}