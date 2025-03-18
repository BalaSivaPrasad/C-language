#include <stdio.h>
void main(){
    int m1,m2,m3,m4,m5,m6;
    float avg;
    printf("Enter marks one after another:");
    scanf("%d",&m1);
    scanf("%d",&m2);
    scanf("%d",&m3);
    scanf("%d",&m4);
    scanf("%d",&m5);
    scanf("%d",&m6);
    avg=(m1+m2+m3+m4+m5+m6)/6;
    if(avg>90){
        printf("Grade:O");
    }
    else if(avg>80){
        printf("Grade:A");
    }
    else if(avg>70){
        printf("Grade:B");
    }
    else if(avg>60){
        printf("Grade:c");
    }
    else{
        printf("Grade:F");
    }
}
