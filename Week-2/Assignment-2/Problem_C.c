#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int N[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &N[i]);
    }
    int X;
    scanf("%d", &X);

    for(int i=0; i<n; i++) {
        if(i == X-1) {
            if(N[i] == 0) {
                N[i] = 1;
                printf("%d ", N[i]);
            }
            else {
                N[i] = 0;
                printf("%d ", N[i]);
            }
        }
        else {
            printf("%d ", N[i]);
        }
    }

    return 0;
}