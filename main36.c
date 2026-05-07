#include<stdio.h>
// function prototype
int sum(int,int);
//function defination
int sum(int x,int y)
{
printf("the sum is=%d\n",x+y);
return x+y;
}
int main(){
int a=1,b=2;
sum(a,b);
int a1=12,b1=13;
sum(a1,b1);
int a2=15,b2=15;
sum(a2,b2);




    return 0;
}