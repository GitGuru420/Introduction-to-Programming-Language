#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    if(n >= 0) {
        printf("Positive\n");
        if(n%2 == 0)
            printf("Even");
        else
            printf("Odd");
    }
    else {
        printf("Negative\n");
        if(n%2 == 0)
            printf("Even");
        else
            printf("Odd");
    }

    return 0;
}