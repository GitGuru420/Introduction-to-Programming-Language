#include <stdio.h>
int main() {
    int day = 5;
    printf("Before Switch Case\n");
    switch(day) {
        case 1: 
            printf("Saturday");
            break;
        case 2: 
            printf("Sunday");
            break;
        case 3: 
            printf("Monday");
            break;
        case 4: 
            printf("Tuesday");
            break;
        case 5: 
            printf("Wednesday");
            break;
        case 6: 
            printf("Thursday");
            break;
        case 7: 
            printf("Friday");
            break;
        default:
            printf("Wrong day");
    }
    printf("\nAfter Switch Case");
    return 0;
}