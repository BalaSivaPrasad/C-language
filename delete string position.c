#include <stdio.h>
#include <string.h>
void main() {
    char a[30], c[30];
    int pos, i = 0, La, j, n;
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin); 
    a[strcspn(a, "\n")] = '\0';
    printf("Enter position for deletion: ");
    scanf("%d", &pos);
    printf("Enter number of characters to be deleted: ");
    scanf("%d", &n);
    La = strlen(a);
    if (pos < 0 || pos >= La) {
        printf("Invalid position!\n");
        return;
    }
    if (pos + n > La) {
        n = La - pos;  
    }
    for (i = 0; i < pos; i++) {
        c[i] = a[i];
    }
    for (j = pos + n; j < La; j++) {  
        c[i++] = a[j];
    }
    c[i] = '\0';
    printf("String after deletion: %s\n", c);
}
