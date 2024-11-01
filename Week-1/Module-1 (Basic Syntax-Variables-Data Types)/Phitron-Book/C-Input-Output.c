#include <stdio.h>
int main() {
    int age;
    float pi;
    char letter;

    // input: scanf() function
    // syntax: scanf("%format_specifier", &variable_name);
    scanf("%d %f %c", &age, &pi, &letter);

    // output: printf() function
    printf("Age: %d\n", age);
    printf("PI: %f\n", pi);
    printf("Letter: %c\n", letter);
    printf("Initial\n");

    return 0;
}