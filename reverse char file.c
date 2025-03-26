#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
    char a[15]; 
    char s[20]; 
    int k, j = 0, i, len;
    FILE *fp;
    if (argc != 3) {
        printf("Usage: %s <filename> <number_of_bytes_to_read>\n", argv[0]);
        return 1;
    }
    k = atoi(argv[2]); 
    if (k <= 0 || k >= 15) {
        printf("Invalid number of bytes to read. Must be between 1 and 14.\n");
        return 1;
    }
    fp = fopen(argv[1], "r"); 
    if (fp == NULL) {
        printf("Error: File '%s' cannot be opened.\n", argv[1]);
        return 1;
    }
    int n = fread(a, 1, k, fp);
    a[n] = '\0'; 
    fclose(fp);
    len = strlen(a);
    for (i = len - 1; i >= 0; i--) {
        s[j++] = a[i]; 
    }
    s[j] = '\0';
    printf("Reversed content: %s\n", s);
    return 0;
}
