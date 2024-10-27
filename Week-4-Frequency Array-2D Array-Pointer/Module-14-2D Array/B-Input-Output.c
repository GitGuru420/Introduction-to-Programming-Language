#include <stdio.h>
int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    // declaration 2D array
    int arr[row][col];

    // take 2D array input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // update index value
    // arr[1][2] = 100;

    // print 2D array value (output)
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}