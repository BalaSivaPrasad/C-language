#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    FILE *fs;
    char fname[100]; 
    char ch;
    printf("Enter the file name: ");
    fgets(fname, sizeof(fname), stdin);
    fname[strcspn(fname, "\n")] = '\0';
    printf("Opening file: '%s'\n", fname);
    fs = fopen(fname, "r");
    if (fs == NULL) {
        perror("Error");  
        return 1;       
    }
    while ((ch = fgetc(fs)) != EOF) {
        putchar(ch);
    }
    fclose(fs); // Close file
    return 0;
}
