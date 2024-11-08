#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++) {
        int n;
        scanf("%d", &n);
        for(int j=1; j<=n; j++) {
            printf("%d ", j);
        }
        for(int k=n-1; k>=1; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}