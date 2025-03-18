#include <stdio.h>
void main() {
    char name[20];
    char k;
    int i, found = 0;
    printf("Enter name: ");
    scanf("%s", name); 
    printf("Enter a character to search in name: ");
    scanf(" %c", &k); // Space before %c to consume newline
    for(i = 0; name[i] != '\0'; i++) { // Correct loop condition
        if(name[i] == k) {
            printf("Character found at position: %d\n", i + 1);
            found = 1; // Mark as found
        }
    }
    if (!found) {
        printf("Character not found in the name.\n");
    }
}
