#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[100000] = {0};
    for(int i=0; i<n; i++) {
        freq[arr[i]] ++;
    }

    // for(int i=0; i<n; i++) {
    //     printf("%d -> %d\n", i, freq[i]);
    // }

    int val = -1;
    int max = -1;
    for(int i=0; i<100000; i++) {
        if(freq[i] > max) {
            max = freq[i];
            val = i;
        }
    }
    printf("%d --> %d\n", val, max);

    return 0;
}