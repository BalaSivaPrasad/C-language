#include <stdio.h>
void main() {
    int A[2][2],B[2][2],C[2][2],i,j;
    printf("Enter the elements of A:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of B:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("product of A and B is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            C[i][j]=0;
            for(int k=0;k<2;k++){
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",C[i][j]);
        }
       printf("\n"); 
    } 
}
