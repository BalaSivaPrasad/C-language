#include <stdio.h>
int fact(int n);
int main() {
    int n, f;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        f = fact(n);
        printf("The factorial of the given number is: %d\n", f);
    }
    return 0;
}
int fact(int n) {
    int i, f = 1;
    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}
