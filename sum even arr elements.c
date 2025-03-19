#include <stdio.h>
void main() {
    int a[10];
    int sum,i;
    sum=0;
    printf("Enter 10 elements:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            sum=sum+a[i];
        }
    }
    printf("Sum of even elements:%d",sum);
}
