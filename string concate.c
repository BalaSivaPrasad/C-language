 #include <stdio.h>
 #include <string.h>
 int main(){
     char str1[20]="apple";
     char str2[]="banana";
     strcat(str1,str2);
     printf("concatenated string:%s\n",str1);
     return 0;
 }
