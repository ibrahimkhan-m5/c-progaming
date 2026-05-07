#include<stdio.h>
int main()
{
  int a;
  printf("enter 1 to 4 any number=");
  scanf("%d",&a);
  switch(a){
      case 1: printf("you entered 1");
      break;
      case 2:printf("you enterd 2");
      break;
      case 3:printf("you entered 3");
      break;
      case 4:printf("you entered 4");
      break;
      default:printf("nothing matched");
  }  
  
    return 0;
}