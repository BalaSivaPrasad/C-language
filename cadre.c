#include <stdio.h>
void main() {
    int cad=0;
    printf("Enter value:");
    scanf("%d",&cad);
    switch(cad){
        case 25:
        case 75:
                printf("c cadre");
                break;
        case 48:
        case 88:
                printf("B cadre");
                break;
        case 109:
        case 110:
                 printf("A cadre");
                 break;
        default:
                printf("No cadre");
                break;
    }
}
