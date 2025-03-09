#include <stdio.h>
#define Pi =3.14;
void main() {
    int a,b,Area;
    printf("Enter the length:");
    scanf("%d",&a);
    printf("Enter the breath:");
    scanf("%d",&b);
    (a==b)?printf("Square"):printf("Rectangle");
    Area = a*b;
    printf("\n%d",Area);
}
