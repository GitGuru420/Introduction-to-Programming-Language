#include <stdio.h>
int main() {
    // int n = 10;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // Print 1-N Natural Number
    for(int i=1; i<=n; i++) {
        printf("%d\n", i);
    }
    printf("\n\n");

    // Print N-1 Natural Number
    for(int i=n; i>=1; i--) {
        printf("%d ", i);
    }
    printf("\n\n");

    // Print small character
    for(char x='a'; x<='z'; x++) {
        printf("%d %c\n", x, x);
    }

    return 0;
}