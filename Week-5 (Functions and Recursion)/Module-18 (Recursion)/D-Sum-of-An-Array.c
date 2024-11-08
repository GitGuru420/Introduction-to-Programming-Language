#include <stdio.h>
int arr[100000], sum;

// void goToIndex(int i, int n) {
//     if(i == n) {
//         return;
//     }
//     sum += arr[i];
//     goToIndex(i + 1, n);
// }
int getSum(int i, int n) {
    if(i == n) {
        return 0;
    }
    return arr[i] + getSum(i + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // sum = 0;
    // goToIndex(0, n);
    int sum = getSum(0, n);
    printf("%d", sum);

    return 0;
}