#include <stdio.h>
void main() {
    int num1,num2,op;
    printf("Enter two values:");
    scanf("%d %d",&num1,&num2);
    printf("select operation:");
    printf("1-Addition \t 2-Subtraction \n");
    printf("3-Multiply \t 4-Divide \n");
    scanf("%d",&op);
    switch(op){
        case 1:
               printf("Sum is %d",(num1+num2));
               break;
        case 2:
               printf("Difference is %d",(num1-num2));
               break;
        case 3:
               printf("Product is %d",(num1*num2));
               break;
        case 4: 
               printf("Division is %d",(num1/num2));
               break;
        default:
                printf("Invalid choice");
    }
}
