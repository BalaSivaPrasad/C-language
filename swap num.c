#include <stdio.h>
void main() {
    int num1,num2;
    printf("Enter num1,num2 values:");
    scanf("%d %d",&num1,&num2);
    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;
    printf("%d %d",num1,num2);
}
