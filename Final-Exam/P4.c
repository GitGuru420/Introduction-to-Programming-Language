#include <stdio.h>
#include <string.h>
int main() {
    char s1[101], s2[101], s3[101];
    scanf("%s %s %s", s1, s2, s3);

    int len = strlen(s1);
    int count_no_match = 0;
    for(int i=0; i<len; i++) {
        if(s1[i] != s2[i]) {
            count_no_match++;
        }
        if(s1[i] != s3[i]) {
            count_no_match++;
        }
    }
    printf("%d", count_no_match);

    return 0;
}