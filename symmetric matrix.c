#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[10][10], i, j, m;
    printf("Enter order of square matrix: "); 
    scanf("%d", &m);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("Enter value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = i + 1; j < m; j++) { 
            if (a[i][j] != a[j][i]) {
                printf("\nMatrix is not symmetric\n");
                return 0;
            }
        }
    }
    printf("\nMatrix is symmetric\n");
    return 0;
}
