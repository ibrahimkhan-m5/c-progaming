#include<stdio.h>
int main()
{
  float i;
  printf("enter your income=");
  scanf("%f",&i);
  if(i>=2.5&& i<=5){
    printf("after 5% tax your income =%.2flakhs",(i-i*(5.0/100)));
  }
  else if(i>=5&& i<=10){
    printf("after 20% tax your income =%.2flakhs",(i-i*(20.0/100)));
  }
  else if(i>10){
    printf("after 30% incone your incone =%.2flakhs",(i-i*(30.0/100)));
  }
  else if(i<2.5){
    printf("you dont need to paid tax");
  }

    return 0;
}
