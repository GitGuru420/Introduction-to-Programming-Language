#include <stdio.h>
int a, b;
void add(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    scanf("%d %d", &a, &b);
    add(a, b);

    return 0;
}