#include <stdio.h>
#include <string.h>
int main() {
    char str1[50], str2[50];
    scanf("%s %s", &str1, &str2);

    // way-1
    // int len_str1 = strlen(str1);
    // int len_str2 = strlen(str2);
    // int length = len_str1 + len_str2;

    // for(int i=len_str1, j=0; i<length; i++, j++) {
    //     str1[i] = str2[j];
    // }
    // str1[length] = '\0';
    // printf("Concat string: %s", str1);

    // way-2
    // function: strcat(source, destination)
    strcat(str1, str2); // str1 to str2
    printf("Concat string: %s", str1);

    return 0;
}