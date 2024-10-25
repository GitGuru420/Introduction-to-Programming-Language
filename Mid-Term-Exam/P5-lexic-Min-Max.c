#include <stdio.h>
#include <string.h>
int main() {
    char s1[1001], s2[1001], s3[1001];
    scanf("%s %s %s", s1, s2, s3);

    int cmp1 = strcmp(s1, s2);
    int cmp2 = strcmp(s2, s3);

    // -1, -1
    if(cmp1 < 0 && cmp2 < 0) 
        printf("%s\n%s", s1, s3);
    // -1, 0
    else if(cmp1 < 0 && cmp2 == 0)
        printf("%s\n%s", s1, s2);
    // -1, 1
    else if(cmp1 < 0 && cmp2 > 0) {
        int cmp3 = strcmp(s1, s3);
        if(cmp3 < 0) 
            printf("%s\n%s", s1, s2);
        else if(cmp3 == 0) 
            printf("%s\n%s", s1, s2);
        else
            printf("%s\n%s", s3, s2);
    }
    // 0, -1
    else if(cmp1 == 0 && cmp2 < 0) 
        printf("%s\n%s", s1, s3);
    // 0, 0
    else if(cmp1 == 0 && cmp2 == 0)
        printf("%s\n%s", s2, s3);
    // 0, 1
    else if(cmp1 == 0 && cmp2 > 0)
        printf("%s\n%s", s3, s2);
    // 1, -1
    else if(cmp1 > 0 && cmp2 <  0) {
        int cmp4 = strcmp(s1, s3);
        if(cmp4 < 0)
            printf("%s\n%s", s2, s3);
        else if(cmp4 == 0)
            printf("%s\n%s", s2, s1);
        else
            printf("%s\n%s", s2, s1);
    }
    // 1, 0
    else if(cmp1 > 0 && cmp2 == 0)
        printf("%s\n%s", s2, s1);
    // 1, 1
    else 
        printf("%s\n%s", s3, s1);

    return 0;
}