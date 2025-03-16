#include <stdio.h>
void main() {
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("The given character is vowel");
                  break;
        default:printf("The given character is consonant");
    }
}
