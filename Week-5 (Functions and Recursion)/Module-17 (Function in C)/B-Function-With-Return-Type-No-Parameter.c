#include <stdio.h>
int add() {
    int a, b;
    scanf("%d %d", &a, &b);
    // printf("Function Called\n");
    int sum = a + b;
    return sum;
}

double getPi() {
    return 3.14159;
}
int main() {
    // printf("Before function calling\n");
    printf("%d\n", add());
    printf("%d\n", add());
    printf("%lf\n", getPi());

    return 0;
}