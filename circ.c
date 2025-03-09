#include <stdio.h>
#define Pi =3.14;
void main() {
    const float pi=3.14;
    float r,Area,circ;
    printf("Enter radius of circle:");
    scanf("%f",&r);
    Area = 3.14*r*r;
    printf("Area of circle is %f",Area);
    circ = 2*3.14*r;
    printf("\n circumference of circle is %f",circ);
}
