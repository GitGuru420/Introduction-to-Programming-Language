#include <stdio.h>
int main() {
    int count = 0;
    for (int j = 1; j <= 5; j++) {
        count++;
        printf("Outer Loop %d\n", j);
        for (int i = 1; i <= 10; i++) {
            count++;
            printf("Inner Loop %d\n", i);
            for(int k = 1; k <= 3; k++) {
                count ++;
            }
        }
        printf("\n");
    }
    printf("%d", count);

    return 0;
}