#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp1, *fp2, *fp3;
    char file1[100], file2[100], file3[100], ch; 
    printf("Program to merge two files.\n");
    printf("Enter first file name: "); 
    scanf("%s", file1);
    printf("Enter second file name: "); 
    scanf("%s", file2);
    printf("Enter destination file name: "); 
    scanf("%s", file3);
    fp1 = fopen(file1, "r");
    if (fp1 == NULL) {
        printf("Source file '%s' not found. Creating a new file...\n", file1);
        fp1 = fopen(file1, "w");
        if (fp1 == NULL) {
            printf("Error creating file: %s\n", file1);
            return 1;
        }
        fprintf(fp1, "Default content for %s.\n", file1);
        fclose(fp1);
        printf("File '%s' created. Please run the program again.\n", file1);
        return 1;
    }
    fp2 = fopen(file2, "r");
    if (fp2 == NULL) {
        printf("Source file '%s' not found. Creating a new file...\n", file2);
        fp2 = fopen(file2, "w");
        if (fp2 == NULL) {
            printf("Error creating file: %s\n", file2);
            fclose(fp1);
            return 1;
        }
        fprintf(fp2, "Default content for %s.\n", file2);
        fclose(fp2);
        printf("File '%s' created. Please run the program again.\n", file2);
        fclose(fp1);
        return 1;
    }
    fp3 = fopen(file3, "w");
    if (fp3 == NULL) {
        printf("Error creating destination file: %s\n", file3);
        fclose(fp1);
        fclose(fp2);
        return 1;
    }
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp3);
    }
    fclose(fp1);
    while ((ch = fgetc(fp2)) != EOF) {
        fputc(ch, fp3);
    }
    fclose(fp2);
    fclose(fp3);
    printf("File merging successful! Contents of '%s' and '%s' have been merged into '%s'.\n", file1, file2, file3);
    return 0;
}
