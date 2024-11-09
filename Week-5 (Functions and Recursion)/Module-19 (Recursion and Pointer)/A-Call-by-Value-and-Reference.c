#include <stdio.h>
void fun(int x, int *y) {
    x *= 10;
    *y *= 10;
    printf("%d %d\n", x, *y);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    fun(a, &b);
    printf("%d %d\n", a, b);

    return 0;
}