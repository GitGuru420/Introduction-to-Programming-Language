#include <stdio.h>
#include <string.h>
int main() {
    char a[100], b[100];
    scanf("%s %s", &a, &b);

    int cmp = strcmp(a, b);
    printf("%d", cmp);

    return 0;
}