#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n ;i++) {
        for(int j=1; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    int space = 1;
    int digit = n-1;
    for(int i=1; i<n; i++) {
        for(int j=1; j<=space; j++) {
            printf(" ");
        }
        space++;
        for(int j=1; j<=digit; j++) {
            printf("%d", j);
        }
        digit--;
        printf("\n");
    }
    
    return 0;
}