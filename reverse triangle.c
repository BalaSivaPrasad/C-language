#include <stdio.h>
void main() {
    int num,i,j;
    printf("Enter num value:");
    scanf("%d",&num);
    for(i=num;i>0;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
