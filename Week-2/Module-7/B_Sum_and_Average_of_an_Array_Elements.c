#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int ar[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &ar[i]);
    }

    // sum
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += ar[i];
    }
    printf("Sum = %d\n", sum);

    // average
    double average = (double)sum / n;
    printf("Average = %lf", average);

    return 0;
}