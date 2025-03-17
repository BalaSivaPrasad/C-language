#include <stdio.h>
void main() {
    int num,a,b,c;
    a=0;
    b=1;
    printf("Enter num value:");
    scanf("%d",&num);
    printf("%d  %d  ",a,b);
    num=num-2;
    while(num>0){
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
        num=num-1;
    }
}
