#include <stdio.h>
void fun(int x[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
}

int fun2(int x[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += x[i];
    }
    return sum;
}


int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    fun(arr, n);
    int result = fun2(arr, n);
    printf("%d", result);

    return 0;
}