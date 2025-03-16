#include <stdio.h>
void main() {
    int num, remai, rev = 0, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num; 
    while (num > 0) {
        remai = num % 10;
        rev = rev * 10 + remai; 
        num = num / 10;
    }
    printf("Reverse of given number is %d \n", rev);

    if (n == rev) {
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }
}
