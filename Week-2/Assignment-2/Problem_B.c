#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int N[n];

    int count_0 = 0, count_1 = 0;
    for(int i=0; i<n; i++) {
        scanf("%d", &N[i]);
    }
    
    for(int i=0; i<n; i++) {
        if(N[i] == 0) {
            count_0++;
        }
        else {
            count_1++;
        }
    }
    printf("%d %d", count_0, count_1);

    return 0;
}