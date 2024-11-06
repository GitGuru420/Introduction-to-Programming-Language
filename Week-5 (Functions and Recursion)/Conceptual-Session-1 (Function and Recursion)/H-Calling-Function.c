#include <stdio.h>
// call by value
// void change_to_10(int x) {
//     // printf("%d\n", &x);
//     x = 10;
// }

// call by reference
void change_to_10(int *x) {
    *x = 10;
}
int main() {
    int n = 100;
    // printf("%d\n", &n);
    // change_to_10(n);
    change_to_10(&n);
    printf("%d\n", n);

    return 0;
}