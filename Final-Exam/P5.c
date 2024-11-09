#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++) {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        double div = m /(double) (a * b * c);
        long long convert_div = (long long) div;
        double sub = div - convert_div;
        int found = -1;
        if(sub != 0) {
            printf("%d\n", found);
        }
        else {
            printf("%lld\n", convert_div);
        }
    }

    return 0;
}