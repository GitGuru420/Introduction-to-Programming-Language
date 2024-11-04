#include <stdio.h>
/*
    return_type function_name(parameters) {
        statements;
        return result;
    }
*/
int add(int a, int b) {
    int sum = a + b;
    return sum;
}
int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int result = add(x, y);
    printf("%d", result);

    return 0;
}