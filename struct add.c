#include <stdio.h>
#include <string.h>
void main() {
    struct add{
        int a;
        int b;
    };
    struct add A;
    scanf("%d",&A.a);
    scanf("%d",&A.b);
    printf("%d",A.a+A.b);
}
