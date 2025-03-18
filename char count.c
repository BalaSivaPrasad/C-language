#include <stdio.h>
void main() {
    char name[20];
    int i, v_count,c_count;
    v_count=0;
    c_count=0;
    printf("Enter name: ");
    scanf("%s", name);
    for(i=0;name[i]!='\0';i++){
        switch(name[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                     v_count+=1;
                     break;
            default:
                    c_count+=1;
                    break;
        }
    }
    printf("\n No.of variables:%d",v_count);
    printf("\n No.of consonants:%d",c_count);
}
