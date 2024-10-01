#include <stdio.h>
int main() {
    printf("%d\n", 3 + 5);
    printf("%d\n", 3 - 5);    
    printf("%d\n", 5 - 3);    
    printf("%d\n", 5 * 3);    
    printf("%d\n", 5 / 3);    
    printf("%f\n", 5 / 3.0);    
    printf("%d\n", 5 % 3);    

    int a = 11, b = 4;
    int result = a * b;
    printf("%d\n", a + b);
    printf("%d\n", result);

    // int x = 100000, y = 100000;
    long long x = 100000, y = 100000;
    // int result1 = x * y;
    long long result1 = x * y;
    printf("%lld\n", result1);
    printf("%lld\n", 1LL * a * b);

    printf("%d\n", 0 / 12);
    // printf("%d\n", 12 / 0);

    int p, q;
    scanf("%d %d", &p, &q);
    printf("%d", p * q);
    
    return 0;
}