#include <stdio.h>
void main() {
    int num,sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum=0;
    while(num>0){
        sum=sum+num%10;
        num=num/10;
    }
    printf("Sum of digits of given number is %d",sum);
}
