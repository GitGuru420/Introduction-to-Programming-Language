// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        char s[101];
        scanf("%s", s);

        int s_len = strlen(s);
        if(s_len <= 10) {
            printf("%s\n", s);
        }
        else {
            printf("%c%d%c\n", s[0], s_len - 2, s[s_len-1]);
        }
    }

    return 0; 
}