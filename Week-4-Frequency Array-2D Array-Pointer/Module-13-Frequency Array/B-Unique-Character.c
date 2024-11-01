#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int len = strlen(str);
    int freq[26] = {0};
    for(int i=0; i<len; i++) {
        char ch = str[i];
        int index = ch - 'a';
        freq[index] = 1;
    }

    int count = 0;
    for(int i=0; i<26; i++) {
        // printf("%c %d\n", i+'a', freq[i]);
        count += freq[i];
        if(freq[i] == 1)
            printf("%c %d\n", i+'a', freq[i]);
    }
    printf("Unique Character: %d", count);

    return 0;
}