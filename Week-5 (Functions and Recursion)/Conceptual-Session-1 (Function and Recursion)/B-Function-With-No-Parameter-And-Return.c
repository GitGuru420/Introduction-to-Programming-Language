#include <stdio.h>
int add() {
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;
    return sum;
}

int main() {
    int sum = add();
    printf("%d", sum);

    return 0;
}