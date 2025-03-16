#include <stdio.h>
void main() {
  int num1=0,num2=0,num3=0;
  printf("Enter three numbers:");
  scanf("%d",&num1);
  scanf("%d",&num2);
  scanf("%d",&num3);
  if(num1>num2){
      if(num1>num3){
          printf("num1 is greater");
      }
      else if(num3>num1){
          printf("num3 is greater");
      }
      else{
          printf("num1,num3 are greater");
      }
  }
  else if(num2>num1){
      if(num2>num3){
          printf("num2 is greater");
      }
      else if(num3>num2){
          printf("num3 is greater");
      }
      else{
          printf("num2,num3 are greater");
      }
  }
  else{
      if(num1>num3){
          printf("num1,num2 are greater");
      }
      else if(num>num1){
          printf("num3 is greater");
      }
      else{
          printf("All numbers are equal");
      }
  }
}
