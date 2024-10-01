#include <stdio.h>
int main() {
    for(int i=0; i<3; i++) {
        for(int j=0; j<5; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n");

    for(int p=1; p<3; p++) {
        for(int q=1; q<5; q++) {
            printf("%d hour, %d minute\n", p, q);
        }
        printf("\n");
    }

    return 0;
}