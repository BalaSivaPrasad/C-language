#include <stdio.h>
int add(int x,int y);
int subt(int x,int y);
int main() {
    int a,b,sum,differ;
    printf("Enter a,b values:");
    scanf("%d",&a);
    scanf("%d",&b);
    sum=add(10,20);
    differ=subt(a,b);
    printf("%d\n %d\n",sum,differ);
    return 0;
}
int add(int x,int y){
    return x+y;
}
int subt(int x,int y){
    return x-y;
}
