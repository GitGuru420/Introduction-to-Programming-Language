#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char str[n+1];
    scanf("%s", str);

    int freq[26] = {0};
    for(int i=0; i<n; i++) {
        int index = str[i] - 'a';
        freq[index] ++;
    }

    for(int i=0; i<26; i++) {
        if(freq[i] != 0)
            printf("%c : %d\n",i+'a', freq[i]);
    }
    return 0;
}