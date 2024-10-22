#include <stdio.h>
#include <string.h>
int main() {
    char str[50] = "Bangladesh is a beautiful country";

    // way-1: counter(for loop)
    // int length = 0;
    // for(int i=0; str[i] != '\0'; i++) {
    //     length++;
    // }

    // way-2: function
    int length = strlen(str);
    printf("Length: %d", length);

    return 0;
}