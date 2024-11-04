#include <stdio.h>
int a, b;
// void swap(int x, int y) {   // copy of main a, b
//     int temp = x;
//     x = y;
//     y = temp;
// }
void swap(int *x, int *y) {   // reference of main a, b
    printf("func: %p %p\n", x, y);
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("main: %p %p\n", &a, &b);
    printf("%d %d", a, b);

    return 0;
}