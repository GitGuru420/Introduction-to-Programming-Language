#include <stdio.h>
int main() {
    int A, B;
    long long C;
    char S, Q;
    scanf("%d %c %d %c %lld", &A, &S, &B, &Q, &C);

    // sign check
    if(S == '+') {
        // expression check
        if(A + B == C)
            printf("Yes\n");
        else
            printf("%d\n", A + B);
    }
    else if(S == '-') {
        // expression check
        if(A - B == C)
            printf("Yes\n");
        else
            printf("%d\n", A - B);
    }
    else {
        // expression check
        if(A * B == C)
            printf("Yes\n");
        else
            printf("%d\n", A * B);
    }

    return 0;
}