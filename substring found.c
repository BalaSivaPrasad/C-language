 #include <stdio.h>
 #include <string.h>
 int main(){
     char str[]="apple,banana";
     char sub[]="banana";
     char*result=strstr(str,sub);
     if(result!=NULL){
         printf("substring found at position:%d\n",result-str);
     }
     else{
         printf("substring not found \n");
     }
     return 0;
 }
