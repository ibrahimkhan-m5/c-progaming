#include<stdio.h>
int main()
{
  int age;
  printf("enter age=");
  scanf("%d",&age);
  if(age>60){
    printf("you can drive and you are a senior citizen");
  }
    else if(age>18){
      printf("you can drive");
    }
  else{
    printf("you can not drive");
  }
   
  
    return 0;
}