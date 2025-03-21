 #include <stdio.h>
 #include <string.h>
 int main(){
     char source[]="Hello,World!";
     char destination[20];
     strcpy(destination,source);
     printf("copied string:%s\n",destination);
     return 0;
 }
