#include <stdio.h>
int main() {
    char k[20];
    int counter = 0, i;
    printf("Enter the string: ");
    scanf("%s", k); // No need for '&' with string
    // Finding the length of the string
    while (k[counter] != '\0') {
        counter++;
    }
    // Palindrome check
    i = 0;
    counter = counter - 1;
    while (i < counter) { // Only need to check half of the string
        if (k[i] != k[counter]) {
            printf("Not a palindrome\n");
            return 0;
        }
        i++;
        counter--;
    }
    printf("Palindrome\n");
    return 0;
}
