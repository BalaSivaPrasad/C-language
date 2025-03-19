#include <stdio.h>
#include <string.h>
void main() {
    int n;
    char name1[] = "BSP";
    char name2[] = "Siva prasad";
    n = strcmp(name1, name2);
    if (n == 0) {
        printf("Strings are equal\n");
    } 
    else if (n > 0) {
        printf("name1 is bigger\n");
    } 
    else {
        printf("name2 is bigger\n");
    }
}
