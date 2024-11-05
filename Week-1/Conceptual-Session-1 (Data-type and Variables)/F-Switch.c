#include <stdio.h>
int main() {
    int opt;
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    default:
        printf("Invalid Number\n");
        break;
    }

    return 0;
}