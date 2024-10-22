#include <stdio.h>
#include <string.h>
int main() {
    char a[10];
    char b[10] = "Raisul";

    // way-1
    // int length = strlen(b);
    // for(int i=0; i<length; i++) {
    //     a[i] = b[i];
    // }
    // a[length] = '\0';   // for last index null character

    // way-2
    // strcpy(destination, source)
    // copy b to a
    strcpy(a, b);
    printf("%s %s", a, b);

    strcpy(a, "Welcome");
    printf("\n%s", a);

    return 0;
}