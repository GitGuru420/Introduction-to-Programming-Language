#include <stdio.h>
void add(int a, int b) {
    int sum = a + b;
    printf("%d", sum);
}
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    add(x, y);

    return 0;
}