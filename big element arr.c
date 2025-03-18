#include <stdio.h>
void main() {
    int n[10],biggest,i;
    printf("Enter 10 values:");
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    biggest=0;
    for(i=0;i<10;i++){
        if(biggest<n[i]){
            biggest=n[i];
        }
    }
    printf("Biggest value is:%d",biggest);
}
