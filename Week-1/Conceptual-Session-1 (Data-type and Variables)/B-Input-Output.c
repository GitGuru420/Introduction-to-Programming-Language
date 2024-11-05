#include <stdio.h>
int main() {
    int n = 5;  // initialization
    int a;      // declaration
    a = 10;     // assignment

    int x, y;
    char ch;
    scanf("%d %d %c", &x, &y, &ch);
    printf("Output x: %d\nOutput y: %d\nCharacter: %c\n", x, y, ch);

    return 0;
}

/*
Format Specifier:
int --> %d
long long int --> %lld
float --> %f
double --> %lf
char --> %c
*/