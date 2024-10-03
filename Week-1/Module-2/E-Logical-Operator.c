#include <stdio.h>
#include <stdbool.h>
int main() {
    // && operator
    // bool result = (2<5);
    // bool result = (2<5) && (4<5);
    // bool result = (2<5) && (4>5);
    // bool result = (2<5) && (4>5) && (5<6);
    // bool result = (2<5) && (4<5) && (5<6);

    // || operator
    // bool result = (2<5) || (4>5) || (5<6);
    //             true     false   true

    bool result = !((2<5) || (4>5) || (5<6));
    printf("%d", result);

    return 0;
}