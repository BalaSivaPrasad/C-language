#include <stdio.h>
int main() {
    int num, dup;
    int rev = 0, rem; 
    printf("Enter a Number: ");
    scanf("%d", &num);
    dup = num;
    while (dup > 0) {
        rem = dup % 10;
        rev = rev * 10 + rem;
        dup = dup / 10;
    }
    if (num == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
