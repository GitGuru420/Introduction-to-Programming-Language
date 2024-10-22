// find variable size
#include <stdio.h>
int main() {
    int a[5];
    // printf("%d", sizeof(a)/sizeof(int));
    printf("%lld", sizeof(a)/sizeof(int));
    
    printf("\n");

    char c[5];
    int sz = sizeof(c) / sizeof(char);
    printf("%d", sz);

    return 0;
}