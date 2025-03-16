#include <stdio.h>
void main() {
    int num,limit;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter limit:");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++){
        printf("%d*%d=%d \n",num,i,num*i);
    }
}
