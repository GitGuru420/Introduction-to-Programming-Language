#include <stdio.h>
#include <stdbool.h>
int main() {
    // int a = 5, b = 3;
    int a = 5, b = 5;
    bool isEqual = a == b;
    printf("%d\n", isEqual);

    int x = 5, y = 7;
    // bool flag = x<y;
    // bool flag = x<=y;
    // bool flag = x>=y;
    bool flag = x>y;
    printf("%d", flag);

    return 0;
}