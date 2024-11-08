#include <stdio.h>
void print(int x, int n) {
    if(x > n) {
        return;
    }
    printf("%d\n", x);
    // printf("Before function call, Current X = %d\n", x);
    print(x + 1, n);
    // printf("After function call, Current X = %d\n", x);
}

int main() {
    int n;
    scanf("%d", &n);
    // printf("Before function call in main\n");
    print(1, n);
    // printf("After function call in main\n");

    return 0;
}