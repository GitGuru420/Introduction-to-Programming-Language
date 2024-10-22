#include <stdio.h>
int main() {
    // char str[10] = "abcd ef";

    // for(int i=0; i<4; i++) {
    //     printf("%c", str[i]);
    // }
    // printf("%s", str);
    // printf("\n");

    // char str2[20];
    // scanf("%s", str2);
    // scanf("%[^\n]s", str2);
    // printf("%s\n", str2);

    char str3[20];
    fgets(str3, sizeof(str3), stdin);
    // printf("%s", str3);
    fputs(str3, stdout);

    return 0;
}