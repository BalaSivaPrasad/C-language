#include <stdio.h>
long long int fact(int n); 
int main() {
    int n;
    long long int factorial;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        factorial = fact(n);
        printf("The factorial of %d is: %lld\n", n, factorial);
    }
    return 0;
}
long long int fact(int n) {
    long long int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
