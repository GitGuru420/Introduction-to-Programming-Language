#include <stdio.h>
void prime_check(int n) {
    int flag = 1;   // let this number is prime;
    for(int i=2; i<n; i++) {
        if(n%i == 0) {
            flag = 0;
            break;
        }
    }
    
    if(flag == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++) {
        int n;
        scanf("%d", &n);
        prime_check(n);
    }

    return 0;
}