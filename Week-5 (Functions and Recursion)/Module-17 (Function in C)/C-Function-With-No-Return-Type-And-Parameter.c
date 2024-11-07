#include <stdio.h>
// Function with no return type and parameter.
void add(int x, int y) {
    // printf("Add Function Calling\n");
    int sum = x + y;
    printf("%d\n", sum);
}

void alphabetCheck(char ch) {
    if('a' <= ch && ch <= 'z')
        printf("Lower\n");
    else
        printf("Upper\n");
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    add(a, b);

    alphabetCheck('a');
    alphabetCheck('A');

    return 0;
}