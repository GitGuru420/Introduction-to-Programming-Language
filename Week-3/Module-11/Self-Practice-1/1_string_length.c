#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    // scanf("%s", &str);
    scanf("%[^\n]s", &str);

    // way-1
    // int length = 0;
    // for(int i=0; str[i] != '\0'; i++) {
    //     length++;
    // }
    // printf("Length is: %d\n", length);

    // way-2
    int length = strlen(str);
    printf("Length is: %d\n", length);

    return 0;
}