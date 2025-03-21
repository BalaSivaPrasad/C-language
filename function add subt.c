#include <stdio.h>
void add(int a,int b);
void subt(int a,int b);
int main() {
    int a,b;
    printf("Enter a,b values:");
    scanf("%d",&a);
    scanf("%d",&b);
    add(a,b);
    subt(a,b);
    return 0;
}
void add(int a,int b){
    printf("addition is:%d\n",a+b);
}
void subt(int a,int b){
    printf("subtraction is:%d\n",a-b);
}
