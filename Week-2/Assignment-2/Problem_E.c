#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int N[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &N[i]);
    }
    int max = N[0];
    for(int i=0; i<n; i++) {
        if(N[i] > max) {
            max = N[i];
        }
    }
    for(int i=0; i<n; i++) {
        printf("%d ", max - N[i]);
    }

    return 0;
}