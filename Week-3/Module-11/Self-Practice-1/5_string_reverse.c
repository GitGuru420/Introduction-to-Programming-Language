#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    scanf("%s", &s1);

    // way-1
    // int len_s1 = strlen(s1);
    // for(int i=len_s1-1, j=0; i>=0; i--, j++) {
    //     s2[j] = s1[i];
    // }
    // printf("%s", s2);

    // way-2
    // function: strrev(string_name)
    strrev(s1);
    printf("%s", s1);

    return 0;
}