#include <stdio.h>
#include <stdbool.h>
bool main() {
    int a,b;
    bool result;
    printf("Enter a,b values:");
    scanf("%d %d",&a,&b);
    result=a>b;
    printf("%d",result);
}
