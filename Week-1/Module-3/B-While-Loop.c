#include <stdio.h>
int main() {
    printf("Before While Loop\n");

    int i = 0;
    while(i<5) {
        printf("Inside While Loop i = %d\n", i);
        i++;
    }
    printf("After While Loop\n");

    return 0;
}