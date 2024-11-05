#include <stdio.h>
int main() {    
    int x = 100000;
    int y = 100000;

    long long result = x * (y * 1LL);
    printf("%lld", result);

    return 0;
}