#include <stdio.h>
#include <string.h>
int main() {
    char a[20] = "Hello";
    char b[20] = "World";

    // int len_a = strlen(a);
    // int len_b = strlen(b);
    // int length = len_a + len_b;

    // for(int i=len_a, j=0; i<length; i++, j++) {
    //     a[i] = b[j];
    // }
    // a[length] = '\0';
    // printf("%s", a);

    // library function
    // strcat(source, destination)
    strcat(a, b);
    printf("%s%s", a, b);


    return 0;
}