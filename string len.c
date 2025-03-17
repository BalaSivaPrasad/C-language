#include <stdio.h>
void main() {
    char k[20];
    int counter,i;
    counter=0;
    printf("Enter the string:");
    scanf("%s",&k);
    for(i=0;k[i]!='\0';i++){
        counter=counter+1;
    }
    printf("Length of the string:%d",counter);
}
