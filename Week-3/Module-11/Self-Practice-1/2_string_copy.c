#include <stdio.h>
#include <string.h>
int main() {
    char str1[50], str2[50];
    scanf("%[^\n]s", &str1);

    // way-1
    // int length = strlen(str1);
    // printf("Before copy str1: %s\n", str1);
    // for(int i=0, j=0; str1[i] != '\0'; i++, j++) {
    //     str2[j] = str1[i];
    // }
    // str2[length] = '\0';
    // printf("After copy str1 to str2: %s", str2);

    // way-2
    // function: strcpy(destination, source);
    strcpy(str2, str1);
    printf("Copy string: %s", str2);

    return 0;
}