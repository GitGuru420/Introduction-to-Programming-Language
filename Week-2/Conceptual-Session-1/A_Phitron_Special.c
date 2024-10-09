#include <stdio.h>
int main() {
    int bondho_koy_din;
    scanf("%d", &bondho_koy_din);

    if(bondho_koy_din >= 3) {
        // cox's bazar
        printf("Cox's Bazar\n");
        
        int remaining_days = bondho_koy_din - 3;
        if(remaining_days >= 3) {
            printf("Saint Martin\n");
        }
        else {
            printf("Cox's Bazar Ei Thakbo\n");
        }
    }
    else if(bondho_koy_din >= 2) {
        // onno destination
        printf("Onno Destination\n");
    }
    else {
        // basa
        printf("Module Revision\n");
    }

    return 0;
}