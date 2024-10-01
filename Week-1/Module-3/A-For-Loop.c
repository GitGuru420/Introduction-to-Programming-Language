#include <stdio.h>
int main() {
    printf("Before For Loop\n");

    for(int i=0; i<3; i++) {
        printf("Inside For Loop\n");
        printf("Value of i = %d\n", i);
    }
    printf("Outside For Loop\n");

    return 0;
}