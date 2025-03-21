 #include <stdio.h>
 #include <string.h>
 int main(){
     char str1[]="apple";
     char str2[]="banana";
     int result=strcmp(str1,str2);
     if(result==0){
         printf("strings are equal\n");
     }
     else if(result<0){
         printf("string1 comes before string2\n");
     }
     else{
         printf("string2 comes before string1\n");
     }
     return 0;
 }
