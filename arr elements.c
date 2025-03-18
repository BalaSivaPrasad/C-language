#include <stdio.h>
void main() {
    int ar[5],i;
    printf("Enter five elements:");
    for(i=0;i<=4;i++){
        scanf("%d",&ar[i]);
    }
    printf("Given elements are:\n");
    for(i=0;i<5;i++){
        printf("%d\t",ar[i]);
    }
}
