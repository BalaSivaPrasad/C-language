#include <stdio.h>
void main() {
    int num,i,count;
    printf("Enter a number: ");
    scanf("%d", &num);
    count=0;
    for(i=1;i<=num;i++){
        if(num%i==0){
            count+=1;
        }
    }
    if(count==2){
        printf("%d is a prime number",num);
    }
    else{
        printf("%d is not a prime number",num);
    }
}
