#include <stdio.h>
int main() {
    char X;
    scanf("%c", &X);

    if(X >= 'a' && X <= 'z') {
        // convert lowercase to uppercase
        X -= 32;
    }
    else {
        // covert uppercase to lowercase
        X += 32;
    }

    // print character
    printf("%c\n", X);

    return 0;
}