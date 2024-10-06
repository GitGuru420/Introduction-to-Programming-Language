#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a>b) {
        if(b>c)
            printf("%d %d", c, a);
        else {
            if(a>c)
                printf("%d %d", b, a);
            else 
                printf("%d %d", b, c);
        }
    }
    else {
        if(b>c) {
            if(a>c)
                printf("%d %d", c, b);
            else
                printf("%d %d", a, b);
        }
        else 
            printf("%d %d", a, c);
    }

    return 0;
}