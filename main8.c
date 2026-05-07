#include<stdio.h>
int main()
{
  float m;
  printf("enter marks=");
  scanf("%f",&m);

if(m>=90&&m<=100){
    printf("you got A\n");
}
else if(m>=80&&m<=89){
    printf("you got B\n");
}
else if(m>=70&&m<=79){
    printf("you got c\n");
}
else if(m>=60&&m<=69){
    printf("you got \n");
}
else if(m>=50&&m<=59){
    printf("you got E\n");
}
else if(m<50){
    printf("you got F\n");
}


    return 0;
}
