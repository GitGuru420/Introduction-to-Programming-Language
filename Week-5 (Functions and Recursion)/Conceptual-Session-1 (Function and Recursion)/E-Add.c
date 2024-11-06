#include <stdio.h>

// return + parameter
int add1(int a, int b) {
    int sum = a + b;
    return sum;     
}

// return + no parameter
int add2() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    return sum;
}

// no return + parameter
void add3(int a, int b) {
    int sum = a + b;
    printf("%d", sum);
}

// no return + no parameter
void add4() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("%d", sum);
}

int main() {
    /*1. return + parameter
    Sint x, y;
    scanf("%d %d", &x, &y);
    int result = add1(x, y);
    printf("%d", result);
    */
   
   /*2. return + no parameter
   int result = add2();
   printf("%d", result);
   */
    
    /*3. no return + parameter
    int x, y;
    scanf("%d %d", &x, &y);
    add3(x, y);
    */

    add4();

    return 0;
}