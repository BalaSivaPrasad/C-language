#include <stdio.h>
void main() {
    int i,key,k;
    int n[]={10,5,18,95,13,28,34,47,62};
    printf("Enter search key:");
    scanf("%d",&key);
    k=0;
    for(i=0;i<=8;i++){
        if(key==n[i]){
            printf("Element found at index:%d,position:%d",i,i+1);
            k=1;
        }
    }
    if(k==0){
        printf("Element not found");
    }
}
