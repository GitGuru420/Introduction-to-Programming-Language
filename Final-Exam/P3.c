#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];
    int temp[n][m];
    int temp2[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    // copy array mat to temp
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            temp[i][j] = mat[i][j];
        }
    }
    // column swap
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(j == 0) {
                mat[i][j] = mat[i][m-1];
            }
            if(j == m-1) {
                mat[i][j] = temp[i][0];
            }
        }
    }
    // copy new mat array to temp2
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            temp2[i][j] = mat[i][j];
        }
    }
    // row swap
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(i == 0) {
                mat[i][j] = mat[n-1][j];
            }
            if(i == n-1) {
                mat[i][j] = temp2[0][j];
            }
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}