#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int space = n-1;
    int star = 1;
    
    for(int i=1; i<=2*n; i++) {
        for(int j=1; j<=space; j++)
            printf(" ");
        for(int j=1; j<=star; j++)
            printf("*");
        printf("\n");
        if(i<n) {
            space--;
            star += 2;
        }
        else if(i>n) {
            space++;
            star -= 2;
        }
    }

    // space = 0;
    // star = (2*n) - 1;
    // for(int i=1; i<=n; i++) {
    //     for(int j=1; j<=space; j++)
    //         printf(" ");
    //     space++;
    //     for(int j=1; j<=star; j++)
    //         printf("*");
    //     star -= 2;
    //     printf("\n");
    // }

    return 0;
}