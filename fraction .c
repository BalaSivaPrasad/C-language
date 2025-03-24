#include <stdio.h>
int main() {
    int a, b, x; 
    float s; 
    printf("Enter the values of a, b, x: ");
    scanf("%d %d %d", &a, &b, &x);
    if (a * x - b == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        s = (float)(a * x + b) / (a * x - b);   
        printf("The value of s = %f\n", s); 
    }
    return 0;
}
