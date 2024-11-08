#include <stdio.h>

void func2() {
    printf("Inside func2\n");
}

void func1() {
    printf("Before function call (inside func1)\n");
    func2();
    printf("After function call (inside func1)\n");
}

int main() {
    printf("Before function call in main\n");
    func1();
    printf("After function call in main\n");

    return 0;
}