#include <stdio.h>
void print(int n, int x) {
    if(n == x) {
        printf("%d", 1);
    }
    if(n <= x) {
        return;
    }
    
    printf("%d ", n);
    print(n - 1, x);
}

int main() {
    int n;
    scanf("%d", &n);
    int x = 1;
    print(n, x);

    return 0;
}