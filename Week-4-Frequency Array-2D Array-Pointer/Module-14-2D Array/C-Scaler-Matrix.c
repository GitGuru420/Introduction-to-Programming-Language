/*
a 0 0
0 a 0
0 0 a
*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int mat[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // 1st element
    int element = mat[0][0];
    int flag = 1;

    // checking
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == j) {
                if(mat[i][j] != element) {
                    flag = 0;
                    break;
                }
            }
            else {
                if(mat[i][j] != 0) {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 0) {
            break;
        }
    }

    if(flag == 1) {
        printf("Scaler\n");
    }
    else {
        printf("No Scaler\n");
    }

    return 0;
}