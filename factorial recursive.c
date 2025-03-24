#include <stdio.h>
long long int fact(int n);
int main() {
    int n;
    long long int res;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        res = fact(n);
        printf("THE FACTORIAL OF %d IS: %lld\n", n, res);
    }
    return 0;
}
long long int fact(int n) {
    if (n == 0 || n == 1) 
        return 1;
    return n * fact(n - 1);
}
