#include <stdio.h>
int main() {
    // char str[5] = "5";
    // printf("%d", str[0]-'0');

    int length;
    scanf("%d", &length);
    char str[20];
    scanf("%s", str);

    int num = 0;
    for(int i=0; i<length; i++) {
        int digit = str[i] - '0';
        num = num * 10 + digit;
    }

    printf("%d\n", num);

    return 0;
}