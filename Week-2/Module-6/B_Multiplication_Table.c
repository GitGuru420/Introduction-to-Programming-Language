#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    for(int j=1; j<=n; j++) {
        for(int i=1; i<=10; i++) {
            // printf("%d x %d = %d\n", n, i, n*i);
            // output formatting
            // printf("%d x %2d = %3d\n", n, i, n*i);
            printf("%d x %2d = %3d\n", j, i, j*i);
        }
        printf("\n\n");
    }

    return 0;
}