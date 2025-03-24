#include <stdio.h>
#include <string.h>
int main() {
    char a[30], b[30], c[60]; 
    int pos, i = 0, j = 0, la, lb, lc;
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    printf("Enter a substring: ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0'; 
    printf("Enter position for insertion: ");
    scanf("%d", &pos);
    la = strlen(a);
    lb = strlen(b);
    if (pos < 0 || pos > la) {
        printf("Invalid position!\n");
        return 1;
    }
    for (i = 0; i < pos; i++) {
        c[i] = a[i];
    }
    for (j = 0; j < lb; j++) {
        c[i++] = b[j];
    }
    for (j = pos; j < la; j++) {
        c[i++] = a[j];
    }
    c[i] = '\0';
    printf("String after insertion: %s\n", c);
    return 0;
}
