#include <stdio.h>

int main() {
    int num,fact,i;
    fact=1;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("factorial of %d is %d",num,fact);
    return 0;
}
