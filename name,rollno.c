#include <stdio.h>
int main() {
    int rollno;
    char name[15];
    printf("Enter rollno:");
    scanf("%d",&rollno);
    printf("Enter name:");
    scanf("%s",&name);
    printf("%d\n",rollno);
    printf("%s",name);
    return 0;
}
