#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int p_dia_sum = 0, s_dia_sum = 0, all_element_sum = 0;
    if (n == m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                all_element_sum += mat[i][j];
                if (i == j && mat[i][j] == 1) {
                    p_dia_sum += mat[i][j];
                }
                if (i + j == n - 1 && mat[i][j] == 1) {
                    s_dia_sum += mat[i][j];
                }
            }
        }

        int others_element_sum = all_element_sum - (p_dia_sum + s_dia_sum);
        if(n%2 != 0 && p_dia_sum == n && s_dia_sum == n && others_element_sum == -1) {
            printf("YES\n");
        }
        else if(n%2 == 0 && p_dia_sum == n && s_dia_sum == n && others_element_sum == 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    else {
        printf("NO\n");
    }

    return 0;
}