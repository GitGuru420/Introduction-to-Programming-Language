#include <stdio.h>
int main() {
    // declaration & initialization
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {8, 7, 4, 3}};

    // print 2D array value
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}