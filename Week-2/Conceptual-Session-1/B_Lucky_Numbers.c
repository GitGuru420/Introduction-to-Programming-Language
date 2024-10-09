#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int second_digit = n%10;
    int first_digit = n/10;

    if(first_digit % second_digit == 0 || second_digit % first_digit == 0)
        printf("YES");
    else 
        printf("NO");

    return 0;
}