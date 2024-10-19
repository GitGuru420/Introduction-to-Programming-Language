#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a < b && a < c) {
        // a min
        if(b < c) {
            // c max
            printf("%d\n%d\n%d\n\n", a, b, c);
        }
        else {
            // b max
            printf("%d\n%d\n%d\n\n", a, c, b);
        }
    }
    else if(b < a && b < c) {
        // b min
        if(a < c) {
            // c max
            printf("%d\n%d\n%d\n\n", b, a, c);
        }
        else {
            // a max
            printf("%d\n%d\n%d\n\n", b, c, a);
        }
    }
    else {
        // c is min
        if(a < b) {
            // b max
            printf("%d\n%d\n%d\n\n", c, a, b);
        }
        else {
            // a max
            printf("%d\n%d\n%d\n\n", c, b, a);
        }
    }

    printf("%d\n%d\n%d", a, b, c);
    
    return 0;
}