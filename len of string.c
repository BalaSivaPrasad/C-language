#include <stdio.h>
#include <string.h>
void main() {
    int n;
    char name[20];
    printf("Enter name:");
    scanf("%s",&name);
    n = strlen(name);
    printf("No.of characters:%d\n",n);
    printf("No.of characters:%d",strlen(name));
}
