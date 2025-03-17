#include <stdio.h>
void main() {
    int limit,i,j,sum,temp;
    int count=0;
    printf("Enter the limit:");
    scanf("%d",&limit);
    sum=0;
    for(i=2;i<=limit;i++){
        count=0;
        temp=i;
        for(j=1;j<=temp;j++){
            if(temp%j==0){
                count+=1;
            }
        }
        if(count==2){
                printf("%d\t",temp);
                sum=sum+temp;
        }
    }
    printf("\n Sum of primes upto %d is %d",limit,sum);
}
