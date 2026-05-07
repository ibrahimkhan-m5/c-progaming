#include<stdio.h>
int main()
{
  float i,tax=0;
  printf("enter your income=");
  scanf("%f",&i);
  if(i<=250000){
    tax=0;
  }
  if(i>250000&&i<=500000){
    tax=0.05*(i-250000);
  }
  if(i>500000&&i<=1000000){
    tax=0.05*(500000-250000)+0.2*(i-500000);
  }
  if(i>1000000){
    tax=0.05*(500000-250000)+0.2*(1000000-500000)+0.3*(i-1000000);
  }
printf("you have to paid total tax=%.2f",tax);
    return 0;
}