#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *ft, *fs;
    int c = 0;
    int ch;
    fs = fopen("a.txt", "r");
    if (fs == NULL) {
        printf("Source file 'a.txt' not found. Creating a new file...\n");
        fs = fopen("a.txt", "w");
        if (fs == NULL) {
            perror("Error creating source file");
            return 1;
        }
        fprintf(fs, "Hello, Ram Charan!\n");
        fclose(fs);
        printf("File 'a.txt' created. Run the program again.\n");
        return 1;
    }
    ft = fopen("b.txt", "w");
    if (ft == NULL) {
        perror("Error opening target file b.txt");
        fclose(fs);
        return 1;
    }
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, ft);
        c++;
    }
    printf("%d bytes copied from 'a.txt' to 'b.txt'\n", c);
    fclose(fs);
    fclose(ft);
    return 0;
}
