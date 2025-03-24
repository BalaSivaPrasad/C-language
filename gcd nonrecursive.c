#include <stdio.h>
int gcdNonRecursive(int m, int n) {
    while (n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
    }
    return m; 
}
int main() {
    int a, b, igcd;
    printf("Enter the two numbers whose GCD is to be found: ");
    scanf("%d %d", &a, &b);
    if (a < 0) 
        a = -a;  
    if (b < 0)
        b = -b;
    igcd = gcdNonRecursive(a, b);
    printf("GCD of %d and %d is: %d\n", a, b, igcd);
    return 0;
}
