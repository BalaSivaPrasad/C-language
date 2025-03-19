#include <stdio.h>
void main() {
    int A[3][3],B[3][3],C[3][3],i,j;
    printf("Enter the elements of A:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of B:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("sum of A and B is:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            C[i][j]=A[i][j]+B[i][j];
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}
