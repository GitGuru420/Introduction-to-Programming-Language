#include <stdio.h>
#include <string.h>
int main() {
    char a[100] = "air";
    char b[100] = "apple";

    // int cmp = strcmp(a, b);
    int cmp = strcmp(b, a);
    printf("%d", cmp);

    return 0;
}