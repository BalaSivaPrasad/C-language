#include <stdio.h>
#include <string.h>
int main() {
    char line[81];  
    int characters = 0, words = 0, lines = 0;
    printf("TYPE ANY TEXT.\n");
    printf("GIVE ONE SPACE AFTER EACH WORD.\n(Press ENTER on an empty line to stop input)\n");
    while (1) { 
        if (fgets(line, sizeof(line), stdin) == NULL) 
            break;  
        if (line[0] == '\n') 
            break;
        int i = 0, in_word = 0;
        while (line[i] != '\n' && line[i] != '\0') {
            if (line[i] != ' ' && line[i] != '\t') {
                characters++;
                if (!in_word) {
                    words++;
                    in_word = 1;
                }
            } else {
                in_word = 0;
            }
            i++;
        }
        lines++;
    }
    printf("\nNumber of lines = %d\n", lines);
    printf("Number of words = %d\n", words);
    printf("Number of characters = %d\n", characters);
    return 0;
}
