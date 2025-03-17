#include <stdio.h>
void main() {
    int sum,n;
    int count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    sum=0;
    sum=(n*(n+1))/2;
    printf("Sum of %d natural numbers is:%d",n,sum);
}
