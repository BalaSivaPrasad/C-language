#include <stdio.h>
void main() {
    int nou;
    float bill,surc;
    printf("Enter no.of units availed:");
    scanf("%d",&nou);
    if(nou<=50){
        bill=nou*2;
    }
    else if(nou>50 && nou<100){
        bill=nou*2.5;
    }
    else if(nou>100 && nou<150){
        bill=nou*3;
    }
    else if(nou>150){
        bill=nou*3.5;
    }
    surc=bill*0.2;
    bill=bill+surc;
    printf("Your electricity bill is %f",bill);
}
