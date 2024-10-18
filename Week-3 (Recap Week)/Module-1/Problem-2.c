#include <stdio.h>
int main() {
    int A, B;
    char S;
    scanf("%d %c %d", &A, &S, &B);

    if(S == '>') {
        // greater
        if(A > B)
            printf("Right\n");
        else
            printf("Wrong\n");
    }
    else if(S == '<') {
        // less
        if(A < B)
            printf("Right\n");
        else
            printf("Wrong\n");
    }
    else {
        // equal
        if(A == B)
            printf("Right\n");
        else
            printf("Wrong\n");
    }

    return 0;
}