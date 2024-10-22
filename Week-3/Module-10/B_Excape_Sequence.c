#include <stdio.h>
int main() {
    char str[] = "\'Bangla\'\\desh \tis a \"beautiful\" coun\0try.";
    puts(str);

    return 0;
}