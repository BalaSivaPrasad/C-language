#include <stdio.h>
void main() {
  int num1=0,num2=0;
  printf("Enter two numbers:");
  scanf("%d",&num1);
  scanf("%d",&num2);
  if(num1>num2){
      printf("num1 is greater");
  }
  else if(num2>num1){
      printf("num2 is greater");
  }
  else{
      printf("Equal numbers");
  }
}
