#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n);

    int mat[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int pri_dia_sum = 0, sec_dia_sum = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == j) {
                pri_dia_sum += mat[i][j];
            }
            if(i+j == n-1) {
                sec_dia_sum += mat[i][j];
            }
        }
    }

    int difference = abs(pri_dia_sum - sec_dia_sum);
    printf("%d\n", difference);

    return 0;
}