#include <stdio.h>
int main() {
    FILE *fp;
    int a, b, c;
    printf("Enter a, b values: ");
    scanf("%d %d", &a, &b);
    c = a + b;
    // Writing to file
    fp = fopen("addition.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fprintf(fp, "%d", c);
    fclose(fp);
    printf("Sum written to file successfully.\n");
    // Reading from file
    fp = fopen("addition.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    // Read and check if fscanf works
    if (fscanf(fp, "%d", &c) != 1) {
        printf("Error reading from file!\n");
        fclose(fp);
        return 1;
    }
    printf("Sum read from file: %d\n", c);
    fclose(fp);
    return 0;
}
